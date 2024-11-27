// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from my_custom_interface:srv/ROTATEHOME.idl
// generated code does not contain a copyright notice

#ifndef MY_CUSTOM_INTERFACE__SRV__DETAIL__ROTATEHOME__TRAITS_HPP_
#define MY_CUSTOM_INTERFACE__SRV__DETAIL__ROTATEHOME__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "my_custom_interface/srv/detail/rotatehome__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'a'
#include "std_msgs/msg/detail/float32__traits.hpp"

namespace my_custom_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const ROTATEHOME_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: a
  {
    out << "a: ";
    to_flow_style_yaml(msg.a, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ROTATEHOME_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: a
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "a:\n";
    to_block_style_yaml(msg.a, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ROTATEHOME_Request & msg, bool use_flow_style = false)
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
  const my_custom_interface::srv::ROTATEHOME_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_custom_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_custom_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const my_custom_interface::srv::ROTATEHOME_Request & msg)
{
  return my_custom_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<my_custom_interface::srv::ROTATEHOME_Request>()
{
  return "my_custom_interface::srv::ROTATEHOME_Request";
}

template<>
inline const char * name<my_custom_interface::srv::ROTATEHOME_Request>()
{
  return "my_custom_interface/srv/ROTATEHOME_Request";
}

template<>
struct has_fixed_size<my_custom_interface::srv::ROTATEHOME_Request>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Float32>::value> {};

template<>
struct has_bounded_size<my_custom_interface::srv::ROTATEHOME_Request>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Float32>::value> {};

template<>
struct is_message<my_custom_interface::srv::ROTATEHOME_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'b'
#include "sensor_msgs/msg/detail/point_cloud2__traits.hpp"

namespace my_custom_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const ROTATEHOME_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: b
  {
    out << "b: ";
    to_flow_style_yaml(msg.b, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ROTATEHOME_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: b
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "b:\n";
    to_block_style_yaml(msg.b, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ROTATEHOME_Response & msg, bool use_flow_style = false)
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
  const my_custom_interface::srv::ROTATEHOME_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_custom_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_custom_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const my_custom_interface::srv::ROTATEHOME_Response & msg)
{
  return my_custom_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<my_custom_interface::srv::ROTATEHOME_Response>()
{
  return "my_custom_interface::srv::ROTATEHOME_Response";
}

template<>
inline const char * name<my_custom_interface::srv::ROTATEHOME_Response>()
{
  return "my_custom_interface/srv/ROTATEHOME_Response";
}

template<>
struct has_fixed_size<my_custom_interface::srv::ROTATEHOME_Response>
  : std::integral_constant<bool, has_fixed_size<sensor_msgs::msg::PointCloud2>::value> {};

template<>
struct has_bounded_size<my_custom_interface::srv::ROTATEHOME_Response>
  : std::integral_constant<bool, has_bounded_size<sensor_msgs::msg::PointCloud2>::value> {};

template<>
struct is_message<my_custom_interface::srv::ROTATEHOME_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<my_custom_interface::srv::ROTATEHOME>()
{
  return "my_custom_interface::srv::ROTATEHOME";
}

template<>
inline const char * name<my_custom_interface::srv::ROTATEHOME>()
{
  return "my_custom_interface/srv/ROTATEHOME";
}

template<>
struct has_fixed_size<my_custom_interface::srv::ROTATEHOME>
  : std::integral_constant<
    bool,
    has_fixed_size<my_custom_interface::srv::ROTATEHOME_Request>::value &&
    has_fixed_size<my_custom_interface::srv::ROTATEHOME_Response>::value
  >
{
};

template<>
struct has_bounded_size<my_custom_interface::srv::ROTATEHOME>
  : std::integral_constant<
    bool,
    has_bounded_size<my_custom_interface::srv::ROTATEHOME_Request>::value &&
    has_bounded_size<my_custom_interface::srv::ROTATEHOME_Response>::value
  >
{
};

template<>
struct is_service<my_custom_interface::srv::ROTATEHOME>
  : std::true_type
{
};

template<>
struct is_service_request<my_custom_interface::srv::ROTATEHOME_Request>
  : std::true_type
{
};

template<>
struct is_service_response<my_custom_interface::srv::ROTATEHOME_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MY_CUSTOM_INTERFACE__SRV__DETAIL__ROTATEHOME__TRAITS_HPP_
