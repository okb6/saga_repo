// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from septentrio_gnss_driver:msg/MeasEpochChannelType2.idl
// generated code does not contain a copyright notice

#ifndef SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__MEAS_EPOCH_CHANNEL_TYPE2__FUNCTIONS_H_
#define SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__MEAS_EPOCH_CHANNEL_TYPE2__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "septentrio_gnss_driver/msg/rosidl_generator_c__visibility_control.h"

#include "septentrio_gnss_driver/msg/detail/meas_epoch_channel_type2__struct.h"

/// Initialize msg/MeasEpochChannelType2 message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * septentrio_gnss_driver__msg__MeasEpochChannelType2
 * )) before or use
 * septentrio_gnss_driver__msg__MeasEpochChannelType2__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_septentrio_gnss_driver
bool
septentrio_gnss_driver__msg__MeasEpochChannelType2__init(septentrio_gnss_driver__msg__MeasEpochChannelType2 * msg);

/// Finalize msg/MeasEpochChannelType2 message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_septentrio_gnss_driver
void
septentrio_gnss_driver__msg__MeasEpochChannelType2__fini(septentrio_gnss_driver__msg__MeasEpochChannelType2 * msg);

/// Create msg/MeasEpochChannelType2 message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * septentrio_gnss_driver__msg__MeasEpochChannelType2__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_septentrio_gnss_driver
septentrio_gnss_driver__msg__MeasEpochChannelType2 *
septentrio_gnss_driver__msg__MeasEpochChannelType2__create();

/// Destroy msg/MeasEpochChannelType2 message.
/**
 * It calls
 * septentrio_gnss_driver__msg__MeasEpochChannelType2__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_septentrio_gnss_driver
void
septentrio_gnss_driver__msg__MeasEpochChannelType2__destroy(septentrio_gnss_driver__msg__MeasEpochChannelType2 * msg);

/// Check for msg/MeasEpochChannelType2 message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_septentrio_gnss_driver
bool
septentrio_gnss_driver__msg__MeasEpochChannelType2__are_equal(const septentrio_gnss_driver__msg__MeasEpochChannelType2 * lhs, const septentrio_gnss_driver__msg__MeasEpochChannelType2 * rhs);

/// Copy a msg/MeasEpochChannelType2 message.
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
ROSIDL_GENERATOR_C_PUBLIC_septentrio_gnss_driver
bool
septentrio_gnss_driver__msg__MeasEpochChannelType2__copy(
  const septentrio_gnss_driver__msg__MeasEpochChannelType2 * input,
  septentrio_gnss_driver__msg__MeasEpochChannelType2 * output);

/// Initialize array of msg/MeasEpochChannelType2 messages.
/**
 * It allocates the memory for the number of elements and calls
 * septentrio_gnss_driver__msg__MeasEpochChannelType2__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_septentrio_gnss_driver
bool
septentrio_gnss_driver__msg__MeasEpochChannelType2__Sequence__init(septentrio_gnss_driver__msg__MeasEpochChannelType2__Sequence * array, size_t size);

/// Finalize array of msg/MeasEpochChannelType2 messages.
/**
 * It calls
 * septentrio_gnss_driver__msg__MeasEpochChannelType2__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_septentrio_gnss_driver
void
septentrio_gnss_driver__msg__MeasEpochChannelType2__Sequence__fini(septentrio_gnss_driver__msg__MeasEpochChannelType2__Sequence * array);

/// Create array of msg/MeasEpochChannelType2 messages.
/**
 * It allocates the memory for the array and calls
 * septentrio_gnss_driver__msg__MeasEpochChannelType2__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_septentrio_gnss_driver
septentrio_gnss_driver__msg__MeasEpochChannelType2__Sequence *
septentrio_gnss_driver__msg__MeasEpochChannelType2__Sequence__create(size_t size);

/// Destroy array of msg/MeasEpochChannelType2 messages.
/**
 * It calls
 * septentrio_gnss_driver__msg__MeasEpochChannelType2__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_septentrio_gnss_driver
void
septentrio_gnss_driver__msg__MeasEpochChannelType2__Sequence__destroy(septentrio_gnss_driver__msg__MeasEpochChannelType2__Sequence * array);

/// Check for msg/MeasEpochChannelType2 message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_septentrio_gnss_driver
bool
septentrio_gnss_driver__msg__MeasEpochChannelType2__Sequence__are_equal(const septentrio_gnss_driver__msg__MeasEpochChannelType2__Sequence * lhs, const septentrio_gnss_driver__msg__MeasEpochChannelType2__Sequence * rhs);

/// Copy an array of msg/MeasEpochChannelType2 messages.
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
ROSIDL_GENERATOR_C_PUBLIC_septentrio_gnss_driver
bool
septentrio_gnss_driver__msg__MeasEpochChannelType2__Sequence__copy(
  const septentrio_gnss_driver__msg__MeasEpochChannelType2__Sequence * input,
  septentrio_gnss_driver__msg__MeasEpochChannelType2__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__MEAS_EPOCH_CHANNEL_TYPE2__FUNCTIONS_H_
