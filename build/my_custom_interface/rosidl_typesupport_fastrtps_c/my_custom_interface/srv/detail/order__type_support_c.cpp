// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from my_custom_interface:srv/ORDER.idl
// generated code does not contain a copyright notice
#include "my_custom_interface/srv/detail/order__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "my_custom_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "my_custom_interface/srv/detail/order__struct.h"
#include "my_custom_interface/srv/detail/order__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _ORDER_Request__ros_msg_type = my_custom_interface__srv__ORDER_Request;

static bool _ORDER_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ORDER_Request__ros_msg_type * ros_message = static_cast<const _ORDER_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: chocolate
  {
    cdr << ros_message->chocolate;
  }

  // Field name: mint
  {
    cdr << ros_message->mint;
  }

  // Field name: strawberry
  {
    cdr << ros_message->strawberry;
  }

  // Field name: table_number
  {
    cdr << ros_message->table_number;
  }

  return true;
}

static bool _ORDER_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ORDER_Request__ros_msg_type * ros_message = static_cast<_ORDER_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: chocolate
  {
    cdr >> ros_message->chocolate;
  }

  // Field name: mint
  {
    cdr >> ros_message->mint;
  }

  // Field name: strawberry
  {
    cdr >> ros_message->strawberry;
  }

  // Field name: table_number
  {
    cdr >> ros_message->table_number;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_my_custom_interface
size_t get_serialized_size_my_custom_interface__srv__ORDER_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ORDER_Request__ros_msg_type * ros_message = static_cast<const _ORDER_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name chocolate
  {
    size_t item_size = sizeof(ros_message->chocolate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mint
  {
    size_t item_size = sizeof(ros_message->mint);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name strawberry
  {
    size_t item_size = sizeof(ros_message->strawberry);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name table_number
  {
    size_t item_size = sizeof(ros_message->table_number);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ORDER_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_my_custom_interface__srv__ORDER_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_my_custom_interface
size_t max_serialized_size_my_custom_interface__srv__ORDER_Request(
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

  // member: chocolate
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: mint
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: strawberry
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: table_number
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
    using DataType = my_custom_interface__srv__ORDER_Request;
    is_plain =
      (
      offsetof(DataType, table_number) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _ORDER_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_my_custom_interface__srv__ORDER_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ORDER_Request = {
  "my_custom_interface::srv",
  "ORDER_Request",
  _ORDER_Request__cdr_serialize,
  _ORDER_Request__cdr_deserialize,
  _ORDER_Request__get_serialized_size,
  _ORDER_Request__max_serialized_size
};

static rosidl_message_type_support_t _ORDER_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ORDER_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_custom_interface, srv, ORDER_Request)() {
  return &_ORDER_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "my_custom_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "my_custom_interface/srv/detail/order__struct.h"
// already included above
// #include "my_custom_interface/srv/detail/order__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _ORDER_Response__ros_msg_type = my_custom_interface__srv__ORDER_Response;

static bool _ORDER_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ORDER_Response__ros_msg_type * ros_message = static_cast<const _ORDER_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: answer
  {
    cdr << ros_message->answer;
  }

  return true;
}

static bool _ORDER_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ORDER_Response__ros_msg_type * ros_message = static_cast<_ORDER_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: answer
  {
    cdr >> ros_message->answer;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_my_custom_interface
size_t get_serialized_size_my_custom_interface__srv__ORDER_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ORDER_Response__ros_msg_type * ros_message = static_cast<const _ORDER_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name answer
  {
    size_t item_size = sizeof(ros_message->answer);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ORDER_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_my_custom_interface__srv__ORDER_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_my_custom_interface
size_t max_serialized_size_my_custom_interface__srv__ORDER_Response(
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

  // member: answer
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
    using DataType = my_custom_interface__srv__ORDER_Response;
    is_plain =
      (
      offsetof(DataType, answer) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _ORDER_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_my_custom_interface__srv__ORDER_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ORDER_Response = {
  "my_custom_interface::srv",
  "ORDER_Response",
  _ORDER_Response__cdr_serialize,
  _ORDER_Response__cdr_deserialize,
  _ORDER_Response__get_serialized_size,
  _ORDER_Response__max_serialized_size
};

static rosidl_message_type_support_t _ORDER_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ORDER_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_custom_interface, srv, ORDER_Response)() {
  return &_ORDER_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "my_custom_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "my_custom_interface/srv/order.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t ORDER__callbacks = {
  "my_custom_interface::srv",
  "ORDER",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_custom_interface, srv, ORDER_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_custom_interface, srv, ORDER_Response)(),
};

static rosidl_service_type_support_t ORDER__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &ORDER__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_custom_interface, srv, ORDER)() {
  return &ORDER__handle;
}

#if defined(__cplusplus)
}
#endif
