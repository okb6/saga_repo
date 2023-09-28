// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from loki_msgs:msg/IOArray.idl
// generated code does not contain a copyright notice

#ifndef LOKI_MSGS__MSG__DETAIL__IO_ARRAY__FUNCTIONS_H_
#define LOKI_MSGS__MSG__DETAIL__IO_ARRAY__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "loki_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "loki_msgs/msg/detail/io_array__struct.h"

/// Initialize msg/IOArray message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * loki_msgs__msg__IOArray
 * )) before or use
 * loki_msgs__msg__IOArray__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_loki_msgs
bool
loki_msgs__msg__IOArray__init(loki_msgs__msg__IOArray * msg);

/// Finalize msg/IOArray message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_loki_msgs
void
loki_msgs__msg__IOArray__fini(loki_msgs__msg__IOArray * msg);

/// Create msg/IOArray message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * loki_msgs__msg__IOArray__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_loki_msgs
loki_msgs__msg__IOArray *
loki_msgs__msg__IOArray__create();

/// Destroy msg/IOArray message.
/**
 * It calls
 * loki_msgs__msg__IOArray__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_loki_msgs
void
loki_msgs__msg__IOArray__destroy(loki_msgs__msg__IOArray * msg);

/// Check for msg/IOArray message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_loki_msgs
bool
loki_msgs__msg__IOArray__are_equal(const loki_msgs__msg__IOArray * lhs, const loki_msgs__msg__IOArray * rhs);

/// Copy a msg/IOArray message.
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
ROSIDL_GENERATOR_C_PUBLIC_loki_msgs
bool
loki_msgs__msg__IOArray__copy(
  const loki_msgs__msg__IOArray * input,
  loki_msgs__msg__IOArray * output);

/// Initialize array of msg/IOArray messages.
/**
 * It allocates the memory for the number of elements and calls
 * loki_msgs__msg__IOArray__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_loki_msgs
bool
loki_msgs__msg__IOArray__Sequence__init(loki_msgs__msg__IOArray__Sequence * array, size_t size);

/// Finalize array of msg/IOArray messages.
/**
 * It calls
 * loki_msgs__msg__IOArray__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_loki_msgs
void
loki_msgs__msg__IOArray__Sequence__fini(loki_msgs__msg__IOArray__Sequence * array);

/// Create array of msg/IOArray messages.
/**
 * It allocates the memory for the array and calls
 * loki_msgs__msg__IOArray__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_loki_msgs
loki_msgs__msg__IOArray__Sequence *
loki_msgs__msg__IOArray__Sequence__create(size_t size);

/// Destroy array of msg/IOArray messages.
/**
 * It calls
 * loki_msgs__msg__IOArray__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_loki_msgs
void
loki_msgs__msg__IOArray__Sequence__destroy(loki_msgs__msg__IOArray__Sequence * array);

/// Check for msg/IOArray message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_loki_msgs
bool
loki_msgs__msg__IOArray__Sequence__are_equal(const loki_msgs__msg__IOArray__Sequence * lhs, const loki_msgs__msg__IOArray__Sequence * rhs);

/// Copy an array of msg/IOArray messages.
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
ROSIDL_GENERATOR_C_PUBLIC_loki_msgs
bool
loki_msgs__msg__IOArray__Sequence__copy(
  const loki_msgs__msg__IOArray__Sequence * input,
  loki_msgs__msg__IOArray__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // LOKI_MSGS__MSG__DETAIL__IO_ARRAY__FUNCTIONS_H_
