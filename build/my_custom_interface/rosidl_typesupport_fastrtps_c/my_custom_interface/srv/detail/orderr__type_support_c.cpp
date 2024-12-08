// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from my_custom_interface:srv/ORDERR.idl
// generated code does not contain a copyright notice
#include "my_custom_interface/srv/detail/orderr__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "my_custom_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "my_custom_interface/srv/detail/orderr__struct.h"
#include "my_custom_interface/srv/detail/orderr__functions.h"
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

#include "rosidl_runtime_c/string.h"  // a
#include "rosidl_runtime_c/string_functions.h"  // a

// forward declare type support functions


using _ORDERR_Request__ros_msg_type = my_custom_interface__srv__ORDERR_Request;

static bool _ORDERR_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ORDERR_Request__ros_msg_type * ros_message = static_cast<const _ORDERR_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: a
  {
    const rosidl_runtime_c__String * str = &ros_message->a;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _ORDERR_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ORDERR_Request__ros_msg_type * ros_message = static_cast<_ORDERR_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: a
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->a.data) {
      rosidl_runtime_c__String__init(&ros_message->a);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->a,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'a'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_my_custom_interface
size_t get_serialized_size_my_custom_interface__srv__ORDERR_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ORDERR_Request__ros_msg_type * ros_message = static_cast<const _ORDERR_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name a
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->a.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _ORDERR_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_my_custom_interface__srv__ORDERR_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_my_custom_interface
size_t max_serialized_size_my_custom_interface__srv__ORDERR_Request(
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

  // member: a
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
    using DataType = my_custom_interface__srv__ORDERR_Request;
    is_plain =
      (
      offsetof(DataType, a) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _ORDERR_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_my_custom_interface__srv__ORDERR_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ORDERR_Request = {
  "my_custom_interface::srv",
  "ORDERR_Request",
  _ORDERR_Request__cdr_serialize,
  _ORDERR_Request__cdr_deserialize,
  _ORDERR_Request__get_serialized_size,
  _ORDERR_Request__max_serialized_size
};

static rosidl_message_type_support_t _ORDERR_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ORDERR_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_custom_interface, srv, ORDERR_Request)() {
  return &_ORDERR_Request__type_support;
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
// #include "my_custom_interface/srv/detail/orderr__struct.h"
// already included above
// #include "my_custom_interface/srv/detail/orderr__functions.h"
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

// already included above
// #include "rosidl_runtime_c/string.h"  // wait
// already included above
// #include "rosidl_runtime_c/string_functions.h"  // wait

// forward declare type support functions


using _ORDERR_Response__ros_msg_type = my_custom_interface__srv__ORDERR_Response;

static bool _ORDERR_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ORDERR_Response__ros_msg_type * ros_message = static_cast<const _ORDERR_Response__ros_msg_type *>(untyped_ros_message);
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

  // Field name: wait
  {
    const rosidl_runtime_c__String * str = &ros_message->wait;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _ORDERR_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ORDERR_Response__ros_msg_type * ros_message = static_cast<_ORDERR_Response__ros_msg_type *>(untyped_ros_message);
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

  // Field name: wait
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->wait.data) {
      rosidl_runtime_c__String__init(&ros_message->wait);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->wait,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'wait'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_my_custom_interface
size_t get_serialized_size_my_custom_interface__srv__ORDERR_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ORDERR_Response__ros_msg_type * ros_message = static_cast<const _ORDERR_Response__ros_msg_type *>(untyped_ros_message);
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
  // field.name wait
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->wait.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _ORDERR_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_my_custom_interface__srv__ORDERR_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_my_custom_interface
size_t max_serialized_size_my_custom_interface__srv__ORDERR_Response(
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
  // member: wait
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
    using DataType = my_custom_interface__srv__ORDERR_Response;
    is_plain =
      (
      offsetof(DataType, wait) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _ORDERR_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_my_custom_interface__srv__ORDERR_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ORDERR_Response = {
  "my_custom_interface::srv",
  "ORDERR_Response",
  _ORDERR_Response__cdr_serialize,
  _ORDERR_Response__cdr_deserialize,
  _ORDERR_Response__get_serialized_size,
  _ORDERR_Response__max_serialized_size
};

static rosidl_message_type_support_t _ORDERR_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ORDERR_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_custom_interface, srv, ORDERR_Response)() {
  return &_ORDERR_Response__type_support;
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
#include "my_custom_interface/srv/orderr.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t ORDERR__callbacks = {
  "my_custom_interface::srv",
  "ORDERR",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_custom_interface, srv, ORDERR_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_custom_interface, srv, ORDERR_Response)(),
};

static rosidl_service_type_support_t ORDERR__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &ORDERR__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_custom_interface, srv, ORDERR)() {
  return &ORDERR__handle;
}

#if defined(__cplusplus)
}
#endif
