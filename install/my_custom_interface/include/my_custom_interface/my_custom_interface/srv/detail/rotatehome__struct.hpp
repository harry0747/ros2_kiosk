// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from my_custom_interface:srv/ROTATEHOME.idl
// generated code does not contain a copyright notice

#ifndef MY_CUSTOM_INTERFACE__SRV__DETAIL__ROTATEHOME__STRUCT_HPP_
#define MY_CUSTOM_INTERFACE__SRV__DETAIL__ROTATEHOME__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'a'
#include "std_msgs/msg/detail/float32__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__my_custom_interface__srv__ROTATEHOME_Request __attribute__((deprecated))
#else
# define DEPRECATED__my_custom_interface__srv__ROTATEHOME_Request __declspec(deprecated)
#endif

namespace my_custom_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ROTATEHOME_Request_
{
  using Type = ROTATEHOME_Request_<ContainerAllocator>;

  explicit ROTATEHOME_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : a(_init)
  {
    (void)_init;
  }

  explicit ROTATEHOME_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : a(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _a_type =
    std_msgs::msg::Float32_<ContainerAllocator>;
  _a_type a;

  // setters for named parameter idiom
  Type & set__a(
    const std_msgs::msg::Float32_<ContainerAllocator> & _arg)
  {
    this->a = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_custom_interface::srv::ROTATEHOME_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_custom_interface::srv::ROTATEHOME_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_custom_interface::srv::ROTATEHOME_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_custom_interface::srv::ROTATEHOME_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_custom_interface::srv::ROTATEHOME_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_custom_interface::srv::ROTATEHOME_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_custom_interface::srv::ROTATEHOME_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_custom_interface::srv::ROTATEHOME_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_custom_interface::srv::ROTATEHOME_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_custom_interface::srv::ROTATEHOME_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_custom_interface__srv__ROTATEHOME_Request
    std::shared_ptr<my_custom_interface::srv::ROTATEHOME_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_custom_interface__srv__ROTATEHOME_Request
    std::shared_ptr<my_custom_interface::srv::ROTATEHOME_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ROTATEHOME_Request_ & other) const
  {
    if (this->a != other.a) {
      return false;
    }
    return true;
  }
  bool operator!=(const ROTATEHOME_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ROTATEHOME_Request_

// alias to use template instance with default allocator
using ROTATEHOME_Request =
  my_custom_interface::srv::ROTATEHOME_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace my_custom_interface


// Include directives for member types
// Member 'b'
#include "sensor_msgs/msg/detail/point_cloud2__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__my_custom_interface__srv__ROTATEHOME_Response __attribute__((deprecated))
#else
# define DEPRECATED__my_custom_interface__srv__ROTATEHOME_Response __declspec(deprecated)
#endif

namespace my_custom_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ROTATEHOME_Response_
{
  using Type = ROTATEHOME_Response_<ContainerAllocator>;

  explicit ROTATEHOME_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : b(_init)
  {
    (void)_init;
  }

  explicit ROTATEHOME_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : b(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _b_type =
    sensor_msgs::msg::PointCloud2_<ContainerAllocator>;
  _b_type b;

  // setters for named parameter idiom
  Type & set__b(
    const sensor_msgs::msg::PointCloud2_<ContainerAllocator> & _arg)
  {
    this->b = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_custom_interface::srv::ROTATEHOME_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_custom_interface::srv::ROTATEHOME_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_custom_interface::srv::ROTATEHOME_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_custom_interface::srv::ROTATEHOME_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_custom_interface::srv::ROTATEHOME_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_custom_interface::srv::ROTATEHOME_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_custom_interface::srv::ROTATEHOME_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_custom_interface::srv::ROTATEHOME_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_custom_interface::srv::ROTATEHOME_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_custom_interface::srv::ROTATEHOME_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_custom_interface__srv__ROTATEHOME_Response
    std::shared_ptr<my_custom_interface::srv::ROTATEHOME_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_custom_interface__srv__ROTATEHOME_Response
    std::shared_ptr<my_custom_interface::srv::ROTATEHOME_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ROTATEHOME_Response_ & other) const
  {
    if (this->b != other.b) {
      return false;
    }
    return true;
  }
  bool operator!=(const ROTATEHOME_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ROTATEHOME_Response_

// alias to use template instance with default allocator
using ROTATEHOME_Response =
  my_custom_interface::srv::ROTATEHOME_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace my_custom_interface

namespace my_custom_interface
{

namespace srv
{

struct ROTATEHOME
{
  using Request = my_custom_interface::srv::ROTATEHOME_Request;
  using Response = my_custom_interface::srv::ROTATEHOME_Response;
};

}  // namespace srv

}  // namespace my_custom_interface

#endif  // MY_CUSTOM_INTERFACE__SRV__DETAIL__ROTATEHOME__STRUCT_HPP_
