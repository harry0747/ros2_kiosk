// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_custom_interface:srv/DRIVE.idl
// generated code does not contain a copyright notice

#ifndef MY_CUSTOM_INTERFACE__SRV__DETAIL__DRIVE__BUILDER_HPP_
#define MY_CUSTOM_INTERFACE__SRV__DETAIL__DRIVE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_custom_interface/srv/detail/drive__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_custom_interface
{

namespace srv
{

namespace builder
{

class Init_DRIVE_Request_come
{
public:
  Init_DRIVE_Request_come()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_custom_interface::srv::DRIVE_Request come(::my_custom_interface::srv::DRIVE_Request::_come_type arg)
  {
    msg_.come = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_custom_interface::srv::DRIVE_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_custom_interface::srv::DRIVE_Request>()
{
  return my_custom_interface::srv::builder::Init_DRIVE_Request_come();
}

}  // namespace my_custom_interface


namespace my_custom_interface
{

namespace srv
{

namespace builder
{

class Init_DRIVE_Response_go
{
public:
  Init_DRIVE_Response_go()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_custom_interface::srv::DRIVE_Response go(::my_custom_interface::srv::DRIVE_Response::_go_type arg)
  {
    msg_.go = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_custom_interface::srv::DRIVE_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_custom_interface::srv::DRIVE_Response>()
{
  return my_custom_interface::srv::builder::Init_DRIVE_Response_go();
}

}  // namespace my_custom_interface

#endif  // MY_CUSTOM_INTERFACE__SRV__DETAIL__DRIVE__BUILDER_HPP_
