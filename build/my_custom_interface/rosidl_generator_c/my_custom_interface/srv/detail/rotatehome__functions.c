// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from my_custom_interface:srv/ROTATEHOME.idl
// generated code does not contain a copyright notice
#include "my_custom_interface/srv/detail/rotatehome__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `a`
#include "std_msgs/msg/detail/float32__functions.h"

bool
my_custom_interface__srv__ROTATEHOME_Request__init(my_custom_interface__srv__ROTATEHOME_Request * msg)
{
  if (!msg) {
    return false;
  }
  // a
  if (!std_msgs__msg__Float32__init(&msg->a)) {
    my_custom_interface__srv__ROTATEHOME_Request__fini(msg);
    return false;
  }
  return true;
}

void
my_custom_interface__srv__ROTATEHOME_Request__fini(my_custom_interface__srv__ROTATEHOME_Request * msg)
{
  if (!msg) {
    return;
  }
  // a
  std_msgs__msg__Float32__fini(&msg->a);
}

bool
my_custom_interface__srv__ROTATEHOME_Request__are_equal(const my_custom_interface__srv__ROTATEHOME_Request * lhs, const my_custom_interface__srv__ROTATEHOME_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // a
  if (!std_msgs__msg__Float32__are_equal(
      &(lhs->a), &(rhs->a)))
  {
    return false;
  }
  return true;
}

bool
my_custom_interface__srv__ROTATEHOME_Request__copy(
  const my_custom_interface__srv__ROTATEHOME_Request * input,
  my_custom_interface__srv__ROTATEHOME_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // a
  if (!std_msgs__msg__Float32__copy(
      &(input->a), &(output->a)))
  {
    return false;
  }
  return true;
}

