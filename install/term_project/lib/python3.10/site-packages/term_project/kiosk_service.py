import time
import sys
import rclpy
from rclpy.node import Node
from rclpy.qos import QoSProfile
from std_msgs.msg import String
from std_msgs.msg import Int8
from my_custom_interface.srv import COMPLETE

class Kioskservice(Node):

    def __init__(self):
        super().__init__('kiosk_service')
        qos_profile = QoSProfile(depth = 10)
        # 'receive_status'라는 토픽의 서브스크라이버 subscribe_callback 콜백
        self.recieve_sub = self.create_subscription(String,'receive_status',self.subscribe_callback,qos_profile)
        # 'finish'라는 서비스의 클라이언트(kiosk_service -> robot)
        self.cli = self.create_client(COMPLETE,'finish')
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again')
        self.req = COMPLETE.Request()
        self.future = None
    
    def send_request(self,command):
    # 'finish' 서비스 서버에 요청 보내는 함수
        # 서브스크라이버로 받은 command request에 저장
        self.req.a = command
        # 서비스 요청 보내기
        self.future = self.cli.call_async(self.req)

    def subscribe_callback(self,msg):
    # 'receive_status' 토픽의 서브스크라이버 콜백 함수
        self.get_logger().info(f"Received message: {msg.data}")
        self.send_request(msg.data)
        # 서브스크라이브 한 msg.data를 command 자리에 넣어 send_request 함수실행
def main(args=None):
    rclpy.init(args=args)

    kiosk_service = Kioskservice()
   

    while rclpy.ok():
        rclpy.spin_once(kiosk_service)
        if kiosk_service.future and kiosk_service.future.done():
            # 'finish' 서비스 response받으면 실행
            try:
                response = kiosk_service.future.result()
            except Exception as e:
                kiosk_service.get_logger().info('Service call failed %r' % (e,))
            else:
                kiosk_service.get_logger().info(response.good)
            
            break
    kiosk_service.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()