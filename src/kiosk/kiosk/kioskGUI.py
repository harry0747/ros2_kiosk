#테이크아웃, 맵 다시 만들기
#프로그래스 바 통신
#테이블 고르는것도 통신
#맛&토핑 고르는것도 통신
#토핑 없애고 맛, 수량 선택할 수 있게 바꾸기

import os
import sys

from PyQt5.QtWidgets import *
from PyQt5 import uic   
from PyQt5.QtCore import *
from PyQt5.QtGui import QCursor, QFont

import time
import json

# image data
import resource_qrc
import resource_order_qrc
import resource_topping_qrc
import resource_pay_qrc
import resource_serve_qrc
import resource_table_qrc
import resource_receive
from dotenv import load_dotenv

load_dotenv()

def get_ui_path(relative_path):
    """프로젝트의 base 디렉토리를 기준으로 상대 경로를 반환"""
    base_dir = os.path.dirname(os.path.abspath(__file__))
    return os.path.join(base_dir, '../data/ui', relative_path)

class Order():
    def __init__(self):
        self.icecream = None
        self.toppings = None
        self.table = None

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
        print("Label clicked!")
        self.serving_window = ServingWindow()
        self.serving_window.show()
        self.main_window.hide()

    def restart(self):
        self.main_window.show()

class ServingWindow(QMainWindow):
    def __init__(self):
        super().__init__()
        self.order = Order()
        self.init_ui()

    def init_ui(self):
        self.serving_window = uic.loadUi(get_ui_path('serve.ui'), self)
        self.serving_window.show()

        self.serving_window.eat_here_Btn.setCursor(QCursor(Qt.PointingHandCursor))
        self.serving_window.takeout_Btn.setCursor(QCursor(Qt.PointingHandCursor))

        self.serving_window.eat_here_Btn.clicked.connect(self.go_table)
        self.serving_window.takeout_Btn.clicked.connect(self.go_flavor)

    def go_table(self):
        print("eat here clicked")
        self.TableWindow = TableWindow(self.order)
        self.TableWindow.show()
        self.serving_window.hide()


    def go_flavor(self):
        print("take out clicked")
        self.order.table = 0
        self.FlavorWindow = FlavorWindow(self.order, self.main_window)  # main_window 전달
        self.FlavorWindow.show()
        self.serving_window.hide()

class TableWindow(QMainWindow):
    def __init__(self, order):
        super().__init__()
        self.order = order
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
        self.FlavorWindow = FlavorWindow(self.order)
        self.FlavorWindow.show()
        self.table_window.hide()

class FlavorWindow(QMainWindow):
    def __init__(self, order):
        super().__init__()
        self.order = order
        self.main_window = main_window
        self.init_ui()

    def init_ui(self):
        self.flavor_window = uic.loadUi(get_ui_path('flavor.ui'), self)
        self.flavor_window.chocoBtn.setCursor(QCursor(Qt.PointingHandCursor))
        self.flavor_window.strawberryBtn.setCursor(QCursor(Qt.PointingHandCursor))
        self.flavor_window.mintBtn.setCursor(QCursor(Qt.PointingHandCursor))

        self.flavor_window.chocoBtn.clicked.connect(lambda: self.go_topping('choco'))
        self.flavor_window.strawberryBtn.clicked.connect(lambda: self.go_topping('strawberry'))
        self.flavor_window.mintBtn.clicked.connect(lambda: self.go_topping('mint'))

    def go_topping(self, flavor):
        print(f"Selected flavor: {flavor}")
        self.order.icecream = flavor
        self.topping_window = ToppingWindow(self.order, self.main_window)
        self.topping_window.show()
        self.flavor_window.close()
        
