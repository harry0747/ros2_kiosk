import time
import cv2
import numpy as np
import cv2.aruco as aruco
import rclpy
from rclpy.node import Node
from rclpy.action import ActionClient
from rclpy.qos import QoSProfile
from my_custom_interface.srv import ORDER
from my_custom_interface.srv import ORDERR
from my_custom_interface.action import COME
from action_msgs.msg import GoalStatus
from std_msgs.msg import String
from std_msgs.msg import Int8

class Machine2(Node):

    def __init__(self):
        super().__init__('machine2')
        qos_profile = QoSProfile(depth=10)

        # ROS2 서비스와 액션 클라이언트 초기화
        self.transfer_client = self.create_client(ORDERR, 'third')
        while not self.transfer_client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Service not available, waiting again...')
        
        self.come_client = ActionClient(self, COME, 'second')
        self.go_publisher = self.create_publisher(String, 'go', qos_profile)
        self.req = ORDERR.Request()

        # ArUco 마커 관련 설정
        self.aruco_dict = aruco.getPredefinedDictionary(aruco.DICT_6X6_250)
        self.parameters = aruco.DetectorParameters()
        # 현재는 포인트값들 임의로 넣어놨는데 실제로 적용할 시에는 실험치 필요
        self.src_points = np.array([
            [370, 129], [267, 141], [187, 144], [429, 159], [476, 143],
            [245, 128], [389, 96], [465, 139], [276, 112], [365, 149],
            [507, 150], [422, 170], [266, 140], [196, 133], [319, 148]
        ], dtype=np.float32)
        self.dst_points = np.array([
            [-83.2, -390.6], [98.9, -361.5], [233.1, -349.4], [-179.8, -320.7], [-269.8, -358.5],
            [137.8, -392.8], [-127.3, -469.0], [-253.7, -368.4], [84.3, -429.5], [-73.6, -345.9],
            [-320.4, -343.4], [-167.5, -300.0], [98.2, -362.9], [223.2, -378.0], [7.3, -344.4]
        ], dtype=np.float32)
        self.affine_matrix, _ = cv2.estimateAffine2D(self.src_points, self.dst_points)

        # 카메라 초기화 및 상태 변수
        self.cap = cv2.VideoCapture(0)
        self.marker_last_seen_time = None
        self.marker_gone_start_time = None
        self.marker_check_duration = 3  # 마커가 가려져야 하는 시간 (초)

    def send_request(self):  # ORDERR 서비스 요청
        self.req.a = 'please'
        self.future = self.transfer_client.call_async(self.req)
        self.future.add_done_callback(self.handle_service_response)

    def handle_service_response(self, future):
        try:
            response = future.result()
            table_number = response.table_number
            self.send_goal('comeon', table_number)
        except Exception as e:
            self.get_logger().error(f"Service call failed: {e}")

    def send_goal(self, command, table_number):
        goal_msg = COME.Goal()
        goal_msg.command = command
        goal_msg.table_number = table_number

        self.come_client.wait_for_server()
        self.send_goal_future = self.come_client.send_goal_async(goal_msg, feedback_callback=self.feedback_callback)
        self.send_goal_future.add_done_callback(self.goal_response_callback)

    def goal_response_callback(self, future):
        goal_handle = future.result()
        if not goal_handle.accepted:
            self.get_logger().info('Goal rejected')
            return

        self.get_logger().info('Goal accepted')
        self.get_result_future = goal_handle.get_result_async()
        self.get_result_future.add_done_callback(self.get_result_callback)

    def get_result_callback(self, future):
        action_status = future.result().status
        result = future.result().result

        if action_status == GoalStatus.STATUS_SUCCEEDED:
            self.get_logger().info('Result: {0}'.format(result.arrive))
            self.process_video_stream()  # ArUco 마커 확인으로 이동

    def feedback_callback(self, feedback_msg):
        feedback = feedback_msg.feedback
        self.get_logger().info('{0}'.format(feedback.check))

    def process_video_stream(self):
        """
        ArUco 마커를 통해 좌표를 변환하고,
        마커가 3초 동안 가려졌는지 확인.
        """
        while True:
            ret, frame = self.cap.read()
            if not ret:
                self.get_logger().error("Failed to capture frame from camera.")
                break

            gray = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)
            detector = cv2.aruco.ArucoDetector(self.aruco_dict, self.parameters)
            corners, ids, _ = detector.detectMarkers(gray)

            if ids is not None and len(ids) > 0:
                self.marker_last_seen_time = time.time()
                self.marker_gone_start_time = None
                cv2.aruco.drawDetectedMarkers(frame, corners, ids)

                # ArUco 마커 중심 좌표 계산 및 로봇 좌표 변환
                for corner in corners:
                    center_x = np.mean(corner[0][:, 0])
                    center_y = np.mean(corner[0][:, 1])
                    pixel_point = np.array([[center_x, center_y]], dtype=np.float32)
                    # 아르코마커인식한 카메라 좌표를 로봇 좌표로 변환하는 부분
                    robot_point = cv2.transform(pixel_point[None, :, :], self.affine_matrix)
                    robot_coordinates = (robot_point[0][0][0], robot_point[0][0][1], 283)  # Z 고정
                    self.get_logger().info(f"Robot coordinates: {robot_coordinates}")

            else:
                current_time = time.time()
                if self.marker_last_seen_time is not None:
                    if self.marker_gone_start_time is None:
                        self.marker_gone_start_time = current_time

                    elapsed_time = current_time - self.marker_gone_start_time
                    # 아르코 마커가 가려진 시간이 3초보다 길면 ice_cream_confirmation 퍼블리시
                    if elapsed_time >= self.marker_check_duration:
                        self.publish_ice_cream_confirmation()
                        break

            cv2.imshow('ArUco Marker Detection', frame)
            if cv2.waitKey(1) & 0xFF == ord('q'):
                break

        self.cap.release()
        cv2.destroyAllWindows()

    def publish_ice_cream_confirmation(self):
        msg = String()
        msg.data = "Ice cream successfully placed!"
        self.go_publisher.publish(msg)
        self.get_logger().info(f"Published: {msg.data}")


def main(args=None):
    rclpy.init(args=args)
    machine = Machine2()
    machine.send_request()
    rclpy.spin(machine)
    rclpy.shutdown()


if __name__ == '__main__':
    main()