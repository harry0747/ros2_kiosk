import time
import sys
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
        qos_profile = QoSProfile(depth = 10)
        self.transfer_client = self.create_client(ORDERR,'third')
        while not self.transfer_client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Service not available, waiting again...')
        
        self.come_client = ActionClient(self,COME,'second')
        self.go_publisher = self.create_publisher(String,'go',qos_profile)
        self.req = ORDERR.Request()

    def send_request(self): # please machine2에 전달
        self.req.a = 'please'
        self.future = self.transfer_client.call_async(self.req)
        self.future.add_done_callback(self.handle_service_response) # 전달 후 로봇 호출하는 콜백함수수

    def handle_service_response(self,future):
        try:
            response = future.result()
            table_number = response.table_number
            self.send_goal('comeon',table_number) # 로봇 호출하는 콜백함수 
        except Exception as e:
            self.get_logger().error(f"Service call failed: {e}")

    def send_goal(self, command, table_number):
        # 
        goal_msg = COME.Goal()
        goal_msg.command = command
        goal_msg.table_number = table_number

        self.come_client.wait_for_server()
        self.send_goal_future = self.come_client.send_goal_async(goal_msg, feedback_callback=self.feedback_callback)
        self.send_goal_future.add_done_callback(self.goal_response_callback)

    def goal_response_callback(self,future):
        goal_handle = future.result()

        if not goal_handle.accepted:
            self.get_logger().info('Goal rejected')
            return
        
        self.get_logger().info('Thank you')

        self.get_result_future = goal_handle.get_result_async()
        self.get_result_future.add_done_callback(self.get_result_callback)

    def get_result_callback(self,future):
        action_status = future.result().status
        result = future.result().result

        if action_status == GoalStatus.STATUS_SUCCEEDED:
            self.get_logger().info('Result: {0}'.format(result.arrive))
            # 아이스크림 적재 후 퍼블리시
            msg = String()
            msg.data = "Ice cream loaded and ready to go!"
            self.go_publisher.publish(msg)
            self.get_logger().info("Published 'go' message.")


        
    def feedback_callback(self, feedback_msg):
        feedback = feedback_msg.feedback
        self.get_logger().info('{0}'.format(feedback.check))


def main(args=None):
    rclpy.init(args=args)  # ROS2 초기화
    machine = Machine2()
    machine.send_request()
    rclpy.spin(machine)  # 노드 실행
    # rclpy.shutdown()을 main에서 호출하여 모든 작업이 끝난 후 ROS2 컨텍스트를 종료
    rclpy.shutdown()  # 노드 종료


if __name__ == '__main__':
    main()
