// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from my_custom_interface:srv/COMPLETE.idl
// generated code does not contain a copyright notice

#ifndef MY_CUSTOM_INTERFACE__SRV__DETAIL__COMPLETE__TRAITS_HPP_
#define MY_CUSTOM_INTERFACE__SRV__DETAIL__COMPLETE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "my_custom_interface/srv/detail/complete__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace my_custom_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const COMPLETE_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: a
  {
    out << "a: ";
    rosidl_generator_traits::value_to_yaml(msg.a, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const COMPLETE_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: a
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "a: ";
    rosidl_generator_traits::value_to_yaml(msg.a, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const COMPLETE_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace my_custom_interface

namespace rosidl_generator_traits
{

[[deprecated("use my_custom_interface::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_custom_interface::srv::COMPLETE_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_custom_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_custom_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const my_custom_interface::srv::COMPLETE_Request & msg)
{
  return my_custom_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<my_custom_interface::srv::COMPLETE_Request>()
{
  return "my_custom_interface::srv::COMPLETE_Request";
}

template<>
inline const char * name<my_custom_interface::srv::COMPLETE_Request>()
{
  return "my_custom_interface/srv/COMPLETE_Request";
}

template<>
struct has_fixed_size<my_custom_interface::srv::COMPLETE_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<my_custom_interface::srv::COMPLETE_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<my_custom_interface::srv::COMPLETE_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace my_custom_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const COMPLETE_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: good
  {
    out << "good: ";
    rosidl_generator_traits::value_to_yaml(msg.good, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const COMPLETE_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: good
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "good: ";
    rosidl_generator_traits::value_to_yaml(msg.good, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const COMPLETE_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace my_custom_interface

namespace rosidl_generator_traits
{

[[deprecated("use my_custom_interface::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_custom_interface::srv::COMPLETE_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_custom_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_custom_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const my_custom_interface::srv::COMPLETE_Response & msg)
{
  return my_custom_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<my_custom_interface::srv::COMPLETE_Response>()
{
  return "my_custom_interface::srv::COMPLETE_Response";
}

template<>
inline const char * name<my_custom_interface::srv::COMPLETE_Response>()
{
  return "my_custom_interface/srv/COMPLETE_Response";
}

template<>
struct has_fixed_size<my_custom_interface::srv::COMPLETE_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<my_custom_interface::srv::COMPLETE_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<my_custom_interface::srv::COMPLETE_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<my_custom_interface::srv::COMPLETE>()
{
  return "my_custom_interface::srv::COMPLETE";
}

template<>
inline const char * name<my_custom_interface::srv::COMPLETE>()
{
  return "my_custom_interface/srv/COMPLETE";
}

template<>
struct has_fixed_size<my_custom_interface::srv::COMPLETE>
  : std::integral_constant<
    bool,
    has_fixed_size<my_custom_interface::srv::COMPLETE_Request>::value &&
    has_fixed_size<my_custom_interface::srv::COMPLETE_Response>::value
  >
{
};

template<>
struct has_bounded_size<my_custom_interface::srv::COMPLETE>
  : std::integral_constant<
    bool,
    has_bounded_size<my_custom_interface::srv::COMPLETE_Request>::value &&
    has_bounded_size<my_custom_interface::srv::COMPLETE_Response>::value
  >
{
};

template<>
struct is_service<my_custom_interface::srv::COMPLETE>
  : std::true_type
{
};

template<>
struct is_service_request<my_custom_interface::srv::COMPLETE_Request>
  : std::true_type
{
};

template<>
struct is_service_response<my_custom_interface::srv::COMPLETE_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MY_CUSTOM_INTERFACE__SRV__DETAIL__COMPLETE__TRAITS_HPP_
