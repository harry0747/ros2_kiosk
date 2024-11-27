// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from my_custom_interface:srv/DRIVE.idl
// generated code does not contain a copyright notice
#include "my_custom_interface/srv/detail/drive__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "my_custom_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "my_custom_interface/srv/detail/drive__struct.h"
#include "my_custom_interface/srv/detail/drive__functions.h"
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

#include "rosidl_runtime_c/string.h"  // come
#include "rosidl_runtime_c/string_functions.h"  // come

// forward declare type support functions


using _DRIVE_Request__ros_msg_type = my_custom_interface__srv__DRIVE_Request;

static bool _DRIVE_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _DRIVE_Request__ros_msg_type * ros_message = static_cast<const _DRIVE_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: come
  {
    const rosidl_runtime_c__String * str = &ros_message->come;
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

static bool _DRIVE_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _DRIVE_Request__ros_msg_type * ros_message = static_cast<_DRIVE_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: come
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->come.data) {
      rosidl_runtime_c__String__init(&ros_message->come);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->come,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'come'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_my_custom_interface
size_t get_serialized_size_my_custom_interface__srv__DRIVE_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _DRIVE_Request__ros_msg_type * ros_message = static_cast<const _DRIVE_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name come
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->come.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _DRIVE_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_my_custom_interface__srv__DRIVE_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_my_custom_interface
size_t max_serialized_size_my_custom_interface__srv__DRIVE_Request(
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

  // member: come
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
    using DataType = my_custom_interface__srv__DRIVE_Request;
    is_plain =
      (
      offsetof(DataType, come) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _DRIVE_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_my_custom_interface__srv__DRIVE_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_DRIVE_Request = {
  "my_custom_interface::srv",
  "DRIVE_Request",
  _DRIVE_Request__cdr_serialize,
  _DRIVE_Request__cdr_deserialize,
  _DRIVE_Request__get_serialized_size,
  _DRIVE_Request__max_serialized_size
};

static rosidl_message_type_support_t _DRIVE_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_DRIVE_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_custom_interface, srv, DRIVE_Request)() {
  return &_DRIVE_Request__type_support;
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
// #include "my_custom_interface/srv/detail/drive__struct.h"
// already included above
// #include "my_custom_interface/srv/detail/drive__functions.h"
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
// #include "rosidl_runtime_c/string.h"  // go
// already included above
// #include "rosidl_runtime_c/string_functions.h"  // go

// forward declare type support functions


using _DRIVE_Response__ros_msg_type = my_custom_interface__srv__DRIVE_Response;

static bool _DRIVE_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _DRIVE_Response__ros_msg_type * ros_message = static_cast<const _DRIVE_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: go
  {
    const rosidl_runtime_c__String * str = &ros_message->go;
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

static bool _DRIVE_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _DRIVE_Response__ros_msg_type * ros_message = static_cast<_DRIVE_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: go
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->go.data) {
      rosidl_runtime_c__String__init(&ros_message->go);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->go,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'go'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_my_custom_interface
size_t get_serialized_size_my_custom_interface__srv__DRIVE_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _DRIVE_Response__ros_msg_type * ros_message = static_cast<const _DRIVE_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name go
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->go.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _DRIVE_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_my_custom_interface__srv__DRIVE_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_my_custom_interface
size_t max_serialized_size_my_custom_interface__srv__DRIVE_Response(
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

  // member: go
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
    using DataType = my_custom_interface__srv__DRIVE_Response;
    is_plain =
      (
      offsetof(DataType, go) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _DRIVE_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_my_custom_interface__srv__DRIVE_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_DRIVE_Response = {
  "my_custom_interface::srv",
  "DRIVE_Response",
  _DRIVE_Response__cdr_serialize,
  _DRIVE_Response__cdr_deserialize,
  _DRIVE_Response__get_serialized_size,
  _DRIVE_Response__max_serialized_size
};

static rosidl_message_type_support_t _DRIVE_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_DRIVE_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_custom_interface, srv, DRIVE_Response)() {
  return &_DRIVE_Response__type_support;
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
#include "my_custom_interface/srv/drive.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t DRIVE__callbacks = {
  "my_custom_interface::srv",
  "DRIVE",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_custom_interface, srv, DRIVE_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_custom_interface, srv, DRIVE_Response)(),
};

static rosidl_service_type_support_t DRIVE__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &DRIVE__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_custom_interface, srv, DRIVE)() {
  return &DRIVE__handle;
}

#if defined(__cplusplus)
}
#endif
