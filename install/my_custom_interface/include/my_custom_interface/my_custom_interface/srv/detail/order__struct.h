// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_custom_interface:srv/ORDER.idl
// generated code does not contain a copyright notice

#ifndef MY_CUSTOM_INTERFACE__SRV__DETAIL__ORDER__STRUCT_H_
#define MY_CUSTOM_INTERFACE__SRV__DETAIL__ORDER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/ORDER in the package my_custom_interface.
typedef struct my_custom_interface__srv__ORDER_Request
{
  int8_t chocolate;
  int8_t mint;
  int8_t strawberry;
  int8_t table_number;
} my_custom_interface__srv__ORDER_Request;

// Struct for a sequence of my_custom_interface__srv__ORDER_Request.
typedef struct my_custom_interface__srv__ORDER_Request__Sequence
{
  my_custom_interface__srv__ORDER_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_custom_interface__srv__ORDER_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'answer'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/ORDER in the package my_custom_interface.
typedef struct my_custom_interface__srv__ORDER_Response
{
  rosidl_runtime_c__String answer;
} my_custom_interface__srv__ORDER_Response;

// Struct for a sequence of my_custom_interface__srv__ORDER_Response.
typedef struct my_custom_interface__srv__ORDER_Response__Sequence
{
  my_custom_interface__srv__ORDER_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_custom_interface__srv__ORDER_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_CUSTOM_INTERFACE__SRV__DETAIL__ORDER__STRUCT_H_
