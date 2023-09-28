// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from loki_msgs:srv/SwitchBool.idl
// generated code does not contain a copyright notice

#ifndef LOKI_MSGS__SRV__DETAIL__SWITCH_BOOL__STRUCT_H_
#define LOKI_MSGS__SRV__DETAIL__SWITCH_BOOL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SwitchBool in the package loki_msgs.
typedef struct loki_msgs__srv__SwitchBool_Request
{
  bool on;
} loki_msgs__srv__SwitchBool_Request;

// Struct for a sequence of loki_msgs__srv__SwitchBool_Request.
typedef struct loki_msgs__srv__SwitchBool_Request__Sequence
{
  loki_msgs__srv__SwitchBool_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} loki_msgs__srv__SwitchBool_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SwitchBool in the package loki_msgs.
typedef struct loki_msgs__srv__SwitchBool_Response
{
  rosidl_runtime_c__String message;
  int32_t status;
} loki_msgs__srv__SwitchBool_Response;

// Struct for a sequence of loki_msgs__srv__SwitchBool_Response.
typedef struct loki_msgs__srv__SwitchBool_Response__Sequence
{
  loki_msgs__srv__SwitchBool_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} loki_msgs__srv__SwitchBool_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LOKI_MSGS__SRV__DETAIL__SWITCH_BOOL__STRUCT_H_
