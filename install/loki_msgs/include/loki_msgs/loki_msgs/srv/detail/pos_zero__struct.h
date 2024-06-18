// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from loki_msgs:srv/PosZero.idl
// generated code does not contain a copyright notice

#ifndef LOKI_MSGS__SRV__DETAIL__POS_ZERO__STRUCT_H_
#define LOKI_MSGS__SRV__DETAIL__POS_ZERO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/PosZero in the package loki_msgs.
typedef struct loki_msgs__srv__PosZero_Request
{
  int32_t can_id;
} loki_msgs__srv__PosZero_Request;

// Struct for a sequence of loki_msgs__srv__PosZero_Request.
typedef struct loki_msgs__srv__PosZero_Request__Sequence
{
  loki_msgs__srv__PosZero_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} loki_msgs__srv__PosZero_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/PosZero in the package loki_msgs.
typedef struct loki_msgs__srv__PosZero_Response
{
  uint8_t structure_needs_at_least_one_member;
} loki_msgs__srv__PosZero_Response;

// Struct for a sequence of loki_msgs__srv__PosZero_Response.
typedef struct loki_msgs__srv__PosZero_Response__Sequence
{
  loki_msgs__srv__PosZero_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} loki_msgs__srv__PosZero_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LOKI_MSGS__SRV__DETAIL__POS_ZERO__STRUCT_H_
