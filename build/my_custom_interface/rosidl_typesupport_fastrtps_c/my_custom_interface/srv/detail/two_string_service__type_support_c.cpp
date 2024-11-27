// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from my_custom_interface:srv/TwoStringService.idl
// generated code does not contain a copyright notice
#include "my_custom_interface/srv/detail/two_string_service__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "my_custom_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "my_custom_interface/srv/detail/two_string_service__struct.h"
#include "my_custom_interface/srv/detail/two_string_service__functions.h"
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

#include "rosidl_runtime_c/string.h"  // a, b
#include "rosidl_runtime_c/string_functions.h"  // a, b

// forward declare type support functions


using _TwoStringService_Request__ros_msg_type = my_custom_interface__srv__TwoStringService_Request;

static bool _TwoStringService_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TwoStringService_Request__ros_msg_type * ros_message = static_cast<const _TwoStringService_Request__ros_msg_type *>(untyped_ros_message);
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

  // Field name: b
  {
    const rosidl_runtime_c__String * str = &ros_message->b;
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

static bool _TwoStringService_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TwoStringService_Request__ros_msg_type * ros_message = static_cast<_TwoStringService_Request__ros_msg_type *>(untyped_ros_message);
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

  // Field name: b
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->b.data) {
      rosidl_runtime_c__String__init(&ros_message->b);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->b,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'b'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_my_custom_interface
size_t get_serialized_size_my_custom_interface__srv__TwoStringService_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TwoStringService_Request__ros_msg_type * ros_message = static_cast<const _TwoStringService_Request__ros_msg_type *>(untyped_ros_message);
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
  // field.name b
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->b.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _TwoStringService_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_my_custom_interface__srv__TwoStringService_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_my_custom_interface
size_t max_serialized_size_my_custom_interface__srv__TwoStringService_Request(
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
  // member: b
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
    using DataType = my_custom_interface__srv__TwoStringService_Request;
    is_plain =
      (
      offsetof(DataType, b) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _TwoStringService_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_my_custom_interface__srv__TwoStringService_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_TwoStringService_Request = {
  "my_custom_interface::srv",
  "TwoStringService_Request",
  _TwoStringService_Request__cdr_serialize,
  _TwoStringService_Request__cdr_deserialize,
  _TwoStringService_Request__get_serialized_size,
  _TwoStringService_Request__max_serialized_size
};

static rosidl_message_type_support_t _TwoStringService_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TwoStringService_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_custom_interface, srv, TwoStringService_Request)() {
  return &_TwoStringService_Request__type_support;
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
// #include "my_custom_interface/srv/detail/two_string_service__struct.h"
// already included above
// #include "my_custom_interface/srv/detail/two_string_service__functions.h"
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
// #include "rosidl_runtime_c/string.h"  // sum
// already included above
// #include "rosidl_runtime_c/string_functions.h"  // sum

// forward declare type support functions


using _TwoStringService_Response__ros_msg_type = my_custom_interface__srv__TwoStringService_Response;

static bool _TwoStringService_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TwoStringService_Response__ros_msg_type * ros_message = static_cast<const _TwoStringService_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: sum
  {
    const rosidl_runtime_c__String * str = &ros_message->sum;
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

static bool _TwoStringService_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TwoStringService_Response__ros_msg_type * ros_message = static_cast<_TwoStringService_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: sum
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->sum.data) {
      rosidl_runtime_c__String__init(&ros_message->sum);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->sum,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'sum'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_my_custom_interface
size_t get_serialized_size_my_custom_interface__srv__TwoStringService_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TwoStringService_Response__ros_msg_type * ros_message = static_cast<const _TwoStringService_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name sum
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->sum.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _TwoStringService_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_my_custom_interface__srv__TwoStringService_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_my_custom_interface
size_t max_serialized_size_my_custom_interface__srv__TwoStringService_Response(
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

  // member: sum
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
    using DataType = my_custom_interface__srv__TwoStringService_Response;
    is_plain =
      (
      offsetof(DataType, sum) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _TwoStringService_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_my_custom_interface__srv__TwoStringService_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_TwoStringService_Response = {
  "my_custom_interface::srv",
  "TwoStringService_Response",
  _TwoStringService_Response__cdr_serialize,
  _TwoStringService_Response__cdr_deserialize,
  _TwoStringService_Response__get_serialized_size,
  _TwoStringService_Response__max_serialized_size
};

static rosidl_message_type_support_t _TwoStringService_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TwoStringService_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_custom_interface, srv, TwoStringService_Response)() {
  return &_TwoStringService_Response__type_support;
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
#include "my_custom_interface/srv/two_string_service.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t TwoStringService__callbacks = {
  "my_custom_interface::srv",
  "TwoStringService",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_custom_interface, srv, TwoStringService_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_custom_interface, srv, TwoStringService_Response)(),
};

static rosidl_service_type_support_t TwoStringService__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &TwoStringService__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_custom_interface, srv, TwoStringService)() {
  return &TwoStringService__handle;
}

#if defined(__cplusplus)
}
#endif
