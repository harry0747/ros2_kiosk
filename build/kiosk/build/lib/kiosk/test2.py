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

# 환경 변수 로드
load_dotenv()

def get_ui_path(relative_path):
    """ROS 패키지 설치 경로를 기준으로 .ui 파일 경로 반환"""
    base_dir = get_package_share_directory('kiosk')  # 'kiosk'는 패키지 이름
    return os.path.join(base_dir, 'data/ui', relative_path)


class Order():
    def __init__(self):
        self.icecream = None
        self.toppings = None
        self.table = None
        self.flavors = {}


class MainWindow(QMainWindow):
    def __init__(self):
        super().__init__()
        self.init_ui()

    def init_ui(self):
        self.main_window = uic.loadUi(get_ui_path('main.ui'), self)
        self.main_window.show()

        self.main_window.orderBtn.setCursor(QCursor(Qt.PointingHandCursor))
        self.main_window.orderBtn.clicked.connect(self.go_order)

    def go_order(self):
        print("Order button clicked!")
        self.serving_window = ServingWindow(self)  # MainWindow 전달
        self.serving_window.show()
        self.main_window.hide()

    def restart(self):
        print("Returning to Main Window")
        self.main_window.show()


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

        # Next 버튼 클릭 시 다음 페이지로 이동
        self.flavor_window.nextBtn.clicked.connect(self.go_info)

    def increment_spinbox(self, spinbox):
        """SpinBox 값을 증가"""
        current_value = spinbox.value()
        spinbox.setValue(current_value + 1)
        print(f"Updated SpinBox Value: {spinbox.value()}")

    def go_info(self):
        """InfoWindow로 이동"""
        # SpinBox 값을 주문 정보에 저장
        self.order.flavors = {
            'choco': self.choco_spinbox.value(),
            'mint': self.mint_spinbox.value(),
            'strawberry': self.strawberry_spinbox.value()
        }
        print(f"Order Summary: {self.order.flavors}")

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
            self.main_window.restart()
            self.close()
            return

        self.step += 1
        self.info_window.bar.setValue(self.step)


def main():
    app = QApplication(sys.argv)
    main_window = MainWindow()
    main_window.show()
    sys.exit(app.exec_())


if __name__ == "__main__":
    main()
