import time
import sys
import rclpy
from rclpy.node import Node
from rclpy.qos import QoSProfile
from std_msgs.msg import String
from std_msgs.msg import Int8
from rclpy.action import ActionServer
from my_custom_interface.srv import COMPLETE
from my_custom_interface.action import COME

class Robot(Node):

    def __init__(self):
        super().__init__('robot')
        qos_profile = QoSProfile(depth = 10)
        # 'second'라는 액션의 서버 (robot_sub -> machine3) 생성
        self.come_server = ActionServer(self,COME,'second',self.execute_callback)

        # 'go'라는 토픽의 서브스크라이버(robot_sub -> machine3) 생성
        self.go_subscriber = self.create_subscription(String,'go',self.go_callback,qos_profile)

    def execute_callback(self, goal_handle):
    # 'second'라는 액션서버의 콜백함수

        self.table_number = goal_handle.request.table_number

        # 피드백 메세지로 가고있음을 알림(실제로는 자율주행 도착예정정보를 피드백으로 보냄)
        feedback_msg = COME.Feedback()
        feedback_msg.check = 'I am going ~'

        for i in range(1,6):
            self.get_logger().info(feedback_msg.check)
            goal_handle.publish_feedback(feedback_msg)
            time.sleep(1)

        goal_handle.succeed()

        # 도착시 결과 발행
        result = COME.Result()
        result.arrive = 'I am arrive!'
        
        return result

    def go_callback(self,msg):
    # 'go' 라는 토픽 서브스크라이버의 콜백함수
        # 'second'라는 액션을 통해 받은 테이블 넘버 로그기록 후 받은 테이블 넘버로 이동
        self.get_logger().info('lets go {0}'.format(self.table_number))

def main(args=None):

    rclpy.init(args=args)
    robot_node = Robot()
    rclpy.spin(robot_node)


if __name__ == '__main__':
    main()