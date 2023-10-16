// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from loki_msgs:srv/GetSetBool.idl
// generated code does not contain a copyright notice

#ifndef LOKI_MSGS__SRV__DETAIL__GET_SET_BOOL__STRUCT_H_
#define LOKI_MSGS__SRV__DETAIL__GET_SET_BOOL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GetSetBool in the package loki_msgs.
typedef struct loki_msgs__srv__GetSetBool_Request
{
  uint8_t structure_needs_at_least_one_member;
} loki_msgs__srv__GetSetBool_Request;

// Struct for a sequence of loki_msgs__srv__GetSetBool_Request.
typedef struct loki_msgs__srv__GetSetBool_Request__Sequence
{
  loki_msgs__srv__GetSetBool_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} loki_msgs__srv__GetSetBool_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'set_bool_strings'
#include "rosidl_runtime_c/string.h"
// Member 'set_bool_values'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/GetSetBool in the package loki_msgs.
typedef struct loki_msgs__srv__GetSetBool_Response
{
  rosidl_runtime_c__String__Sequence set_bool_strings;
  rosidl_runtime_c__int32__Sequence set_bool_values;
} loki_msgs__srv__GetSetBool_Response;

// Struct for a sequence of loki_msgs__srv__GetSetBool_Response.
typedef struct loki_msgs__srv__GetSetBool_Response__Sequence
{
  loki_msgs__srv__GetSetBool_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} loki_msgs__srv__GetSetBool_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LOKI_MSGS__SRV__DETAIL__GET_SET_BOOL__STRUCT_H_
