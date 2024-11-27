// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from my_custom_interface:srv/TwoStringService.idl
// generated code does not contain a copyright notice

#ifndef MY_CUSTOM_INTERFACE__SRV__DETAIL__TWO_STRING_SERVICE__TRAITS_HPP_
#define MY_CUSTOM_INTERFACE__SRV__DETAIL__TWO_STRING_SERVICE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "my_custom_interface/srv/detail/two_string_service__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace my_custom_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const TwoStringService_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: a
  {
    out << "a: ";
    rosidl_generator_traits::value_to_yaml(msg.a, out);
    out << ", ";
  }

  // member: b
  {
    out << "b: ";
    rosidl_generator_traits::value_to_yaml(msg.b, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TwoStringService_Request & msg,
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

  // member: b
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "b: ";
    rosidl_generator_traits::value_to_yaml(msg.b, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TwoStringService_Request & msg, bool use_flow_style = false)
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
  const my_custom_interface::srv::TwoStringService_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_custom_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_custom_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const my_custom_interface::srv::TwoStringService_Request & msg)
{
  return my_custom_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<my_custom_interface::srv::TwoStringService_Request>()
{
  return "my_custom_interface::srv::TwoStringService_Request";
}

template<>
inline const char * name<my_custom_interface::srv::TwoStringService_Request>()
{
  return "my_custom_interface/srv/TwoStringService_Request";
}

template<>
struct has_fixed_size<my_custom_interface::srv::TwoStringService_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<my_custom_interface::srv::TwoStringService_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<my_custom_interface::srv::TwoStringService_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace my_custom_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const TwoStringService_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: sum
  {
    out << "sum: ";
    rosidl_generator_traits::value_to_yaml(msg.sum, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TwoStringService_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: sum
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sum: ";
    rosidl_generator_traits::value_to_yaml(msg.sum, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TwoStringService_Response & msg, bool use_flow_style = false)
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
  const my_custom_interface::srv::TwoStringService_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_custom_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_custom_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const my_custom_interface::srv::TwoStringService_Response & msg)
{
  return my_custom_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<my_custom_interface::srv::TwoStringService_Response>()
{
  return "my_custom_interface::srv::TwoStringService_Response";
}

template<>
inline const char * name<my_custom_interface::srv::TwoStringService_Response>()
{
  return "my_custom_interface/srv/TwoStringService_Response";
}

template<>
struct has_fixed_size<my_custom_interface::srv::TwoStringService_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<my_custom_interface::srv::TwoStringService_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<my_custom_interface::srv::TwoStringService_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<my_custom_interface::srv::TwoStringService>()
{
  return "my_custom_interface::srv::TwoStringService";
}

template<>
inline const char * name<my_custom_interface::srv::TwoStringService>()
{
  return "my_custom_interface/srv/TwoStringService";
}

template<>
struct has_fixed_size<my_custom_interface::srv::TwoStringService>
  : std::integral_constant<
    bool,
    has_fixed_size<my_custom_interface::srv::TwoStringService_Request>::value &&
    has_fixed_size<my_custom_interface::srv::TwoStringService_Response>::value
  >
{
};

template<>
struct has_bounded_size<my_custom_interface::srv::TwoStringService>
  : std::integral_constant<
    bool,
    has_bounded_size<my_custom_interface::srv::TwoStringService_Request>::value &&
    has_bounded_size<my_custom_interface::srv::TwoStringService_Response>::value
  >
{
};

template<>
struct is_service<my_custom_interface::srv::TwoStringService>
  : std::true_type
{
};

template<>
struct is_service_request<my_custom_interface::srv::TwoStringService_Request>
  : std::true_type
{
};

template<>
struct is_service_response<my_custom_interface::srv::TwoStringService_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MY_CUSTOM_INTERFACE__SRV__DETAIL__TWO_STRING_SERVICE__TRAITS_HPP_
