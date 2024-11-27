// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from my_custom_interface:srv/ORDER.idl
// generated code does not contain a copyright notice

#ifndef MY_CUSTOM_INTERFACE__SRV__DETAIL__ORDER__STRUCT_HPP_
#define MY_CUSTOM_INTERFACE__SRV__DETAIL__ORDER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__my_custom_interface__srv__ORDER_Request __attribute__((deprecated))
#else
# define DEPRECATED__my_custom_interface__srv__ORDER_Request __declspec(deprecated)
#endif

namespace my_custom_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ORDER_Request_
{
  using Type = ORDER_Request_<ContainerAllocator>;

  explicit ORDER_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->chocolate = 0;
      this->mint = 0;
      this->strawberry = 0;
      this->table_number = 0;
    }
  }

  explicit ORDER_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->chocolate = 0;
      this->mint = 0;
      this->strawberry = 0;
      this->table_number = 0;
    }
  }

  // field types and members
  using _chocolate_type =
    int8_t;
  _chocolate_type chocolate;
  using _mint_type =
    int8_t;
  _mint_type mint;
  using _strawberry_type =
    int8_t;
  _strawberry_type strawberry;
  using _table_number_type =
    int8_t;
  _table_number_type table_number;

  // setters for named parameter idiom
  Type & set__chocolate(
    const int8_t & _arg)
  {
    this->chocolate = _arg;
    return *this;
  }
  Type & set__mint(
    const int8_t & _arg)
  {
    this->mint = _arg;
    return *this;
  }
  Type & set__strawberry(
    const int8_t & _arg)
  {
    this->strawberry = _arg;
    return *this;
  }
  Type & set__table_number(
    const int8_t & _arg)
  {
    this->table_number = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_custom_interface::srv::ORDER_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_custom_interface::srv::ORDER_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_custom_interface::srv::ORDER_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_custom_interface::srv::ORDER_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_custom_interface::srv::ORDER_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_custom_interface::srv::ORDER_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_custom_interface::srv::ORDER_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_custom_interface::srv::ORDER_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_custom_interface::srv::ORDER_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_custom_interface::srv::ORDER_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_custom_interface__srv__ORDER_Request
    std::shared_ptr<my_custom_interface::srv::ORDER_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_custom_interface__srv__ORDER_Request
    std::shared_ptr<my_custom_interface::srv::ORDER_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ORDER_Request_ & other) const
  {
    if (this->chocolate != other.chocolate) {
      return false;
    }
    if (this->mint != other.mint) {
      return false;
    }
    if (this->strawberry != other.strawberry) {
      return false;
    }
    if (this->table_number != other.table_number) {
      return false;
    }
    return true;
  }
  bool operator!=(const ORDER_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ORDER_Request_

// alias to use template instance with default allocator
using ORDER_Request =
  my_custom_interface::srv::ORDER_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace my_custom_interface


#ifndef _WIN32
# define DEPRECATED__my_custom_interface__srv__ORDER_Response __attribute__((deprecated))
#else
# define DEPRECATED__my_custom_interface__srv__ORDER_Response __declspec(deprecated)
#endif

namespace my_custom_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ORDER_Response_
{
  using Type = ORDER_Response_<ContainerAllocator>;

  explicit ORDER_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->answer = 0;
    }
  }

  explicit ORDER_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->answer = 0;
    }
  }

  // field types and members
  using _answer_type =
    int8_t;
  _answer_type answer;

  // setters for named parameter idiom
  Type & set__answer(
    const int8_t & _arg)
  {
    this->answer = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_custom_interface::srv::ORDER_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_custom_interface::srv::ORDER_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_custom_interface::srv::ORDER_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_custom_interface::srv::ORDER_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_custom_interface::srv::ORDER_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_custom_interface::srv::ORDER_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_custom_interface::srv::ORDER_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_custom_interface::srv::ORDER_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_custom_interface::srv::ORDER_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_custom_interface::srv::ORDER_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_custom_interface__srv__ORDER_Response
    std::shared_ptr<my_custom_interface::srv::ORDER_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_custom_interface__srv__ORDER_Response
    std::shared_ptr<my_custom_interface::srv::ORDER_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ORDER_Response_ & other) const
  {
    if (this->answer != other.answer) {
      return false;
    }
    return true;
  }
  bool operator!=(const ORDER_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ORDER_Response_

// alias to use template instance with default allocator
using ORDER_Response =
  my_custom_interface::srv::ORDER_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace my_custom_interface

namespace my_custom_interface
{

namespace srv
{

struct ORDER
{
  using Request = my_custom_interface::srv::ORDER_Request;
  using Response = my_custom_interface::srv::ORDER_Response;
};

}  // namespace srv

}  // namespace my_custom_interface

#endif  // MY_CUSTOM_INTERFACE__SRV__DETAIL__ORDER__STRUCT_HPP_
