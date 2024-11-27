// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from my_custom_interface:srv/ORDERR.idl
// generated code does not contain a copyright notice

#ifndef MY_CUSTOM_INTERFACE__SRV__DETAIL__ORDERR__FUNCTIONS_H_
#define MY_CUSTOM_INTERFACE__SRV__DETAIL__ORDERR__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "my_custom_interface/msg/rosidl_generator_c__visibility_control.h"

#include "my_custom_interface/srv/detail/orderr__struct.h"

/// Initialize srv/ORDERR message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * my_custom_interface__srv__ORDERR_Request
 * )) before or use
 * my_custom_interface__srv__ORDERR_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_my_custom_interface
bool
my_custom_interface__srv__ORDERR_Request__init(my_custom_interface__srv__ORDERR_Request * msg);

/// Finalize srv/ORDERR message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_custom_interface
void
my_custom_interface__srv__ORDERR_Request__fini(my_custom_interface__srv__ORDERR_Request * msg);

/// Create srv/ORDERR message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * my_custom_interface__srv__ORDERR_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_my_custom_interface
my_custom_interface__srv__ORDERR_Request *
my_custom_interface__srv__ORDERR_Request__create();

/// Destroy srv/ORDERR message.
/**
 * It calls
 * my_custom_interface__srv__ORDERR_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_custom_interface
void
my_custom_interface__srv__ORDERR_Request__destroy(my_custom_interface__srv__ORDERR_Request * msg);

/// Check for srv/ORDERR message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_custom_interface
bool
my_custom_interface__srv__ORDERR_Request__are_equal(const my_custom_interface__srv__ORDERR_Request * lhs, const my_custom_interface__srv__ORDERR_Request * rhs);

/// Copy a srv/ORDERR message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_custom_interface
bool
my_custom_interface__srv__ORDERR_Request__copy(
  const my_custom_interface__srv__ORDERR_Request * input,
  my_custom_interface__srv__ORDERR_Request * output);

/// Initialize array of srv/ORDERR messages.
/**
 * It allocates the memory for the number of elements and calls
 * my_custom_interface__srv__ORDERR_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_custom_interface
bool
my_custom_interface__srv__ORDERR_Request__Sequence__init(my_custom_interface__srv__ORDERR_Request__Sequence * array, size_t size);

/// Finalize array of srv/ORDERR messages.
/**
 * It calls
 * my_custom_interface__srv__ORDERR_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_custom_interface
void
my_custom_interface__srv__ORDERR_Request__Sequence__fini(my_custom_interface__srv__ORDERR_Request__Sequence * array);

/// Create array of srv/ORDERR messages.
/**
 * It allocates the memory for the array and calls
 * my_custom_interface__srv__ORDERR_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_my_custom_interface
my_custom_interface__srv__ORDERR_Request__Sequence *
my_custom_interface__srv__ORDERR_Request__Sequence__create(size_t size);

/// Destroy array of srv/ORDERR messages.
/**
 * It calls
 * my_custom_interface__srv__ORDERR_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_custom_interface
void
my_custom_interface__srv__ORDERR_Request__Sequence__destroy(my_custom_interface__srv__ORDERR_Request__Sequence * array);

/// Check for srv/ORDERR message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_custom_interface
bool
my_custom_interface__srv__ORDERR_Request__Sequence__are_equal(const my_custom_interface__srv__ORDERR_Request__Sequence * lhs, const my_custom_interface__srv__ORDERR_Request__Sequence * rhs);

/// Copy an array of srv/ORDERR messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_custom_interface
bool
my_custom_interface__srv__ORDERR_Request__Sequence__copy(
  const my_custom_interface__srv__ORDERR_Request__Sequence * input,
  my_custom_interface__srv__ORDERR_Request__Sequence * output);

/// Initialize srv/ORDERR message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * my_custom_interface__srv__ORDERR_Response
 * )) before or use
 * my_custom_interface__srv__ORDERR_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_my_custom_interface
bool
my_custom_interface__srv__ORDERR_Response__init(my_custom_interface__srv__ORDERR_Response * msg);

/// Finalize srv/ORDERR message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_custom_interface
void
my_custom_interface__srv__ORDERR_Response__fini(my_custom_interface__srv__ORDERR_Response * msg);

/// Create srv/ORDERR message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * my_custom_interface__srv__ORDERR_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_my_custom_interface
my_custom_interface__srv__ORDERR_Response *
my_custom_interface__srv__ORDERR_Response__create();

/// Destroy srv/ORDERR message.
/**
 * It calls
 * my_custom_interface__srv__ORDERR_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_custom_interface
void
my_custom_interface__srv__ORDERR_Response__destroy(my_custom_interface__srv__ORDERR_Response * msg);

/// Check for srv/ORDERR message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_custom_interface
bool
my_custom_interface__srv__ORDERR_Response__are_equal(const my_custom_interface__srv__ORDERR_Response * lhs, const my_custom_interface__srv__ORDERR_Response * rhs);

/// Copy a srv/ORDERR message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_custom_interface
bool
my_custom_interface__srv__ORDERR_Response__copy(
  const my_custom_interface__srv__ORDERR_Response * input,
  my_custom_interface__srv__ORDERR_Response * output);

/// Initialize array of srv/ORDERR messages.
/**
 * It allocates the memory for the number of elements and calls
 * my_custom_interface__srv__ORDERR_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_custom_interface
bool
my_custom_interface__srv__ORDERR_Response__Sequence__init(my_custom_interface__srv__ORDERR_Response__Sequence * array, size_t size);

/// Finalize array of srv/ORDERR messages.
/**
 * It calls
 * my_custom_interface__srv__ORDERR_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_custom_interface
void
my_custom_interface__srv__ORDERR_Response__Sequence__fini(my_custom_interface__srv__ORDERR_Response__Sequence * array);

/// Create array of srv/ORDERR messages.
/**
 * It allocates the memory for the array and calls
 * my_custom_interface__srv__ORDERR_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_my_custom_interface
my_custom_interface__srv__ORDERR_Response__Sequence *
my_custom_interface__srv__ORDERR_Response__Sequence__create(size_t size);

/// Destroy array of srv/ORDERR messages.
/**
 * It calls
 * my_custom_interface__srv__ORDERR_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_custom_interface
void
my_custom_interface__srv__ORDERR_Response__Sequence__destroy(my_custom_interface__srv__ORDERR_Response__Sequence * array);

/// Check for srv/ORDERR message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_custom_interface
bool
my_custom_interface__srv__ORDERR_Response__Sequence__are_equal(const my_custom_interface__srv__ORDERR_Response__Sequence * lhs, const my_custom_interface__srv__ORDERR_Response__Sequence * rhs);

/// Copy an array of srv/ORDERR messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_custom_interface
bool
my_custom_interface__srv__ORDERR_Response__Sequence__copy(
  const my_custom_interface__srv__ORDERR_Response__Sequence * input,
  my_custom_interface__srv__ORDERR_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // MY_CUSTOM_INTERFACE__SRV__DETAIL__ORDERR__FUNCTIONS_H_