// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from my_custom_interface:srv/ORDER.idl
// generated code does not contain a copyright notice
#include "my_custom_interface/srv/detail/order__rosidl_typesupport_fastrtps_cpp.hpp"
#include "my_custom_interface/srv/detail/order__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace my_custom_interface
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_my_custom_interface
cdr_serialize(
  const my_custom_interface::srv::ORDER_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: chocolate
  cdr << ros_message.chocolate;
  // Member: mint
  cdr << ros_message.mint;
  // Member: strawberry
  cdr << ros_message.strawberry;
  // Member: table_number
  cdr << ros_message.table_number;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_my_custom_interface
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  my_custom_interface::srv::ORDER_Request & ros_message)
{
  // Member: chocolate
  cdr >> ros_message.chocolate;

  // Member: mint
  cdr >> ros_message.mint;

  // Member: strawberry
  cdr >> ros_message.strawberry;

  // Member: table_number
  cdr >> ros_message.table_number;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_my_custom_interface
get_serialized_size(
  const my_custom_interface::srv::ORDER_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: chocolate
  {
    size_t item_size = sizeof(ros_message.chocolate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mint
  {
    size_t item_size = sizeof(ros_message.mint);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: strawberry
  {
    size_t item_size = sizeof(ros_message.strawberry);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: table_number
  {
    size_t item_size = sizeof(ros_message.table_number);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_my_custom_interface
max_serialized_size_ORDER_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: chocolate
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: mint
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: strawberry
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: table_number
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = my_custom_interface::srv::ORDER_Request;
    is_plain =
      (
      offsetof(DataType, table_number) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _ORDER_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const my_custom_interface::srv::ORDER_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ORDER_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<my_custom_interface::srv::ORDER_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ORDER_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const my_custom_interface::srv::ORDER_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ORDER_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ORDER_Request(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _ORDER_Request__callbacks = {
  "my_custom_interface::srv",
  "ORDER_Request",
  _ORDER_Request__cdr_serialize,
  _ORDER_Request__cdr_deserialize,
  _ORDER_Request__get_serialized_size,
  _ORDER_Request__max_serialized_size
};

static rosidl_message_type_support_t _ORDER_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ORDER_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace my_custom_interface

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_my_custom_interface
const rosidl_message_type_support_t *
get_message_type_support_handle<my_custom_interface::srv::ORDER_Request>()
{
  return &my_custom_interface::srv::typesupport_fastrtps_cpp::_ORDER_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, my_custom_interface, srv, ORDER_Request)() {
  return &my_custom_interface::srv::typesupport_fastrtps_cpp::_ORDER_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace my_custom_interface
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_my_custom_interface
cdr_serialize(
  const my_custom_interface::srv::ORDER_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: answer
  cdr << ros_message.answer;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_my_custom_interface
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  my_custom_interface::srv::ORDER_Response & ros_message)
{
  // Member: answer
  cdr >> ros_message.answer;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_my_custom_interface
get_serialized_size(
  const my_custom_interface::srv::ORDER_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: answer
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.answer.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_my_custom_interface
max_serialized_size_ORDER_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: answer
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = my_custom_interface::srv::ORDER_Response;
    is_plain =
      (
      offsetof(DataType, answer) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _ORDER_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const my_custom_interface::srv::ORDER_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ORDER_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<my_custom_interface::srv::ORDER_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ORDER_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const my_custom_interface::srv::ORDER_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ORDER_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ORDER_Response(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _ORDER_Response__callbacks = {
  "my_custom_interface::srv",
  "ORDER_Response",
  _ORDER_Response__cdr_serialize,
  _ORDER_Response__cdr_deserialize,
  _ORDER_Response__get_serialized_size,
  _ORDER_Response__max_serialized_size
};

static rosidl_message_type_support_t _ORDER_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ORDER_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace my_custom_interface

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_my_custom_interface
const rosidl_message_type_support_t *
get_message_type_support_handle<my_custom_interface::srv::ORDER_Response>()
{
  return &my_custom_interface::srv::typesupport_fastrtps_cpp::_ORDER_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, my_custom_interface, srv, ORDER_Response)() {
  return &my_custom_interface::srv::typesupport_fastrtps_cpp::_ORDER_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace my_custom_interface
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _ORDER__callbacks = {
  "my_custom_interface::srv",
  "ORDER",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, my_custom_interface, srv, ORDER_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, my_custom_interface, srv, ORDER_Response)(),
};

static rosidl_service_type_support_t _ORDER__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ORDER__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace my_custom_interface

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_my_custom_interface
const rosidl_service_type_support_t *
get_service_type_support_handle<my_custom_interface::srv::ORDER>()
{
  return &my_custom_interface::srv::typesupport_fastrtps_cpp::_ORDER__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, my_custom_interface, srv, ORDER)() {
  return &my_custom_interface::srv::typesupport_fastrtps_cpp::_ORDER__handle;
}

#ifdef __cplusplus
}
#endif