my_custom_interface__srv__ROTATEHOME_Request *
my_custom_interface__srv__ROTATEHOME_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_custom_interface__srv__ROTATEHOME_Request * msg = (my_custom_interface__srv__ROTATEHOME_Request *)allocator.allocate(sizeof(my_custom_interface__srv__ROTATEHOME_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(my_custom_interface__srv__ROTATEHOME_Request));
  bool success = my_custom_interface__srv__ROTATEHOME_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
my_custom_interface__srv__ROTATEHOME_Request__destroy(my_custom_interface__srv__ROTATEHOME_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    my_custom_interface__srv__ROTATEHOME_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
my_custom_interface__srv__ROTATEHOME_Request__Sequence__init(my_custom_interface__srv__ROTATEHOME_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_custom_interface__srv__ROTATEHOME_Request * data = NULL;

  if (size) {
    data = (my_custom_interface__srv__ROTATEHOME_Request *)allocator.zero_allocate(size, sizeof(my_custom_interface__srv__ROTATEHOME_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = my_custom_interface__srv__ROTATEHOME_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        my_custom_interface__srv__ROTATEHOME_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
my_custom_interface__srv__ROTATEHOME_Request__Sequence__fini(my_custom_interface__srv__ROTATEHOME_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      my_custom_interface__srv__ROTATEHOME_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

my_custom_interface__srv__ROTATEHOME_Request__Sequence *
my_custom_interface__srv__ROTATEHOME_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_custom_interface__srv__ROTATEHOME_Request__Sequence * array = (my_custom_interface__srv__ROTATEHOME_Request__Sequence *)allocator.allocate(sizeof(my_custom_interface__srv__ROTATEHOME_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = my_custom_interface__srv__ROTATEHOME_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
my_custom_interface__srv__ROTATEHOME_Request__Sequence__destroy(my_custom_interface__srv__ROTATEHOME_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    my_custom_interface__srv__ROTATEHOME_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
my_custom_interface__srv__ROTATEHOME_Request__Sequence__are_equal(const my_custom_interface__srv__ROTATEHOME_Request__Sequence * lhs, const my_custom_interface__srv__ROTATEHOME_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!my_custom_interface__srv__ROTATEHOME_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
my_custom_interface__srv__ROTATEHOME_Request__Sequence__copy(
  const my_custom_interface__srv__ROTATEHOME_Request__Sequence * input,
  my_custom_interface__srv__ROTATEHOME_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(my_custom_interface__srv__ROTATEHOME_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    my_custom_interface__srv__ROTATEHOME_Request * data =
      (my_custom_interface__srv__ROTATEHOME_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!my_custom_interface__srv__ROTATEHOME_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          my_custom_interface__srv__ROTATEHOME_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!my_custom_interface__srv__ROTATEHOME_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `b`
#include "sensor_msgs/msg/detail/point_cloud2__functions.h"

bool
my_custom_interface__srv__ROTATEHOME_Response__init(my_custom_interface__srv__ROTATEHOME_Response * msg)
{
  if (!msg) {
    return false;
  }
  // b
  if (!sensor_msgs__msg__PointCloud2__init(&msg->b)) {
    my_custom_interface__srv__ROTATEHOME_Response__fini(msg);
    return false;
  }
  return true;
}

void
my_custom_interface__srv__ROTATEHOME_Response__fini(my_custom_interface__srv__ROTATEHOME_Response * msg)
{
  if (!msg) {
    return;
  }
  // b
  sensor_msgs__msg__PointCloud2__fini(&msg->b);
}

bool
my_custom_interface__srv__ROTATEHOME_Response__are_equal(const my_custom_interface__srv__ROTATEHOME_Response * lhs, const my_custom_interface__srv__ROTATEHOME_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // b
  if (!sensor_msgs__msg__PointCloud2__are_equal(
      &(lhs->b), &(rhs->b)))
  {
    return false;
  }
  return true;
}

bool
my_custom_interface__srv__ROTATEHOME_Response__copy(
  const my_custom_interface__srv__ROTATEHOME_Response * input,
  my_custom_interface__srv__ROTATEHOME_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // b
  if (!sensor_msgs__msg__PointCloud2__copy(
      &(input->b), &(output->b)))
  {
    return false;
  }
  return true;
}

my_custom_interface__srv__ROTATEHOME_Response *
my_custom_interface__srv__ROTATEHOME_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_custom_interface__srv__ROTATEHOME_Response * msg = (my_custom_interface__srv__ROTATEHOME_Response *)allocator.allocate(sizeof(my_custom_interface__srv__ROTATEHOME_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(my_custom_interface__srv__ROTATEHOME_Response));
  bool success = my_custom_interface__srv__ROTATEHOME_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
my_custom_interface__srv__ROTATEHOME_Response__destroy(my_custom_interface__srv__ROTATEHOME_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    my_custom_interface__srv__ROTATEHOME_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
my_custom_interface__srv__ROTATEHOME_Response__Sequence__init(my_custom_interface__srv__ROTATEHOME_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_custom_interface__srv__ROTATEHOME_Response * data = NULL;

  if (size) {
    data = (my_custom_interface__srv__ROTATEHOME_Response *)allocator.zero_allocate(size, sizeof(my_custom_interface__srv__ROTATEHOME_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = my_custom_interface__srv__ROTATEHOME_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        my_custom_interface__srv__ROTATEHOME_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
my_custom_interface__srv__ROTATEHOME_Response__Sequence__fini(my_custom_interface__srv__ROTATEHOME_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      my_custom_interface__srv__ROTATEHOME_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

my_custom_interface__srv__ROTATEHOME_Response__Sequence *
my_custom_interface__srv__ROTATEHOME_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_custom_interface__srv__ROTATEHOME_Response__Sequence * array = (my_custom_interface__srv__ROTATEHOME_Response__Sequence *)allocator.allocate(sizeof(my_custom_interface__srv__ROTATEHOME_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = my_custom_interface__srv__ROTATEHOME_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
my_custom_interface__srv__ROTATEHOME_Response__Sequence__destroy(my_custom_interface__srv__ROTATEHOME_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    my_custom_interface__srv__ROTATEHOME_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
my_custom_interface__srv__ROTATEHOME_Response__Sequence__are_equal(const my_custom_interface__srv__ROTATEHOME_Response__Sequence * lhs, const my_custom_interface__srv__ROTATEHOME_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!my_custom_interface__srv__ROTATEHOME_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
my_custom_interface__srv__ROTATEHOME_Response__Sequence__copy(
  const my_custom_interface__srv__ROTATEHOME_Response__Sequence * input,
  my_custom_interface__srv__ROTATEHOME_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(my_custom_interface__srv__ROTATEHOME_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    my_custom_interface__srv__ROTATEHOME_Response * data =
      (my_custom_interface__srv__ROTATEHOME_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!my_custom_interface__srv__ROTATEHOME_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          my_custom_interface__srv__ROTATEHOME_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!my_custom_interface__srv__ROTATEHOME_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
