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
        self.cli = self.create_client(COMPLETE,'finish')
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again')
        self.req = COMPLETE.Request()

    def send_request(self):
        self.req.a = sys.argv[1] # 입력받도록 설정 향후 로봇의 화면에서 yes 버튼만 만들어도 충분할거 같음 버튼을 누르면 yes 메세지 req.a에 입력되는 형식
        self.future = self.cli.call_async(self.req)

def main(args=None):
    rclpy.init(args=args)

    minimal_client = Kioskservice()
    minimal_client.send_request()

    while rclpy.ok():
        rclpy.spin_once(minimal_client)
        if minimal_client.future.done():
            try:
                response = minimal_client.future.result()
            except Exception as e:
                minimal_client.get_logger().info('Service call failed %r' % (e,))
            else:
                minimal_client.get_logger().info(response.good)
            
            break
    
    minimal_client.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()