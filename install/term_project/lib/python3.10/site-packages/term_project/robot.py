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
        # 'finish'라는 서비스의 서버(robot -> kiosk_service) server_callback 콜백
        self.finish_server = self.create_service(COMPLETE,'finish',self.server_callback)

        # 'restart'라는 서비스의 클라이언트(robot -> machine3)
        self.restart_client = self.create_client(COMPLETE,'restart')

        while not self.restart_client.wait_for_service(timeout_sec = 1.0):
            self.get_logger().info('service not available, waiting again...')
        self.req = COMPLETE.Request()
        
    def server_callback(self,request,response):
    # 'finish' 서비스의 서버 콜백 함수
        # request 가 'yes'면 response에 'thank you!' 저장 아니면 'error' 저장
        if request.a == 'yes':
            response.good = 'thank you!'
            
        else:
            response.good = 'error'

        self.get_logger().info(response.good)

        # response에 'thank you!' 저장되어있으면 send_request 함수 실행
        if response.good == 'thank you!':
            self.send_request()
            
        return response
    
    def send_request(self):
    # 'restart'라는 서비스의 클라이언트로 서버에 요청보내는 함수
    
        self.req.a = 'finished!'
        self.future = self.restart_client.call_async(self.req)
    
def main(args=None):
    rclpy.init(args=args)
    robot_node = Robot()
    rclpy.spin(robot_node)
    rclpy.shutdown()


if __name__ == '__main__':
    main()


    