// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_custom_interface:srv/TwoStringService.idl
// generated code does not contain a copyright notice

#ifndef MY_CUSTOM_INTERFACE__SRV__DETAIL__TWO_STRING_SERVICE__STRUCT_H_
#define MY_CUSTOM_INTERFACE__SRV__DETAIL__TWO_STRING_SERVICE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'a'
// Member 'b'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/TwoStringService in the package my_custom_interface.
typedef struct my_custom_interface__srv__TwoStringService_Request
{
  rosidl_runtime_c__String a;
  rosidl_runtime_c__String b;
} my_custom_interface__srv__TwoStringService_Request;

// Struct for a sequence of my_custom_interface__srv__TwoStringService_Request.
typedef struct my_custom_interface__srv__TwoStringService_Request__Sequence
{
  my_custom_interface__srv__TwoStringService_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_custom_interface__srv__TwoStringService_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'sum'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/TwoStringService in the package my_custom_interface.
typedef struct my_custom_interface__srv__TwoStringService_Response
{
  rosidl_runtime_c__String sum;
} my_custom_interface__srv__TwoStringService_Response;

// Struct for a sequence of my_custom_interface__srv__TwoStringService_Response.
typedef struct my_custom_interface__srv__TwoStringService_Response__Sequence
{
  my_custom_interface__srv__TwoStringService_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_custom_interface__srv__TwoStringService_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_CUSTOM_INTERFACE__SRV__DETAIL__TWO_STRING_SERVICE__STRUCT_H_
