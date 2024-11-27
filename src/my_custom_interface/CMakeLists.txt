cmake_minimum_required(VERSION 3.8)
project(my_custom_interface)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# Find dependencies
find_package(ament_cmake REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(std_msgs REQUIRED)  # std_msgs 의존성 추가
find_package(sensor_msgs REQUIRED)  # sensor_msgs 의존성 추가

################################################################################
# Declare ROS messages, services, and actions
################################################################################
set(srv_files
  "srv/ABC.srv"
  "srv/ROTATEHOME.srv"
  "srv/TwoStringService.srv"
  "srv/COMPLETE.srv"
  "srv/DRIVE.srv"
  "srv/ORDER.srv"
  "srv/ORDERR.srv"
)
set(action_files
  "action/Calculator.action"
  "action/Cal.action"
  "action/COME.action"
  
)

# Generate interfaces
rosidl_generate_interfaces(${PROJECT_NAME}
  ${srv_files}
  ${action_files}
  DEPENDENCIES std_msgs sensor_msgs  # 필요한 메시지 의존성 추가
  
 
)

################################################################################
# Macro for ament package
################################################################################
ament_package()


