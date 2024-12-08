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
        qos_profile = QoSProfile(depth=10)
        self.count = 0 # 주문 번호 카운트
        self.count2 = 1 # 메뉴 테이블 넘버 저장한 리스트 배열 번호       

        # 'first'라는 서비스의 서버(kiosk_action -> machine2) 생성
        self.order_server = self.create_service(ORDER,'first',self.server_callback)

        # 'third'라는 서비스의 서버(machine2 -> machine3) 생성
        self.transfer_server = self.create_service(ORDERR,'third',self.server2_callback)

        # 메뉴, 테이블 번호 리스트 생성 0번 index는 미리 값을 채워 놓아서 주문번호 1번부터 설정
        self.chocolate = [0] # 초콜릿 주문 리스트
        self.mint = [0] # 민트 주문 리스트
        self.strawberry = [0] # 딸기 주문 리스트
        self.table_number = [0] # 테이블 번호 리스트

    def server_callback(self,request,response): 
    # 'first'라는 서비스 서버의 콜백함수    
    # 배열에 메뉴, 테이블 넘버 받으면 리스트에 추가, 주문번호(count) 클라이언트로 넘겨줌
        self.count += 1 

        self.chocolate.append(request.chocolate) 
        self.mint.append(request.mint)
        self.strawberry.append(request.strawberry)
        self.table_number.append(request.table_number)
        # response.answer = self.count
        response.answer = '{}'.format(self.count)


        
        
        return response

    def server2_callback(self,request,response):
    # 'third'라는 서비스 서버의 콜백함수
    # machine3에서 please 받으면 순서대로 메뉴, 테이블 넘버 넘겨줌

        # 들어온 주문번호(self.count) 보다 작은 index 값(self.count2)이 작은경우
        # 처리해야할 주문이 있다고 판단하여 각각의 배열에서 주문목록과 테이블 넘버 전송
        # response.wait 이용하여 주문처리해야함 표시
        if self.count >= self.count2:
            if request.a == 'please':
                response.chocolate = self.chocolate[self.count2]
                response.mint = self.mint[self.count2]
                response.strawberry = self.strawberry[self.count2]
                response.table_number = self.table_number[self.count2]
                response.wait = 'ok'
                self.count2 += 1

        # 들어온 주문번호(self.count)보다 참조해야할 index값(self.count2)이 클 경우
        # 처리해야할 주문이 없다고 판단하여 주문목록 테이블번호에 0집어넣어서 전송
        # response.wait 이용하여 처리할 주문없음을 표시
        elif self.count < self.count2:
            if request.a == 'please':
                response.chocolate = 0
                response.mint = 0
                response.strawberry = 0
                response.table_number = 0               
                response.wait = 'nothing'
        return response

def main(args=None):
    rclpy.init(args=args)
    order_server = Machine2()
    rclpy.spin(order_server)
    rclpy.shutdown()



if __name__ == '__main__':
    main()