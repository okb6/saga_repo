// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from loki_msgs:srv/EvalCanBuffer.idl
// generated code does not contain a copyright notice

#ifndef LOKI_MSGS__SRV__DETAIL__EVAL_CAN_BUFFER__STRUCT_H_
#define LOKI_MSGS__SRV__DETAIL__EVAL_CAN_BUFFER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'can_msgs_base'
// Member 'can_msgs_device'
#include "loki_msgs/msg/detail/can_frame__struct.h"

/// Struct defined in srv/EvalCanBuffer in the package loki_msgs.
typedef struct loki_msgs__srv__EvalCanBuffer_Request
{
  loki_msgs__msg__CANFrame__Sequence can_msgs_base;
  loki_msgs__msg__CANFrame__Sequence can_msgs_device;
} loki_msgs__srv__EvalCanBuffer_Request;

// Struct for a sequence of loki_msgs__srv__EvalCanBuffer_Request.
typedef struct loki_msgs__srv__EvalCanBuffer_Request__Sequence
{
  loki_msgs__srv__EvalCanBuffer_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} loki_msgs__srv__EvalCanBuffer_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'can_msgs_base'
// Member 'can_msgs_device'
// already included above
// #include "loki_msgs/msg/detail/can_frame__struct.h"

/// Struct defined in srv/EvalCanBuffer in the package loki_msgs.
typedef struct loki_msgs__srv__EvalCanBuffer_Response
{
  loki_msgs__msg__CANFrame__Sequence can_msgs_base;
  loki_msgs__msg__CANFrame__Sequence can_msgs_device;
} loki_msgs__srv__EvalCanBuffer_Response;

// Struct for a sequence of loki_msgs__srv__EvalCanBuffer_Response.
typedef struct loki_msgs__srv__EvalCanBuffer_Response__Sequence
{
  loki_msgs__srv__EvalCanBuffer_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} loki_msgs__srv__EvalCanBuffer_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LOKI_MSGS__SRV__DETAIL__EVAL_CAN_BUFFER__STRUCT_H_
