// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_custom_interface:srv/ORDERR.idl
// generated code does not contain a copyright notice

#ifndef MY_CUSTOM_INTERFACE__SRV__DETAIL__ORDERR__BUILDER_HPP_
#define MY_CUSTOM_INTERFACE__SRV__DETAIL__ORDERR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_custom_interface/srv/detail/orderr__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_custom_interface
{

namespace srv
{

namespace builder
{

class Init_ORDERR_Request_a
{
public:
  Init_ORDERR_Request_a()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_custom_interface::srv::ORDERR_Request a(::my_custom_interface::srv::ORDERR_Request::_a_type arg)
  {
    msg_.a = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_custom_interface::srv::ORDERR_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_custom_interface::srv::ORDERR_Request>()
{
  return my_custom_interface::srv::builder::Init_ORDERR_Request_a();
}

}  // namespace my_custom_interface


namespace my_custom_interface
{

namespace srv
{

namespace builder
{

class Init_ORDERR_Response_table_number
{
public:
  explicit Init_ORDERR_Response_table_number(::my_custom_interface::srv::ORDERR_Response & msg)
  : msg_(msg)
  {}
  ::my_custom_interface::srv::ORDERR_Response table_number(::my_custom_interface::srv::ORDERR_Response::_table_number_type arg)
  {
    msg_.table_number = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_custom_interface::srv::ORDERR_Response msg_;
};

class Init_ORDERR_Response_strawberry
{
public:
  explicit Init_ORDERR_Response_strawberry(::my_custom_interface::srv::ORDERR_Response & msg)
  : msg_(msg)
  {}
  Init_ORDERR_Response_table_number strawberry(::my_custom_interface::srv::ORDERR_Response::_strawberry_type arg)
  {
    msg_.strawberry = std::move(arg);
    return Init_ORDERR_Response_table_number(msg_);
  }

private:
  ::my_custom_interface::srv::ORDERR_Response msg_;
};

class Init_ORDERR_Response_mint
{
public:
  explicit Init_ORDERR_Response_mint(::my_custom_interface::srv::ORDERR_Response & msg)
  : msg_(msg)
  {}
  Init_ORDERR_Response_strawberry mint(::my_custom_interface::srv::ORDERR_Response::_mint_type arg)
  {
    msg_.mint = std::move(arg);
    return Init_ORDERR_Response_strawberry(msg_);
  }

private:
  ::my_custom_interface::srv::ORDERR_Response msg_;
};

class Init_ORDERR_Response_chocolate
{
public:
  Init_ORDERR_Response_chocolate()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ORDERR_Response_mint chocolate(::my_custom_interface::srv::ORDERR_Response::_chocolate_type arg)
  {
    msg_.chocolate = std::move(arg);
    return Init_ORDERR_Response_mint(msg_);
  }

private:
  ::my_custom_interface::srv::ORDERR_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_custom_interface::srv::ORDERR_Response>()
{
  return my_custom_interface::srv::builder::Init_ORDERR_Response_chocolate();
}

}  // namespace my_custom_interface

#endif  // MY_CUSTOM_INTERFACE__SRV__DETAIL__ORDERR__BUILDER_HPP_
