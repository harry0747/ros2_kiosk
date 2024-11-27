// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_custom_interface:srv/ROTATEHOME.idl
// generated code does not contain a copyright notice

#ifndef MY_CUSTOM_INTERFACE__SRV__DETAIL__ROTATEHOME__STRUCT_H_
#define MY_CUSTOM_INTERFACE__SRV__DETAIL__ROTATEHOME__STRUCT_H_

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
#include "std_msgs/msg/detail/float32__struct.h"

/// Struct defined in srv/ROTATEHOME in the package my_custom_interface.
typedef struct my_custom_interface__srv__ROTATEHOME_Request
{
  std_msgs__msg__Float32 a;
} my_custom_interface__srv__ROTATEHOME_Request;

// Struct for a sequence of my_custom_interface__srv__ROTATEHOME_Request.
typedef struct my_custom_interface__srv__ROTATEHOME_Request__Sequence
{
  my_custom_interface__srv__ROTATEHOME_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_custom_interface__srv__ROTATEHOME_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'b'
#include "sensor_msgs/msg/detail/point_cloud2__struct.h"

/// Struct defined in srv/ROTATEHOME in the package my_custom_interface.
typedef struct my_custom_interface__srv__ROTATEHOME_Response
{
  sensor_msgs__msg__PointCloud2 b;
} my_custom_interface__srv__ROTATEHOME_Response;

// Struct for a sequence of my_custom_interface__srv__ROTATEHOME_Response.
typedef struct my_custom_interface__srv__ROTATEHOME_Response__Sequence
{
  my_custom_interface__srv__ROTATEHOME_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_custom_interface__srv__ROTATEHOME_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_CUSTOM_INTERFACE__SRV__DETAIL__ROTATEHOME__STRUCT_H_
