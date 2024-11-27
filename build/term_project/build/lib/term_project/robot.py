import time
import sys
import rclpy
from rclpy.node import Node
from rclpy.qos import QoSProfile
from std_msgs.msg import String
from std_msgs.msg import Int8
from my_custom_interface.srv import COMPLETE
from my_custom_interface.action import COME
# 머신과 토픽통신(서브스크라이버)(기계가 퍼블리시한 메시지 수신 -> 테이블로 이동)
# 키오스크와 서비스통신(서버)(테이블 도착 -> 키오스크에서 전달완료 메세지 수신 -> 감사합니다 메시지 키오스크로 송신 -> 원래자리로 복귀)

class Robot(Node):

    def __init__(self):
        super().__init__('robot')
        qos_profile = QoSProfile(depth = 10)
        self.finish_server = self.create_service(COMPLETE,'finish',self.server_callback)

        
    def server_callback(self,request,response): # request.a가 yes 면 thank you 출력/ 아니면 error 출력 이후 로봇 위치 다시 복귀
        if request.a == 'yes':
            response.good = 'thank you!'
        else:
            response.good = 'error'

        self.get_logger().info(response.good)
        return response
    
def main(args=None):
    rclpy.init(args=args)
    robot_node = Robot()
    rclpy.spin(robot_node)
    rclpy.shutdown()


if __name__ == '__main__':
    main()


    