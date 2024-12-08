import time
import cv2
import numpy as np
import cv2.aruco as aruco
import rclpy
from rclpy.node import Node
from rclpy.action import ActionClient
from rclpy.qos import QoSProfile
from my_custom_interface.srv import COMPLETE
from my_custom_interface.srv import ORDERR
from my_custom_interface.action import COME
from action_msgs.msg import GoalStatus
from std_msgs.msg import String
from std_msgs.msg import Int8

class Machine3(Node):

    def __init__(self):
        super().__init__('machine3')
        qos_profile = QoSProfile(depth=10)

        # 'third'라는 서비스의 클라이언트(machine3 -> machine2) 생성
        self.transfer_client = self.create_client(ORDERR, 'third')
        while not self.transfer_client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Service not available, waiting again...')
        
        # 'second'라는 액션의 클라이언트 (machine3 -> robot_sub) 생성
        self.come_client = ActionClient(self, COME, 'second')

        # 'go'라는 토픽의 퍼블리셔(machine3->robot_sub) 생성
        self.go_publisher = self.create_publisher(String, 'go', qos_profile)

        # 'restart'라는 서비스의 서버(machine3 -> robot) 생성
        self.restart_server = self.create_service(COMPLETE,'restart',self.restart_callback)
        self.req = ORDERR.Request()

        #timer 활성화 여부 체크
        self.timer_active = 'stop'

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
        self.cap = cv2.VideoCapture(2)
        self.marker_last_seen_time = None
        self.marker_gone_start_time = None
        self.marker_check_duration = 3  # 마커가 가려져야 하는 시간 (초)

    def send_request(self):
    # 'second'라는 액션 클라이언트에서 요청 보내는 함수
        # request에 'please'라는 문자 담아서 보냄
        # 보내고 난 후, handle_service_response 함수 콜백
        self.req.a = 'please'
        self.future = self.transfer_client.call_async(self.req)
        self.future.add_done_callback(self.handle_service_response)

    def handle_service_response(self,future):
        # send_request 안의 콜백함수
        # 'second'의 response에 따른 send_goal 함수를 호출하는 조건을 단 함수
        try:
            response = future.result()
            # response.wait가 'ok'면 남은 주문 목록이 있다는 뜻
            # 바로 send_goal 함수 호출
            if response.wait == 'ok':
                if self.timer_active == 'go':
                    self.destroy_timer(self.timer)
                    self.timer_active = None
                table_number = response.table_number
                self.send_goal('comeon',table_number) # 로봇 호출하는 콜백함수 
                
            # response.wait가 'nothing'이면 남은 주문 목록이 없다는 뜻
            # 타이머를 작동시켜 주기적으로 timer_callback 콜백
            elif response.wait == 'nothing':
                self.get_logger().info('waiting, no list')
                if self.timer_active != 'go':
                   self.timer_active = 'go'
                   self.timer = self.create_timer(1,self.timer_callback)
                

        except Exception as e:
            self.get_logger().error(f"Service call failed: {e}")

    def send_goal(self, command, table_number):
    # 로봇을 호출하는 콜백함수 지정된 'comeon'이라는 command와
    # 'third' 서비스에서 response로 받은 table_number를 액션 서버에 보냄
        goal_msg = COME.Goal()
        goal_msg.command = command
        goal_msg.table_number = table_number

        self.come_client.wait_for_server()
        self.send_goal_future = self.come_client.send_goal_async(goal_msg, feedback_callback=self.feedback_callback)
        self.send_goal_future.add_done_callback(self.goal_response_callback)

    def goal_response_callback(self, future):
    # 액션 서버에서 응답이 오면 실행되는 함수
        goal_handle = future.result()
        if not goal_handle.accepted:
            self.get_logger().info('Goal rejected')
            return

        self.get_logger().info('Goal accepted')
        self.get_result_future = goal_handle.get_result_async()
        self.get_result_future.add_done_callback(self.get_result_callback)

    def get_result_callback(self, future):
    # 'second'의 result 콜백함수
        action_status = future.result().status
        result = future.result().result

        # 'second' 액션의 result가 성공적으로 들어왔으면 아르코마커 확인
        if action_status == GoalStatus.STATUS_SUCCEEDED:
            self.get_logger().info('Result: {0}'.format(result.arrive))
            self.process_video_stream()  # ArUco 마커 확인으로 이동

    def feedback_callback(self, feedback_msg):
    # 'second' 액션의 피드백 콜백 함수
        feedback = feedback_msg.feedback
        self.get_logger().info('{0}'.format(feedback.check))


    def publish_ice_cream_confirmation(self):
    # 아르코 마커가 사라지면 적재가 완료됐다고 판단하여 퍼블리시
    # 'go'라는 토픽 퍼블리시
        msg = String()
        msg.data = "Ice cream successfully placed!"
        self.go_publisher.publish(msg)
        self.get_logger().info(f"Published: {msg.data}")

    def restart_callback(self, request, response):
    # 'restart'라는 서비스 서버의 콜백함수
        # robot에서 'finisehd!'가 도착하면 response 보내고 다시 주문번호 받는 send_request 함수 실행
        if request.a == 'finished!':

            response.good = 'ok, i will making'
            self.send_request()
        
        return response

    def timer_callback(self):
    # 타이머 콜백함수
        # 주기적으로 send_request 함수 실행
        self.send_request()

    def process_video_stream(self):
        """
        ArUco 마커를 통해 좌표를 변환하고,
        마커가 3초 동안 가려졌는지 확인.
        """
        # 첫 번째 카메라 객체가 이미 열려 있으면 해제
        if self.cap.isOpened():
            self.cap.release()

        # 새로운 VideoCapture 객체를 생성
        self.cap = cv2.VideoCapture(2)

        # 카메라가 열리지 않으면 재시도
        retries = 3
        while not self.cap.isOpened() and retries > 0:
            self.get_logger().warn(f"Retrying to open camera... {retries} retries left.")
            time.sleep(1)
            self.cap = cv2.VideoCapture(2)
            retries -= 1

        if not self.cap.isOpened():
            self.get_logger().error("Failed to capture frame from camera after multiple retries.")
            return

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
                        
                        self.marker_last_seen_time = None
                        self.marker_gone_start_time = None
                        break
                        

            cv2.imshow('ArUco Marker Detection', frame)
            if cv2.waitKey(1) & 0xFF == ord('q'):
                break

        self.cap.release()
        cv2.destroyAllWindows()
        


def main(args=None):
    rclpy.init(args=args)
    machine = Machine3()
    machine.send_request()
    rclpy.spin(machine)
    rclpy.shutdown()


if __name__ == '__main__':
    main()