class ToppingWindow(QMainWindow):
    def __init__(self, order, main_window):
        super().__init__()
        self.order = order
        self.main_window = main_window  # MainWindow 참조
        self.list_topping = []
        self.init_ui()

    def init_ui(self):
        self.topping_window = uic.loadUi(get_ui_path('topping.ui'), self)
        self.topping_window.oreoBtn.setCursor(QCursor(Qt.PointingHandCursor))
        self.topping_window.chocoballBtn.setCursor(QCursor(Qt.PointingHandCursor))
        self.topping_window.cerialBtn.setCursor(QCursor(Qt.PointingHandCursor))
        self.topping_window.infoBtn.setCursor(QCursor(Qt.PointingHandCursor))

        self.topping_window.choco.hide()
        self.topping_window.strawberry.hide()
        self.topping_window.mint.hide()
        self.topping_window.oreotopping.hide()
        self.topping_window.chocotopping.hide()
        self.topping_window.cerialtopping.hide()

        self.topping_window.oreoBtn.clicked.connect(lambda: self.toggle_topping("oreo", self.topping_window.oreotopping))
        self.topping_window.chocoballBtn.clicked.connect(lambda: self.toggle_topping("chocoball", self.topping_window.chocotopping))
        self.topping_window.cerialBtn.clicked.connect(lambda: self.toggle_topping("cereal", self.topping_window.cerialtopping))
        self.topping_window.infoBtn.clicked.connect(self.go_info)

        if self.order.icecream == "choco":
            self.topping_window.choco.show()
        elif self.order.icecream == "strawberry":
            self.topping_window.strawberry.show()
        elif self.order.icecream == "mint":
            self.topping_window.mint.show()

    def toggle_topping(self, topping, label_widget):
        if label_widget.isHidden():
            label_widget.show()
            self.list_topping.append(topping)
        else:
            label_widget.hide()
            self.list_topping.remove(topping)
        print("Selected topping:", self.list_topping)

    def go_info(self):
        self.order.toppings = self.list_topping
        self.info_window = InfoWindow(self.order, self.main_window)  # main_window 전달
        self.info_window.show()
        self.topping_window.hide()
        self.topping_window.close()


class InfoWindow(QMainWindow):
    def __init__(self, order, main_window):
        super().__init__()
        self.order = order
        self.step = 0
        self.main_window = main_window  # MainWindow 참조
        self.init_ui()

    def init_ui(self):
        self.info_window = uic.loadUi(get_ui_path('info.ui'), self)

        self.info_window.cup.hide()
        self.info_window.choco.hide()
        self.info_window.strawberry.hide()
        self.info_window.mint.hide()
        self.info_window.turkey.hide()
        self.info_window.oreotopping.hide()
        self.info_window.chocotopping.hide()
        self.info_window.cerialtopping.hide()

        self.info_window.orderno.setText(f"Order No: None")
        self.info_window.flavor.setText(f"Flavor: {self.order.icecream}")
        self.info_window.topping.setText(f"Topping: {', '.join(self.order.toppings)}")
        if self.order.table == 0:
            self.info_window.tableno.setText("Takeout")
        else:
            self.info_window.tableno.setText(f"Table No: {self.order.table}")

        # Progress Bar 설정
        self.info_window.bar.setValue(0)
        self.timer = QBasicTimer()
        self.timer.start(100, self)  # 100ms마다 타이머 이벤트 발생

    def timerEvent(self, e):
        if self.step >= 100:
            self.timer.stop()
            print("Progress complete!")
            self.go_receive_window()  # Progress 완료 시 ReceiveWindow로 이동
            return

        self.step += 1
        self.info_window.bar.setValue(self.step)

    def go_receive_window(self):
        self.receive_window = ReceiveWindow(self.main_window)
        self.receive_window.show()
        
        self.info_window.close()
        
class ReceiveWindow(QMainWindow):
    def __init__(self, main_window):
        super().__init__()
        self.main_window = main_window
        self.init_ui()


    def init_ui(self):
        self.receive_window = uic.loadUi(get_ui_path('receive.ui'), self)
        self.receive_window.received.setCursor(QCursor(Qt.PointingHandCursor))

        # received 버튼 클릭 시 MainWindow로 돌아가기
        self.receive_window.received.clicked.connect(self.restart_main_window)

    def restart_main_window(self):
        self.close()  # 현재 창 닫기
        self.main_window.restart()  # MainWindow 다시 열기

if __name__ == "__main__":
    app = QApplication(sys.argv)
    main_window = MainWindow()
    main_window.show()
    sys.exit(app.exec_())