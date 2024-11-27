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

# 환경 변수 로드
load_dotenv()

def get_ui_path(relative_path):
    """ROS 패키지 설치 경로를 기준으로 .ui 파일 경로 반환"""
    base_dir = get_package_share_directory('kiosk')  # 'kiosk'는 패키지 이름
    return os.path.join(base_dir, 'data/ui', relative_path)

class ROS2Publisher(Node):
    def __init__(self):
        super().__init__('kiosk_publisher')
        self.publisher = self.create_publisher(String, 'kiosk_order', 10)  # 'kiosk_order'라는 토픽 생성

    def publish_order(self, order_data):
        msg = String()
        msg.data = order_data  # 데이터를 문자열로 변환
        self.publisher.publish(msg)
        self.get_logger().info(f'Published Order: {order_data}')

class Order():
    def __init__(self):
        self.icecream = None
        self.toppings = None
        self.table = None
        self.flavors = {}

#   class MainWindow(QMainWindow):
    # def __init__(self, ros_publisher):
    #     """
    #     MainWindow 초기화

    #     Args:
    #         ros_publisher (ROS2Publisher): ROS2Publisher 인스턴스
    #     """
    #     super().__init__()
    #     self.ros_publisher = ros_publisher  # ROS2Publisher 인스턴스 저장
    #     self.init_ui()

    # def init_ui(self):
    #     """UI 초기화 메서드"""
    #     self.main_window = uic.loadUi(get_ui_path('main.ui'), self)
    #     self.main_window.show()

    #     # 버튼 및 이벤트 연결
    #     self.main_window.orderBtn.setCursor(QCursor(Qt.PointingHandCursor))
    #     self.main_window.orderBtn.clicked.connect(self.go_order)

    # def go_order(self):
    #     """주문 페이지로 이동"""
    #     print("Order button clicked!")
    #     self.serving_window = ServingWindow(self)  # MainWindow 전달
    #     self.serving_window.show()
    #     self.main_window.hide()

    # def restart(self):
    #     """메인 윈도우로 돌아가기"""
    #     print("Returning to Main Window")
    #     self.main_window.show()

    # def publish_order(self, table, flavors):
    #     """ROS2 Publisher를 통해 데이터를 publish"""
    #     order_data = {
    #         "table": table,
    #         "flavors": flavors
    #     }
    #     order_data_json = json.dumps(order_data)  # 데이터를 JSON 형식으로 변환
    #     self.ros_publisher.publish_order(order_data_json)

    # def closeEvent(self, event):
    #     """창을 닫을 때 ROS2 노드 종료"""
    #     self.ros_publisher.destroy_node()  # ROS2 노드 종료

class MainWindow(QMainWindow):
    def __init__(self, ros_publisher):
        super().__init__()
        self.ros_publisher = ros_publisher  # ROS2Publisher 인스턴스 저장
        self.publish_timer = None  # 퍼블리싱 타이머 초기화
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

    def restart(self):
        """메인 윈도우로 돌아가기"""
        print("Returning to Main Window")
        self.main_window.show()

    def start_publishing(self, table, flavors):
        """ROS2 퍼블리싱 시작"""
        self.stop_publishing()  # 기존 퍼블리싱 타이머 중지
        self.current_order = {"table": table, "flavors": flavors}

        # 타이머 설정 (1초 간격으로 퍼블리싱)
        self.publish_timer = QTimer(self)
        self.publish_timer.timeout.connect(self._publish_current_order)
        self.publish_timer.start(1000)  # 1000ms (1초)

    def stop_publishing(self):
        """ROS2 퍼블리싱 중지"""
        if self.publish_timer:
            self.publish_timer.stop()
            self.publish_timer = None
            print("Stopped Publishing")

    def _publish_current_order(self):
        """현재 주문을 ROS2로 퍼블리시"""
        if self.current_order:
            order_data_json = json.dumps(self.current_order)
            self.ros_publisher.publish_order(order_data_json)

    def closeEvent(self, event):
        """창을 닫을 때 ROS2 노드 종료"""
        self.stop_publishing()
        self.ros_publisher.destroy_node()
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

# class FlavorWindow(QMainWindow):
#     def __init__(self, order, main_window=None):
#         super().__init__()
#         self.order = order
#         self.main_window = main_window  # Optional로 설정
#         self.init_ui()

#     def init_ui(self):
#         self.flavor_window = uic.loadUi(get_ui_path('flavor.ui'), self)

#         # 버튼 커서 설정
#         self.flavor_window.chocoBtn.setCursor(QCursor(Qt.PointingHandCursor))
#         self.flavor_window.strawberryBtn.setCursor(QCursor(Qt.PointingHandCursor))
#         self.flavor_window.mintBtn.setCursor(QCursor(Qt.PointingHandCursor))
#         self.flavor_window.nextBtn.setCursor(QCursor(Qt.PointingHandCursor))

#         # SpinBox 초기화
#         self.choco_spinbox = self.flavor_window.chocoSpinBox
#         self.mint_spinbox = self.flavor_window.mintSpinBox
#         self.strawberry_spinbox = self.flavor_window.strawberrySpinBox

#         # 버튼 클릭 이벤트 설정
#         self.flavor_window.chocoBtn.clicked.connect(lambda: self.increment_spinbox(self.choco_spinbox))
#         self.flavor_window.strawberryBtn.clicked.connect(lambda: self.increment_spinbox(self.strawberry_spinbox))
#         self.flavor_window.mintBtn.clicked.connect(lambda: self.increment_spinbox(self.mint_spinbox))

