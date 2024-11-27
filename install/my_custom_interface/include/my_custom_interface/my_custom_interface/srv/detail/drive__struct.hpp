// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from my_custom_interface:srv/DRIVE.idl
// generated code does not contain a copyright notice

#ifndef MY_CUSTOM_INTERFACE__SRV__DETAIL__DRIVE__STRUCT_HPP_
#define MY_CUSTOM_INTERFACE__SRV__DETAIL__DRIVE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__my_custom_interface__srv__DRIVE_Request __attribute__((deprecated))
#else
# define DEPRECATED__my_custom_interface__srv__DRIVE_Request __declspec(deprecated)
#endif

namespace my_custom_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct DRIVE_Request_
{
  using Type = DRIVE_Request_<ContainerAllocator>;

  explicit DRIVE_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->come = "";
    }
  }

  explicit DRIVE_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : come(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->come = "";
    }
  }

  // field types and members
  using _come_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _come_type come;

  // setters for named parameter idiom
  Type & set__come(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->come = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_custom_interface::srv::DRIVE_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_custom_interface::srv::DRIVE_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_custom_interface::srv::DRIVE_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_custom_interface::srv::DRIVE_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_custom_interface::srv::DRIVE_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_custom_interface::srv::DRIVE_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_custom_interface::srv::DRIVE_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_custom_interface::srv::DRIVE_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_custom_interface::srv::DRIVE_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_custom_interface::srv::DRIVE_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_custom_interface__srv__DRIVE_Request
    std::shared_ptr<my_custom_interface::srv::DRIVE_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_custom_interface__srv__DRIVE_Request
    std::shared_ptr<my_custom_interface::srv::DRIVE_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DRIVE_Request_ & other) const
  {
    if (this->come != other.come) {
      return false;
    }
    return true;
  }
  bool operator!=(const DRIVE_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DRIVE_Request_

// alias to use template instance with default allocator
using DRIVE_Request =
  my_custom_interface::srv::DRIVE_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace my_custom_interface


#ifndef _WIN32
# define DEPRECATED__my_custom_interface__srv__DRIVE_Response __attribute__((deprecated))
#else
# define DEPRECATED__my_custom_interface__srv__DRIVE_Response __declspec(deprecated)
#endif

namespace my_custom_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct DRIVE_Response_
{
  using Type = DRIVE_Response_<ContainerAllocator>;

  explicit DRIVE_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->go = "";
    }
  }

  explicit DRIVE_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : go(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->go = "";
    }
  }

  // field types and members
  using _go_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _go_type go;

  // setters for named parameter idiom
  Type & set__go(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->go = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_custom_interface::srv::DRIVE_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_custom_interface::srv::DRIVE_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_custom_interface::srv::DRIVE_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_custom_interface::srv::DRIVE_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_custom_interface::srv::DRIVE_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_custom_interface::srv::DRIVE_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_custom_interface::srv::DRIVE_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_custom_interface::srv::DRIVE_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_custom_interface::srv::DRIVE_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_custom_interface::srv::DRIVE_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_custom_interface__srv__DRIVE_Response
    std::shared_ptr<my_custom_interface::srv::DRIVE_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_custom_interface__srv__DRIVE_Response
    std::shared_ptr<my_custom_interface::srv::DRIVE_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DRIVE_Response_ & other) const
  {
    if (this->go != other.go) {
      return false;
    }
    return true;
  }
  bool operator!=(const DRIVE_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DRIVE_Response_

// alias to use template instance with default allocator
using DRIVE_Response =
  my_custom_interface::srv::DRIVE_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace my_custom_interface

namespace my_custom_interface
{

namespace srv
{

struct DRIVE
{
  using Request = my_custom_interface::srv::DRIVE_Request;
  using Response = my_custom_interface::srv::DRIVE_Response;
};

}  // namespace srv

}  // namespace my_custom_interface

#endif  // MY_CUSTOM_INTERFACE__SRV__DETAIL__DRIVE__STRUCT_HPP_
