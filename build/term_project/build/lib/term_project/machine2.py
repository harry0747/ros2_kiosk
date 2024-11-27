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

class Machine(Node):

    def __init__(self):
        super().__init__('machine')
        qos_profile = QoSProfile(depth=10)
        self.order_server = self.create_service(ORDER,'first',self.server_callback)
        self.transfer_server = self.create_service(ORDERR,'third',self.server2_callback)
        self.count = 0 # 주문 번호 카운트
        self.count2 = 0 # 메뉴 테이블 넘버 저장한 리스트 배열 번호
        self.chocolate = [] # 초콜릿 주문 리스트
        self.mint = [] # 민트 주문 리스트
        self.strawberry = [] # 딸기 주문 리스트
        self.table_number = [] # 테이블 번호 리스트

    def server_callback(self,request,response): 
        # 배열에 메뉴, 테이블 넘버 받으면 리스트에 추가, 주문번호(count) 클라이언트로 넘겨줌

        self.chocolate.append(request.chocolate) 
        self.mint.append(request.mint)
        self.strawberry.append(request.strawberry)
        self.table_number.append(request.table_number)
        response.answer = self.count

        self.count += 1
        
        return response

    def server2_callback(self,request,response):
        # 머신에 please 받으면 순서대로 메뉴, 테이블 넘버 넘겨줌
        if request.a == 'please':
            response.chocolate = self.chocolate[self.count2]
            response.mint = self.mint[self.count2]
            response.strawberry = self.strawberry[self.count2]
            response.table_number = self.table_number[self.count2]
            self.count2 += 1
        
        return response

def main(args=None):
    rclpy.init(args=args)
    order_server = Machine()
    rclpy.spin(order_server)
    rclpy.shutdown()



if __name__ == '__main__':
    main()