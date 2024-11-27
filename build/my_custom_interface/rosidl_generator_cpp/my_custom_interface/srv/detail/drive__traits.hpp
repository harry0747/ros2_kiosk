// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from my_custom_interface:srv/DRIVE.idl
// generated code does not contain a copyright notice

#ifndef MY_CUSTOM_INTERFACE__SRV__DETAIL__DRIVE__TRAITS_HPP_
#define MY_CUSTOM_INTERFACE__SRV__DETAIL__DRIVE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "my_custom_interface/srv/detail/drive__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace my_custom_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const DRIVE_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: come
  {
    out << "come: ";
    rosidl_generator_traits::value_to_yaml(msg.come, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DRIVE_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: come
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "come: ";
    rosidl_generator_traits::value_to_yaml(msg.come, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DRIVE_Request & msg, bool use_flow_style = false)
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
  const my_custom_interface::srv::DRIVE_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_custom_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_custom_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const my_custom_interface::srv::DRIVE_Request & msg)
{
  return my_custom_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<my_custom_interface::srv::DRIVE_Request>()
{
  return "my_custom_interface::srv::DRIVE_Request";
}

template<>
inline const char * name<my_custom_interface::srv::DRIVE_Request>()
{
  return "my_custom_interface/srv/DRIVE_Request";
}

template<>
struct has_fixed_size<my_custom_interface::srv::DRIVE_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<my_custom_interface::srv::DRIVE_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<my_custom_interface::srv::DRIVE_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace my_custom_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const DRIVE_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: go
  {
    out << "go: ";
    rosidl_generator_traits::value_to_yaml(msg.go, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DRIVE_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: go
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "go: ";
    rosidl_generator_traits::value_to_yaml(msg.go, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DRIVE_Response & msg, bool use_flow_style = false)
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
  const my_custom_interface::srv::DRIVE_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_custom_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_custom_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const my_custom_interface::srv::DRIVE_Response & msg)
{
  return my_custom_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<my_custom_interface::srv::DRIVE_Response>()
{
  return "my_custom_interface::srv::DRIVE_Response";
}

template<>
inline const char * name<my_custom_interface::srv::DRIVE_Response>()
{
  return "my_custom_interface/srv/DRIVE_Response";
}

template<>
struct has_fixed_size<my_custom_interface::srv::DRIVE_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<my_custom_interface::srv::DRIVE_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<my_custom_interface::srv::DRIVE_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<my_custom_interface::srv::DRIVE>()
{
  return "my_custom_interface::srv::DRIVE";
}

template<>
inline const char * name<my_custom_interface::srv::DRIVE>()
{
  return "my_custom_interface/srv/DRIVE";
}

template<>
struct has_fixed_size<my_custom_interface::srv::DRIVE>
  : std::integral_constant<
    bool,
    has_fixed_size<my_custom_interface::srv::DRIVE_Request>::value &&
    has_fixed_size<my_custom_interface::srv::DRIVE_Response>::value
  >
{
};

template<>
struct has_bounded_size<my_custom_interface::srv::DRIVE>
  : std::integral_constant<
    bool,
    has_bounded_size<my_custom_interface::srv::DRIVE_Request>::value &&
    has_bounded_size<my_custom_interface::srv::DRIVE_Response>::value
  >
{
};

template<>
struct is_service<my_custom_interface::srv::DRIVE>
  : std::true_type
{
};

template<>
struct is_service_request<my_custom_interface::srv::DRIVE_Request>
  : std::true_type
{
};

template<>
struct is_service_response<my_custom_interface::srv::DRIVE_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MY_CUSTOM_INTERFACE__SRV__DETAIL__DRIVE__TRAITS_HPP_
