// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_custom_interface:srv/ORDER.idl
// generated code does not contain a copyright notice

#ifndef MY_CUSTOM_INTERFACE__SRV__DETAIL__ORDER__BUILDER_HPP_
#define MY_CUSTOM_INTERFACE__SRV__DETAIL__ORDER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_custom_interface/srv/detail/order__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_custom_interface
{

namespace srv
{

namespace builder
{

class Init_ORDER_Request_table_number
{
public:
  explicit Init_ORDER_Request_table_number(::my_custom_interface::srv::ORDER_Request & msg)
  : msg_(msg)
  {}
  ::my_custom_interface::srv::ORDER_Request table_number(::my_custom_interface::srv::ORDER_Request::_table_number_type arg)
  {
    msg_.table_number = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_custom_interface::srv::ORDER_Request msg_;
};

class Init_ORDER_Request_strawberry
{
public:
  explicit Init_ORDER_Request_strawberry(::my_custom_interface::srv::ORDER_Request & msg)
  : msg_(msg)
  {}
  Init_ORDER_Request_table_number strawberry(::my_custom_interface::srv::ORDER_Request::_strawberry_type arg)
  {
    msg_.strawberry = std::move(arg);
    return Init_ORDER_Request_table_number(msg_);
  }

private:
  ::my_custom_interface::srv::ORDER_Request msg_;
};

class Init_ORDER_Request_mint
{
public:
  explicit Init_ORDER_Request_mint(::my_custom_interface::srv::ORDER_Request & msg)
  : msg_(msg)
  {}
  Init_ORDER_Request_strawberry mint(::my_custom_interface::srv::ORDER_Request::_mint_type arg)
  {
    msg_.mint = std::move(arg);
    return Init_ORDER_Request_strawberry(msg_);
  }

private:
  ::my_custom_interface::srv::ORDER_Request msg_;
};

class Init_ORDER_Request_chocolate
{
public:
  Init_ORDER_Request_chocolate()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ORDER_Request_mint chocolate(::my_custom_interface::srv::ORDER_Request::_chocolate_type arg)
  {
    msg_.chocolate = std::move(arg);
    return Init_ORDER_Request_mint(msg_);
  }

private:
  ::my_custom_interface::srv::ORDER_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_custom_interface::srv::ORDER_Request>()
{
  return my_custom_interface::srv::builder::Init_ORDER_Request_chocolate();
}

}  // namespace my_custom_interface


namespace my_custom_interface
{

namespace srv
{

namespace builder
{

class Init_ORDER_Response_answer
{
public:
  Init_ORDER_Response_answer()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_custom_interface::srv::ORDER_Response answer(::my_custom_interface::srv::ORDER_Response::_answer_type arg)
  {
    msg_.answer = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_custom_interface::srv::ORDER_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_custom_interface::srv::ORDER_Response>()
{
  return my_custom_interface::srv::builder::Init_ORDER_Response_answer();
}

}  // namespace my_custom_interface

#endif  // MY_CUSTOM_INTERFACE__SRV__DETAIL__ORDER__BUILDER_HPP_
