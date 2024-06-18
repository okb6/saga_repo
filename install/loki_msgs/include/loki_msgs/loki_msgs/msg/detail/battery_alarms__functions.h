// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from loki_msgs:msg/BatteryAlarms.idl
// generated code does not contain a copyright notice

#ifndef LOKI_MSGS__MSG__DETAIL__BATTERY_ALARMS__FUNCTIONS_H_
#define LOKI_MSGS__MSG__DETAIL__BATTERY_ALARMS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "loki_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "loki_msgs/msg/detail/battery_alarms__struct.h"

/// Initialize msg/BatteryAlarms message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * loki_msgs__msg__BatteryAlarms
 * )) before or use
 * loki_msgs__msg__BatteryAlarms__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_loki_msgs
bool
loki_msgs__msg__BatteryAlarms__init(loki_msgs__msg__BatteryAlarms * msg);

/// Finalize msg/BatteryAlarms message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_loki_msgs
void
loki_msgs__msg__BatteryAlarms__fini(loki_msgs__msg__BatteryAlarms * msg);

/// Create msg/BatteryAlarms message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * loki_msgs__msg__BatteryAlarms__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_loki_msgs
loki_msgs__msg__BatteryAlarms *
loki_msgs__msg__BatteryAlarms__create();

/// Destroy msg/BatteryAlarms message.
/**
 * It calls
 * loki_msgs__msg__BatteryAlarms__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_loki_msgs
void
loki_msgs__msg__BatteryAlarms__destroy(loki_msgs__msg__BatteryAlarms * msg);

/// Check for msg/BatteryAlarms message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_loki_msgs
bool
loki_msgs__msg__BatteryAlarms__are_equal(const loki_msgs__msg__BatteryAlarms * lhs, const loki_msgs__msg__BatteryAlarms * rhs);

/// Copy a msg/BatteryAlarms message.
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
loki_msgs__msg__BatteryAlarms__copy(
  const loki_msgs__msg__BatteryAlarms * input,
  loki_msgs__msg__BatteryAlarms * output);

/// Initialize array of msg/BatteryAlarms messages.
/**
 * It allocates the memory for the number of elements and calls
 * loki_msgs__msg__BatteryAlarms__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_loki_msgs
bool
loki_msgs__msg__BatteryAlarms__Sequence__init(loki_msgs__msg__BatteryAlarms__Sequence * array, size_t size);

/// Finalize array of msg/BatteryAlarms messages.
/**
 * It calls
 * loki_msgs__msg__BatteryAlarms__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_loki_msgs
void
loki_msgs__msg__BatteryAlarms__Sequence__fini(loki_msgs__msg__BatteryAlarms__Sequence * array);

/// Create array of msg/BatteryAlarms messages.
/**
 * It allocates the memory for the array and calls
 * loki_msgs__msg__BatteryAlarms__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_loki_msgs
loki_msgs__msg__BatteryAlarms__Sequence *
loki_msgs__msg__BatteryAlarms__Sequence__create(size_t size);

/// Destroy array of msg/BatteryAlarms messages.
/**
 * It calls
 * loki_msgs__msg__BatteryAlarms__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_loki_msgs
void
loki_msgs__msg__BatteryAlarms__Sequence__destroy(loki_msgs__msg__BatteryAlarms__Sequence * array);

/// Check for msg/BatteryAlarms message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_loki_msgs
bool
loki_msgs__msg__BatteryAlarms__Sequence__are_equal(const loki_msgs__msg__BatteryAlarms__Sequence * lhs, const loki_msgs__msg__BatteryAlarms__Sequence * rhs);

/// Copy an array of msg/BatteryAlarms messages.
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
loki_msgs__msg__BatteryAlarms__Sequence__copy(
  const loki_msgs__msg__BatteryAlarms__Sequence * input,
  loki_msgs__msg__BatteryAlarms__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // LOKI_MSGS__MSG__DETAIL__BATTERY_ALARMS__FUNCTIONS_H_
