from PyQt5.QtWidgets import *
from PyQt5 import uic
from PyQt5.QtCore import *
from PyQt5.QtGui import QCursor, QFont
import os
import sys
import rclpy
from rclpy.node import Node
from my_custom_interface.srv import ORDER
from dotenv import load_dotenv
import json
from kiosk import (
    resource_qrc,
    resource_order_qrc,
    resource_topping_qrc,
    resource_pay_qrc,
    resource_serve_qrc,
    resource_table_qrc,
    resource_receive,
)
from ament_index_python.packages import get_package_share_directory

# 환경 변수 로드
load_dotenv()

def get_ui_path(relative_path):
    """ROS 패키지 설치 경로를 기준으로 .ui 파일 경로 반환"""
    base_dir = get_package_share_directory('kiosk')  # 'kiosk'는 패키지 이름
    return os.path.join(base_dir, 'data/ui', relative_path)

class ROS2Client(Node):
    def __init__(self):
        super().__init__('kiosk_client')
        self.client = self.create_client(ORDER, 'first')
        while not self.client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Service not available, waiting again...')

    def send_order(self, order_data):
        """주문 데이터를 서비스로 보내고 응답을 반환받음"""
        request = ORDER.Request()
        request.chocolate = order_data['choco']
        request.mint = order_data['mint']
        request.strawberry = order_data['strawberry']
        request.table_number = order_data['table']

        future = self.client.call_async(request)
        rclpy.spin_until_future_complete(self, future)

        try:
            response = future.result()
            if response is not None:
                print(f"Raw response: {response}")  # 디버깅용 로그
                print(f"Response answer type: {type(response.answer)}")  # 타입 확인
                print(f"Order number received in send_order: {response.answer}, type: {type(response.answer)}")
                
                

                # 문자열 그대로 반환
                return response.answer
            else:
                self.get_logger().error("Failed to receive a response from the service.")
                return None
        except Exception as e:
            print(f"Error in send_order: {e}")
            return None
        
    
class Order:
    def __init__(self, table, flavors):
        self.table = table
        self.flavors = flavors

class MainWindow(QMainWindow):
    def __init__(self, ros_client):
        super().__init__()
        self.ros_client = ros_client  # ROS2Client 인스턴스 저장
        self.current_order = None  # 현재 주문 데이터 초기화
        self.init_ui()  # UI 초기화

    def init_ui(self):
        """UI 초기화 메서드"""
        self.main_window = uic.loadUi(get_ui_path('main.ui'), self)
        self.main_window.show()

        # 버튼 및 이벤트 연결
        self.main_window.orderBtn.setCursor(QCursor(Qt.PointingHandCursor))
        self.main_window.orderBtn.clicked.connect(self.go_table)  # 바로 테이블 선택 화면으로 이동

    def go_table(self):
        """테이블 선택 화면으로 이동"""
        print("Navigating to Table Selection!")
        self.table_window = TableWindow(self)  # MainWindow 전달
        self.table_window.show()
        self.main_window.hide()

    def restart(self):
        """메인 윈도우로 돌아가기"""
        print("Returning to Main Window")
        self.main_window.show()

    def start_order(self, table, flavors):
        self.current_order = {"table": table, "flavors": flavors}

        order_data = {
            'choco': self.current_order['flavors'].get('choco', 0),
            'mint': self.current_order['flavors'].get('mint', 0),
            'strawberry': self.current_order['flavors'].get('strawberry', 0),
            'table': self.current_order['table']
        }

        order_number = self.ros_client.send_order(order_data)

        # order_number를 문자열로 강제 변환
        if not isinstance(order_number, str):
            order_number = str(order_number)

        self.current_order['order_number'] = order_number

        # 중복 생성 방지
        if not hasattr(self, 'info_window') or not self.info_window.isVisible():
            self.info_window = InfoWindow(self.current_order, order_number, self)
            self.info_window.show()

class TableWindow(QMainWindow):
    def __init__(self, main_window):
        super().__init__()
        self.main_window = main_window  # MainWindow 참조 저장
        self.order = Order(table=0, flavors={})  # 기본 주문 객체를 초기화
        self.init_ui()

    def init_ui(self):
        self.table_window = uic.loadUi(get_ui_path('table.ui'), self)
        self.table_window.show()

        self.table_window.Table1_Btn.setCursor(QCursor(Qt.PointingHandCursor))
        self.table_window.Table2_Btn.setCursor(QCursor(Qt.PointingHandCursor))
        self.table_window.Table3_Btn.setCursor(QCursor(Qt.PointingHandCursor))

        self.table_window.Table1_Btn.clicked.connect(lambda: self.select_table(1))
        self.table_window.Table2_Btn.clicked.connect(lambda: self.select_table(2))
        self.table_window.Table3_Btn.clicked.connect(lambda: self.select_table(3))

    def select_table(self, table_number):
        print(f"Selected table: {table_number}")
        self.order.table = table_number
        
        self.go_flavor()

    def go_flavor(self):
        print("Navigating to flavor selection!")
        self.flavor_window = FlavorWindow(self.order, self.main_window)  # MainWindow 전달
        self.flavor_window.show()
        self.table_window.hide()


