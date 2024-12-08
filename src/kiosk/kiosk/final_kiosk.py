import os
import sys
from PyQt5.QtWidgets import *
from PyQt5 import uic
from PyQt5.QtCore import *
from PyQt5.QtGui import QCursor, QFont
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
from dotenv import load_dotenv
import time
import json
import rclpy
from rclpy.node import Node
from std_msgs.msg import String
from my_custom_interface.srv import ORDER


# 환경 변수 로드
load_dotenv()

def get_ui_path(relative_path):
    """ROS 패키지 설치 경로를 기준으로 .ui 파일 경로 반환"""
    base_dir = get_package_share_directory('kiosk')  # 'kiosk'는 패키지 이름
    return os.path.join(base_dir, 'data/ui', relative_path)

class ROS2Client(Node):
    def __init__(self):
        super().__init__('kiosk_client')
        self.client = self.create_client(ORDER, 'order_service')  # 서비스 이름은 'order_service'

        while not self.client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Waiting for ORDER service...')

    def send_order(self, table, flavors):
        req = ORDER.Request()
        req.table_number = table
        req.chocolate = flavors.get('choco', 0)
        req.mint = flavors.get('mint', 0)
        req.strawberry = flavors.get('strawberry', 0)

        # 서비스 요청 보내기
        future = self.client.call_async(req)
        rclpy.spin_until_future_complete(self, future)

        if future.result() is not None:
            response = future.result()
            self.get_logger().info(f"Order ID: {response.answer}")
            return response.answer  # 응답 받은 주문 번호 반환
        else:
            self.get_logger().error('Failed to send order')
            return None

        
class Order():
    def __init__(self):
        self.icecream = None
        self.toppings = None
        self.table = None
        self.flavors = {}

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
        self.main_window.orderBtn.clicked.connect(self.go_order)

    def go_order(self):
        """주문 페이지로 이동"""
        print("Order button clicked!")
        self.serving_window = ServingWindow(self)  # MainWindow 전달
        self.serving_window.show()
        self.main_window.hide()

    def start_order(self, table, flavors):
        """주문 시작: ROS2 클라이언트를 통해 주문 처리"""
        # 서비스 클라이언트를 통해 주문 전송 후 응답 받기
        order_id = self.ros_client.send_order(table, flavors)
        
        if order_id:
            # 응답 받은 주문 번호를 InfoWindow에 전달
            self.info_window = InfoWindow(self.current_order, self, order_id)
            self.info_window.show()
            self.close()

    def restart(self):
        """메인 윈도우로 돌아가기"""
        print("Returning to Main Window")
        self.main_window.show()

    def closeEvent(self, event):
        """창을 닫을 때 ROS2 노드 종료"""
        rclpy.shutdown()



class ServingWindow(QMainWindow):
    def __init__(self, main_window):
        super().__init__()
        self.order = Order()
        self.main_window = main_window  # MainWindow 참조 저장
        self.init_ui()

    def init_ui(self):
        self.serving_window = uic.loadUi(get_ui_path('serve.ui'), self)
        self.serving_window.show()

        self.serving_window.eat_here_Btn.setCursor(QCursor(Qt.PointingHandCursor))
        self.serving_window.takeout_Btn.setCursor(QCursor(Qt.PointingHandCursor))

        self.serving_window.eat_here_Btn.clicked.connect(self.go_table)
        self.serving_window.takeout_Btn.clicked.connect(self.go_flavor)

    def go_table(self):
        print("Eat here selected!")
        self.table_window = TableWindow(self.order, self.main_window)  # MainWindow 전달
        self.table_window.show()
        self.serving_window.hide()

    def go_flavor(self):
        print("Takeout selected!")
        self.order.table = 0  # Takeout일 경우 table 번호는 0으로 설정
        self.flavor_window = FlavorWindow(self.order, self.main_window)
        self.flavor_window.show()
        self.serving_window.hide()


class TableWindow(QMainWindow):
    def __init__(self, order, main_window):
        super().__init__()
        self.order = order
        self.main_window = main_window  # MainWindow 참조 추가
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
        self.order.table = table_number
        print(f"Selected table: {table_number}")
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
        self.main_window = main_window  # Optional로 설정
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

        # Next 버튼 클릭 시 ROS2 Publish 및 InfoWindow로 이동
        self.flavor_window.nextBtn.clicked.connect(self.go_info)

    def increment_spinbox(self, spinbox):
        """SpinBox 값을 증가"""
        current_value = spinbox.value()
        spinbox.setValue(current_value + 1)
        print(f"Updated SpinBox Value: {spinbox.value()}")

    def go_info(self):
        """ROS2 Publish 및 InfoWindow로 이동"""
        # SpinBox 값을 주문 정보에 저장
        self.choco = self.choco_spinbox.value()
        self.mint = self.mint_spinbox.value()
        self.strawberry = self.strawberry_spinbox.value()

        print(f"Publishing Order: Table {self.order.table}, Flavors {self.choco}, {self.mint}, {self.strawberry}")

        # ROS2 클라이언트를 통해 주문 정보를 서버로 전송
        if self.main_window:
            self.main_window.start_order(
                table=self.order.table,
                flavors={'choco': self.choco, 'mint': self.mint, 'strawberry': self.strawberry}
            )

        # InfoWindow로 이동
        self.info_window = InfoWindow(self.order, self.main_window)
        self.info_window.show()
        self.close()



class InfoWindow(QMainWindow):
    def __init__(self, order, main_window, order_id):
        super().__init__()
        self.order = order
        self.main_window = main_window
        self.order_id = order_id  # 주문 번호를 받음
        self.init_ui()

    def init_ui(self):
        self.info_window = uic.loadUi(get_ui_path('info.ui'), self)

        # 주문 번호를 화면에 표시
        self.info_window.orderNumber.setText(f"Order ID: {self.order_id}")  # QLabel에 주문 번호 표시

        flavors_summary = "\n".join(
            [f"{flavor.capitalize()}: {quantity}" for flavor, quantity in self.order.flavors.items()]
        )
        self.info_window.flavor.setText(f"Selected Flavors:\n{flavors_summary}")
    
    def closeEvent(self, event):
        """창을 닫을 때 MainWindow로 돌아가기"""
        self.main_window.restart()
        self.close()

def main():
    # PyQt5 애플리케이션 초기화
    app = QApplication(sys.argv)

    # ROS2 노드 초기화
    rclpy.init()  # 프로그램 전체에서 한 번만 호출
    ros_client = ROS2Client()  # ROS2Client 노드 생성

    # MainWindow 생성
    main_window = MainWindow(ros_client)  # ROS2Client 전달
    main_window.show()

    # 이벤트 루프 실행
    try:
        app.exec()  # PyQt5 이벤트 루프 실행
    except Exception as e:
        print(f"Application error: {e}")
    finally:
        # 프로그램 종료 시 ROS2 노드 및 컨텍스트 정리
        ros_client.destroy_node()  # ROS2Client 종료
        rclpy.shutdown()




if __name__ == "__main__":
    main()

# 프로그래스 바없애기 