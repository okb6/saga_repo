// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from loki_msgs:srv/InitPltf.idl
// generated code does not contain a copyright notice

#ifndef LOKI_MSGS__SRV__DETAIL__INIT_PLTF__STRUCT_H_
#define LOKI_MSGS__SRV__DETAIL__INIT_PLTF__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'can_interface_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/InitPltf in the package loki_msgs.
typedef struct loki_msgs__srv__InitPltf_Request
{
  int32_t can_interface_type;
  rosidl_runtime_c__String can_interface_name;
} loki_msgs__srv__InitPltf_Request;

// Struct for a sequence of loki_msgs__srv__InitPltf_Request.
typedef struct loki_msgs__srv__InitPltf_Request__Sequence
{
  loki_msgs__srv__InitPltf_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} loki_msgs__srv__InitPltf_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/InitPltf in the package loki_msgs.
typedef struct loki_msgs__srv__InitPltf_Response
{
  bool initpltf;
} loki_msgs__srv__InitPltf_Response;

// Struct for a sequence of loki_msgs__srv__InitPltf_Response.
typedef struct loki_msgs__srv__InitPltf_Response__Sequence
{
  loki_msgs__srv__InitPltf_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} loki_msgs__srv__InitPltf_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LOKI_MSGS__SRV__DETAIL__INIT_PLTF__STRUCT_H_
