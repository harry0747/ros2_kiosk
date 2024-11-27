import os
import sys
import rclpy
from rclpy.node import Node
from std_msgs.msg import String
from PyQt5.QtWidgets import *
from PyQt5 import uic
from PyQt5.QtCore import *
from PyQt5.QtGui import QCursor, QFont
from kiosk import (
    resource_receive,
)
from ament_index_python.packages import get_package_share_directory
from dotenv import load_dotenv

# 환경 변수 로드
load_dotenv()

def get_ui_path(relative_path):
    """ROS 패키지 설치 경로를 기준으로 .ui 파일 경로 반환"""
    base_dir = get_package_share_directory('kiosk')  # 'kiosk'는 패키지 이름
    return os.path.join(base_dir, 'data/ui', relative_path)

# ROS2 Publisher Node
class ROS2Publisher(Node):
    def __init__(self):
        super().__init__('receive_publisher')
        self.publisher = self.create_publisher(String, 'receive_status', 10)  # 토픽 이름: receive_status

    def publish_message(self, message):
        msg = String()
        msg.data = message
        self.publisher.publish(msg)
        self.get_logger().info(f'Published: {message}')


# Receive Window UI
class ReceiveWindow(QMainWindow):
    def __init__(self, ros_publisher):
        super().__init__()
        self.ros_publisher = ros_publisher  # ROS2 퍼블리셔 전달
        self.init_ui()

    def init_ui(self):
        self.receive_window = uic.loadUi(get_ui_path('receive.ui'), self)
        self.receive_window.received.setCursor(QCursor(Qt.PointingHandCursor))

        # received 버튼 클릭 시 메시지 퍼블리시
        self.receive_window.received.clicked.connect(self.publish_received_status)

    def publish_received_status(self):
        """received 버튼 클릭 시 'yes' 메시지 퍼블리시"""
        self.ros_publisher.publish_message('yes')
        print("Published 'yes' to /receive_status topic")
        self.close()  # 창 닫기


def main():
    # ROS2 초기화
    rclpy.init()

    # ROS2 퍼블리셔 노드 생성
    ros_publisher = ROS2Publisher()

    # PyQt5 애플리케이션 초기화
    app = QApplication(sys.argv)

    # ReceiveWindow 생성
    receive_window = ReceiveWindow(ros_publisher)
    receive_window.show()

    # 이벤트 루프 실행
    try:
        app.exec()
    except Exception as e:
        print(f"Application error: {e}")
    finally:
        # ROS2 노드 종료
        ros_publisher.destroy_node()
        rclpy.shutdown()

if __name__ == "__main__":
    main()
