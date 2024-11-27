// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_custom_interface:srv/ABC.idl
// generated code does not contain a copyright notice

#ifndef MY_CUSTOM_INTERFACE__SRV__DETAIL__ABC__BUILDER_HPP_
#define MY_CUSTOM_INTERFACE__SRV__DETAIL__ABC__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_custom_interface/srv/detail/abc__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_custom_interface
{

namespace srv
{

namespace builder
{

class Init_ABC_Request_b
{
public:
  explicit Init_ABC_Request_b(::my_custom_interface::srv::ABC_Request & msg)
  : msg_(msg)
  {}
  ::my_custom_interface::srv::ABC_Request b(::my_custom_interface::srv::ABC_Request::_b_type arg)
  {
    msg_.b = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_custom_interface::srv::ABC_Request msg_;
};

class Init_ABC_Request_a
{
public:
  Init_ABC_Request_a()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ABC_Request_b a(::my_custom_interface::srv::ABC_Request::_a_type arg)
  {
    msg_.a = std::move(arg);
    return Init_ABC_Request_b(msg_);
  }

private:
  ::my_custom_interface::srv::ABC_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_custom_interface::srv::ABC_Request>()
{
  return my_custom_interface::srv::builder::Init_ABC_Request_a();
}

}  // namespace my_custom_interface


namespace my_custom_interface
{

namespace srv
{

namespace builder
{

class Init_ABC_Response_sum
{
public:
  Init_ABC_Response_sum()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_custom_interface::srv::ABC_Response sum(::my_custom_interface::srv::ABC_Response::_sum_type arg)
  {
    msg_.sum = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_custom_interface::srv::ABC_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_custom_interface::srv::ABC_Response>()
{
  return my_custom_interface::srv::builder::Init_ABC_Response_sum();
}

}  // namespace my_custom_interface

#endif  // MY_CUSTOM_INTERFACE__SRV__DETAIL__ABC__BUILDER_HPP_
