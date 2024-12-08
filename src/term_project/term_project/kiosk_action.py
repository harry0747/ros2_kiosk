import time
import sys
import rclpy
from rclpy.action import ActionClient
from rclpy.node import Node
from action_msgs.msg import GoalStatus
from my_custom_interface.srv import ORDER
from my_custom_interface.srv import COMPLETE


class Kiosk(Node):

    def __init__(self):
        
        super().__init__('kiosk')   

        #'first'라는 서비스의 클라이언트(kiosk_action -> machine2) 생성
        self.order_cli = self.create_client(ORDER,'first')
        while not self.order_cli.wait_for_service(timeout_sec = 1.0):
            self.get_logger().info('waiting...')
       
        self.req = ORDER.Request()

    def send_request(self):
    # 아이스크림 종류, 갯수, 테이블 번호를 'first'라는 서비스 서버에 전송하는 함수
        self.req.chocolate = int(sys.argv[1])
        self.req.mint = int(sys.argv[2])
        self.req.strawberry = int(sys.argv[3])
        self.req.table_number = int(sys.argv[4])
        self.future = self.order_cli.call_async(self.req)
def main(args = None):
    rclpy.init(args=args)

    order_client = Kiosk()
    order_client.send_request()

    while rclpy.ok():
        rclpy.spin_once(order_client)
        if order_client.future.done():
            try:
                response = order_client.future.result()
            except Exception as e:
                order_client.get_logger().info('Service call failed %r' % (e,))
            else:
                order_client.get_logger().info('{0}'.format(response.answer))
            
            
            break

    order_client.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
    
        
