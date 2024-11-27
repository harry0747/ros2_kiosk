// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_custom_interface:srv/DRIVE.idl
// generated code does not contain a copyright notice

#ifndef MY_CUSTOM_INTERFACE__SRV__DETAIL__DRIVE__STRUCT_H_
#define MY_CUSTOM_INTERFACE__SRV__DETAIL__DRIVE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'come'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/DRIVE in the package my_custom_interface.
typedef struct my_custom_interface__srv__DRIVE_Request
{
  rosidl_runtime_c__String come;
} my_custom_interface__srv__DRIVE_Request;

// Struct for a sequence of my_custom_interface__srv__DRIVE_Request.
typedef struct my_custom_interface__srv__DRIVE_Request__Sequence
{
  my_custom_interface__srv__DRIVE_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_custom_interface__srv__DRIVE_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'go'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/DRIVE in the package my_custom_interface.
typedef struct my_custom_interface__srv__DRIVE_Response
{
  rosidl_runtime_c__String go;
} my_custom_interface__srv__DRIVE_Response;

// Struct for a sequence of my_custom_interface__srv__DRIVE_Response.
typedef struct my_custom_interface__srv__DRIVE_Response__Sequence
{
  my_custom_interface__srv__DRIVE_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_custom_interface__srv__DRIVE_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_CUSTOM_INTERFACE__SRV__DETAIL__DRIVE__STRUCT_H_