class FlavorWindow(QMainWindow):
    def __init__(self, order, main_window=None):
        super().__init__()
        self.order = order
        self.main_window = main_window
        self.init_ui()

    def init_ui(self):
        self.flavor_window = uic.loadUi(get_ui_path('flavor.ui'), self)

        # 버튼 커서 설정
        self.flavor_window.chocoBtn.setCursor(QCursor(Qt.PointingHandCursor))
        self.flavor_window.strawberryBtn.setCursor(QCursor(Qt.PointingHandCursor))
        self.flavor_window.mintBtn.setCursor(QCursor(Qt.PointingHandCursor))
        self.flavor_window.nextBtn.setCursor(QCursor(Qt.PointingHandCursor))

        # SpinBox 초기화
        self.choco_spinbox = self.flavor_window.chocoSpinBox
        self.mint_spinbox = self.flavor_window.mintSpinBox
        self.strawberry_spinbox = self.flavor_window.strawberrySpinBox

        # 버튼 클릭 이벤트 설정
        self.flavor_window.chocoBtn.clicked.connect(lambda: self.increment_spinbox(self.choco_spinbox))
        self.flavor_window.strawberryBtn.clicked.connect(lambda: self.increment_spinbox(self.strawberry_spinbox))
        self.flavor_window.mintBtn.clicked.connect(lambda: self.increment_spinbox(self.mint_spinbox))

        # Next 버튼 클릭 시 ROS2 서비스 요청 및 InfoWindow로 이동
        self.flavor_window.nextBtn.clicked.connect(self.go_info)

    def increment_spinbox(self, spinbox):
        """SpinBox 값을 증가"""
        current_value = spinbox.value()
        spinbox.setValue(current_value + 1)

    def go_info(self):
        self.order.flavors = {
            'choco': self.choco_spinbox.value(),
            'mint': self.mint_spinbox.value(),
            'strawberry': self.strawberry_spinbox.value()
        }

        if self.main_window:
            order_number = self.main_window.start_order(self.order.table, self.order.flavors)

            # 중복 생성 방지
            if not hasattr(self.main_window, 'info_window') or not self.main_window.info_window.isVisible():
                self.main_window.info_window = InfoWindow(self.order, order_number, self.main_window)
                self.main_window.info_window.show()

        self.close()

                    

class InfoWindow(QMainWindow):
    def __init__(self, order, order_number, main_window):
        super().__init__()
        self.order = order
        self.order_number = order_number  # 문자열로 받은 주문 번호
        self.main_window = main_window
        self.init_ui()

    def init_ui(self):
        try:
            # UI 로드
            ui_path = "/home/harry/aaa/src/kiosk/data/ui/info.ui"
            self.info_window = uic.loadUi(ui_path, self)
            print(f"UI loaded successfully from {ui_path}")
        except Exception as e:
            print(f"Failed to load UI from {ui_path}: {e}")
            return

        # flavors_summary 생성
        if isinstance(self.order, dict):  # self.order가 dict일 경우
            table_number = self.order.get('table', 'Unknown')  # dict에서 테이블 번호 가져오기
            flavors = self.order.get('flavors', {})
        elif isinstance(self.order, Order):  # self.order가 Order 클래스의 인스턴스일 경우
            table_number = self.order.table
            flavors = self.order.flavors
        else:
            table_number = 'Unknown'
            flavors = {}

        # 테이블 번호와 flavors_summary를 문자열로 결합
        flavors_summary = f"Table Number: {table_number}\n" + "\n".join(
            [f"{flavor.capitalize()}: {quantity}" for flavor, quantity in flavors.items()]
        )

        # flavors QLabel에 텍스트 설정
        self.info_window.flavor.setText(f"Selected Flavors and Table Info:\n{flavors_summary}") 

        # 디버깅: 전달된 order_number 확인
        print(f"Order number received in InfoWindow: {self.order_number}, type: {type(self.order_number)}")

        # QLabel 설정 (이름 변경된 QLabel 참조)
        order_number_label = self.info_window.findChild(QLabel, 'ordernum')
        if order_number_label:
            if isinstance(self.order_number, str):
                # 정확히 문자열 값 설정
                order_number_label.setText(f"Order Number: {self.order_number}")
                print(f"Order Number successfully displayed: {self.order_number}")
            else:
                print(f"Error: Order number is not a string, received: {self.order_number}")
        else:
            print("Error: 'ordernum' QLabel not found in the loaded UI.")

        # 10초 후에 메인 화면으로 돌아가는 타이머 설정
        QTimer.singleShot(5000, self.return_to_main)

    def return_to_main(self):
        """10초 후 메인 화면으로 돌아가기"""
        print("Returning to Main Window after 10 seconds...")
        self.main_window.show()
        self.close()

    def closeEvent(self, event):
        # InfoWindow 닫힐 때 MainWindow 참조 제거
        if hasattr(self.main_window, 'info_window'):
            del self.main_window.info_window
        super().closeEvent(event)





def main():
    # PyQt5 애플리케이션 초기화
    app = QApplication(sys.argv)

    # ROS2 클라이언트 초기화
    rclpy.init()  # 프로그램 전체에서 한 번만 호출
    ros_client = ROS2Client()  # ROS2Client 생성

    # MainWindow 생성
    main_window = MainWindow(ros_client)  # ROS2Client 전달
    main_window.show()

    # 이벤트 루프 실행
    app.exec()

    # 종료 시 ROS2 노드 및 컨텍스트 정리
    ros_client.destroy_node()
    rclpy.shutdown()


if __name__ == "__main__":
    main()
