# ROS2 Kiosk

## 프로젝트: ROS2 기반 키오스크 주문 시스템

---

### 목적

- **ROS2**와 **PyQt5**를 이용하여 키오스크 형태의 주문 시스템 구현.
- 사용자 인터페이스를 통해 아이스크림 주문을 받고, 주문 정보를 ROS2 토픽으로 퍼블리시.
- 주문 완료 후 프로세스를 종료하고, 새로운 주문을 받을 수 있도록 반복 처리.

---

### 주요 기능

#### 1. 주문 인터페이스
- 사용자가 테이블 번호와 아이스크림 맛 및 수량을 선택할 수 있는 **PyQt5 GUI** 제공.
- **Next 버튼**을 누르면 주문 정보를 **ROS2 토픽 /kiosk_order**로 퍼블리시.

#### 2. ROS2 퍼블리시
- 주문 정보를 **JSON 형식**으로 변환하여 **ROS2 토픽 /kiosk_order**에 주기적으로 퍼블리시.
- **프로그래스 바**가 완료되면 퍼블리시 중지.

#### 3. 반복 가능
- 주문이 완료된 후 **MainWindow**로 돌아가 새로운 주문을 받을 준비를 함.

---

### 코드 실행 흐름

#### MainWindow
- 초기화면에서 Order 버튼 클릭 시 주문 창으로 이동.
- ROS2 퍼블리셔를 초기화하고 주문 데이터를 퍼블리시.

#### ServingWindow
-Takeout 또는 Eat Here 버튼을 선택해 테이블 번호 입력.
-테이블 번호와 함께 다음 단계로 이동.
-FlavorWindow
-아이스크림 맛과 수량을 선택.
-Next 버튼을 누르면 ROS2 퍼블리시 시작.
-InfoWindow로 이동.

#### InfoWindow
-프로그래스 바를 표시하며 주문 완료를 알림.
-프로그래스 바가 100%에 도달하면 퍼블리시 중지 후 MainWindow로 복귀.

---

### ROS2 명령어

#### 프로젝트 실행
1. 워크스페이스를 빌드합니다:

```bash
    colcon build```
   
3. 환경설정을 불러온후, kiosk 실행

```bash
    ros2 run kiosk kiosk

4. 제대로 퍼블리시가 되는지 확인하고 싶으면 아래 명령어 입력
  

    ros2 topic echo /kiosk_order

---

### 자율주행 로봇에 붙을 receive UI
- 버튼을 누르면 yes라는 메시직 퍼블리시됨.

#### 실행 명령어 


    ros2 run kiosk receive


퍼블리시 되는 것을 확인하고 싶으면


    ros2 topic echo /receive_status
    
    
    
