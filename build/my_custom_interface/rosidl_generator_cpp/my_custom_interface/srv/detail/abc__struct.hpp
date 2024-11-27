// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from my_custom_interface:srv/ABC.idl
// generated code does not contain a copyright notice

#ifndef MY_CUSTOM_INTERFACE__SRV__DETAIL__ABC__STRUCT_HPP_
#define MY_CUSTOM_INTERFACE__SRV__DETAIL__ABC__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__my_custom_interface__srv__ABC_Request __attribute__((deprecated))
#else
# define DEPRECATED__my_custom_interface__srv__ABC_Request __declspec(deprecated)
#endif

namespace my_custom_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ABC_Request_
{
  using Type = ABC_Request_<ContainerAllocator>;

  explicit ABC_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->a = "";
      this->b = "";
    }
  }

  explicit ABC_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : a(_alloc),
    b(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->a = "";
      this->b = "";
    }
  }

  // field types and members
  using _a_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _a_type a;
  using _b_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _b_type b;

  // setters for named parameter idiom
  Type & set__a(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->a = _arg;
    return *this;
  }
  Type & set__b(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->b = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_custom_interface::srv::ABC_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_custom_interface::srv::ABC_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_custom_interface::srv::ABC_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_custom_interface::srv::ABC_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_custom_interface::srv::ABC_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_custom_interface::srv::ABC_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_custom_interface::srv::ABC_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_custom_interface::srv::ABC_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_custom_interface::srv::ABC_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_custom_interface::srv::ABC_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_custom_interface__srv__ABC_Request
    std::shared_ptr<my_custom_interface::srv::ABC_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_custom_interface__srv__ABC_Request
    std::shared_ptr<my_custom_interface::srv::ABC_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ABC_Request_ & other) const
  {
    if (this->a != other.a) {
      return false;
    }
    if (this->b != other.b) {
      return false;
    }
    return true;
  }
  bool operator!=(const ABC_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ABC_Request_

// alias to use template instance with default allocator
using ABC_Request =
  my_custom_interface::srv::ABC_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace my_custom_interface


#ifndef _WIN32
# define DEPRECATED__my_custom_interface__srv__ABC_Response __attribute__((deprecated))
#else
# define DEPRECATED__my_custom_interface__srv__ABC_Response __declspec(deprecated)
#endif

namespace my_custom_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ABC_Response_
{
  using Type = ABC_Response_<ContainerAllocator>;

  explicit ABC_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sum = "";
    }
  }

  explicit ABC_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : sum(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sum = "";
    }
  }

  // field types and members
  using _sum_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _sum_type sum;

  // setters for named parameter idiom
  Type & set__sum(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->sum = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_custom_interface::srv::ABC_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_custom_interface::srv::ABC_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_custom_interface::srv::ABC_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_custom_interface::srv::ABC_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_custom_interface::srv::ABC_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_custom_interface::srv::ABC_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_custom_interface::srv::ABC_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_custom_interface::srv::ABC_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_custom_interface::srv::ABC_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_custom_interface::srv::ABC_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_custom_interface__srv__ABC_Response
    std::shared_ptr<my_custom_interface::srv::ABC_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_custom_interface__srv__ABC_Response
    std::shared_ptr<my_custom_interface::srv::ABC_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ABC_Response_ & other) const
  {
    if (this->sum != other.sum) {
      return false;
    }
    return true;
  }
  bool operator!=(const ABC_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ABC_Response_

// alias to use template instance with default allocator
using ABC_Response =
  my_custom_interface::srv::ABC_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace my_custom_interface

namespace my_custom_interface
{

namespace srv
{

struct ABC
{
  using Request = my_custom_interface::srv::ABC_Request;
  using Response = my_custom_interface::srv::ABC_Response;
};

}  // namespace srv

}  // namespace my_custom_interface

#endif  // MY_CUSTOM_INTERFACE__SRV__DETAIL__ABC__STRUCT_HPP_