#         # Next 버튼 클릭 시 ROS2 Publish 및 InfoWindow로 이동
#         self.flavor_window.nextBtn.clicked.connect(self.go_info)

#     def increment_spinbox(self, spinbox):
#         """SpinBox 값을 증가"""
#         current_value = spinbox.value()
#         spinbox.setValue(current_value + 1)
#         print(f"Updated SpinBox Value: {spinbox.value()}")

#     def go_info(self):
#         self.order.flavors = {
#             'choco': self.choco_spinbox.value(),
#             'mint': self.mint_spinbox.value(),
#             'strawberry': self.strawberry_spinbox.value()
#         }

#         print(f"Publishing Order: Table {self.order.table}, Flavors {self.order.flavors}")

#         # ROS2 Publish 호출
#         if self.main_window and hasattr(self.main_window, 'publish_order'):
#             self.main_window.publish_order(
#                 table=self.order.table,
#                 flavors=self.order.flavors
#             )
#         else:
#             print("MainWindow or publish_order method not found!")

#         # InfoWindow로 이동
#         self.info_window = InfoWindow(self.order, self.main_window)
#         self.info_window.show()
#         self.close()


# class InfoWindow(QMainWindow):
#     def __init__(self, order, main_window):
#         super().__init__()
#         self.order = order
#         self.main_window = main_window
#         self.step = 0
#         self.init_ui()

#     def init_ui(self):
#         self.info_window = uic.loadUi(get_ui_path('info.ui'), self)

#         flavors_summary = "\n".join(
#             [f"{flavor.capitalize()}: {quantity}" for flavor, quantity in self.order.flavors.items()]
#         )
#         self.info_window.flavor.setText(f"Selected Flavors:\n{flavors_summary}")

#         self.info_window.bar.setValue(0)
#         self.timer = QBasicTimer()
#         self.timer.start(100, self)

#     def timerEvent(self, e):
#         if self.step >= 100:
#             self.timer.stop()
#             print("Progress complete! Returning to Main Window.")
#             self.main_window.restart()
#             self.close()
#             return

#         self.step += 1
#         self.info_window.bar.setValue(self.step)
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
        self.order.flavors = {
            'choco': self.choco_spinbox.value(),
            'mint': self.mint_spinbox.value(),
            'strawberry': self.strawberry_spinbox.value()
        }

        print(f"Publishing Order: Table {self.order.table}, Flavors {self.order.flavors}")

        # ROS2 Publish 호출
        if self.main_window and hasattr(self.main_window, 'start_publishing'):
            self.main_window.start_publishing(
                table=self.order.table,
                flavors=self.order.flavors
            )

        # InfoWindow로 이동
        self.info_window = InfoWindow(self.order, self.main_window)
        self.info_window.show()
        self.close()


class InfoWindow(QMainWindow):
    def __init__(self, order, main_window):
        super().__init__()
        self.order = order
        self.main_window = main_window
        self.step = 0
        self.init_ui()

    def init_ui(self):
        self.info_window = uic.loadUi(get_ui_path('info.ui'), self)

        flavors_summary = "\n".join(
            [f"{flavor.capitalize()}: {quantity}" for flavor, quantity in self.order.flavors.items()]
        )
        self.info_window.flavor.setText(f"Selected Flavors:\n{flavors_summary}")

        self.info_window.bar.setValue(0)
        self.timer = QBasicTimer()
        self.timer.start(100, self)

    def timerEvent(self, e):
        if self.step >= 100:
            self.timer.stop()
            print("Progress complete! Returning to Main Window.")

            # 퍼블리시 중지
            if self.main_window and hasattr(self.main_window, 'stop_publishing'):
                self.main_window.stop_publishing()

            self.main_window.restart()
            self.close()
            return

        self.step += 1
        self.info_window.bar.setValue(self.step)


# def main():
#     # PyQt5 애플리케이션 초기화
#     app = QApplication(sys.argv)

#     # ROS2 노드 초기화
#     rclpy.init()  # 프로그램 전체에서 한 번만 호출
#     ros_publisher = ROS2Publisher()  # ROS2Publisher 노드 생성

#     # MainWindow 생성
#     main_window = MainWindow(ros_publisher)  # ROS2Publisher 전달
#     main_window.show()

#     # 이벤트 루프 실행
#     try:
#         app.exec()  # PyQt5 이벤트 루프 실행
#     except Exception as e:
#         print(f"Application error: {e}")
#     finally:
#         # 프로그램 종료 시 ROS2 노드 및 컨텍스트 정리
#         ros_publisher.destroy_node()
#         rclpy.shutdown()
def main():
    # PyQt5 애플리케이션 초기화
    app = QApplication(sys.argv)

    # ROS2 노드 초기화
    rclpy.init()  # 프로그램 전체에서 한 번만 호출
    ros_publisher = ROS2Publisher()  # ROS2Publisher 노드 생성

    # MainWindow 생성
    main_window = MainWindow(ros_publisher)  # ROS2Publisher 전달
    main_window.show()

    # 이벤트 루프 실행
    try:
        app.exec()  # PyQt5 이벤트 루프 실행
    except Exception as e:
        print(f"Application error: {e}")
    finally:
        # 프로그램 종료 시 ROS2 노드 및 컨텍스트 정리
        ros_publisher.destroy_node()
        rclpy.shutdown()



if __name__ == "__main__":
    main()
