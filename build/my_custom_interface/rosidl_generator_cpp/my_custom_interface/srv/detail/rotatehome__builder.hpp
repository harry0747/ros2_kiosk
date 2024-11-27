// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_custom_interface:srv/ROTATEHOME.idl
// generated code does not contain a copyright notice

#ifndef MY_CUSTOM_INTERFACE__SRV__DETAIL__ROTATEHOME__BUILDER_HPP_
#define MY_CUSTOM_INTERFACE__SRV__DETAIL__ROTATEHOME__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_custom_interface/srv/detail/rotatehome__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_custom_interface
{

namespace srv
{

namespace builder
{

class Init_ROTATEHOME_Request_a
{
public:
  Init_ROTATEHOME_Request_a()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_custom_interface::srv::ROTATEHOME_Request a(::my_custom_interface::srv::ROTATEHOME_Request::_a_type arg)
  {
    msg_.a = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_custom_interface::srv::ROTATEHOME_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_custom_interface::srv::ROTATEHOME_Request>()
{
  return my_custom_interface::srv::builder::Init_ROTATEHOME_Request_a();
}

}  // namespace my_custom_interface


namespace my_custom_interface
{

namespace srv
{

namespace builder
{

class Init_ROTATEHOME_Response_b
{
public:
  Init_ROTATEHOME_Response_b()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_custom_interface::srv::ROTATEHOME_Response b(::my_custom_interface::srv::ROTATEHOME_Response::_b_type arg)
  {
    msg_.b = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_custom_interface::srv::ROTATEHOME_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_custom_interface::srv::ROTATEHOME_Response>()
{
  return my_custom_interface::srv::builder::Init_ROTATEHOME_Response_b();
}

}  // namespace my_custom_interface

#endif  // MY_CUSTOM_INTERFACE__SRV__DETAIL__ROTATEHOME__BUILDER_HPP_
