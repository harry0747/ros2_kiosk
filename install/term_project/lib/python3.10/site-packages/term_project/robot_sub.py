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
# 머신과 토픽통신(서브스크라이버)(기계가 퍼블리시한 메시지 수신 -> 테이블로 이동)
# 키오스크와 서비스통신(서버)(테이블 도착 -> 키오스크에서 전달완료 메세지 수신 -> 감사합니다 메시지 키오스크로 송신 -> 원래자리로 복귀)

class Robot(Node):

    def __init__(self):
        super().__init__('robot')
        qos_profile = QoSProfile(depth = 10)
        self.come_server = ActionServer(self,COME,'second',self.execute_callback)
        self.go_subscriber = self.create_subscription(String,'go',self.go_callback,qos_profile)

    def execute_callback(self, goal_handle):


        self.table_number = goal_handle.request.table_number
        
        feedback_msg = COME.Feedback()
        feedback_msg.check = 'I am going ~'

        for i in range(1,6):
            self.get_logger().info(feedback_msg.check)
            goal_handle.publish_feedback(feedback_msg)
            time.sleep(1)

        goal_handle.succeed()

        result = COME.Result()
        result.arrive = 'I am arrive!'
        
        return result
    
    def go_callback(self,msg):
        self.get_logger().info('lets go {0}'.format(self.table_number))

def main(args=None):

    rclpy.init(args=args)
    robot_node = Robot()
    rclpy.spin(robot_node)


if __name__ == '__main__':
    main()