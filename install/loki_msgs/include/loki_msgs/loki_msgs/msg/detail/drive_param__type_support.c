// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from loki_msgs:msg/DriveParam.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "loki_msgs/msg/detail/drive_param__rosidl_typesupport_introspection_c.h"
#include "loki_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "loki_msgs/msg/detail/drive_param__functions.h"
#include "loki_msgs/msg/detail/drive_param__struct.h"


// Include directives for member types
// Member `type`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void loki_msgs__msg__DriveParam__rosidl_typesupport_introspection_c__DriveParam_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  loki_msgs__msg__DriveParam__init(message_memory);
}

void loki_msgs__msg__DriveParam__rosidl_typesupport_introspection_c__DriveParam_fini_function(void * message_memory)
{
  loki_msgs__msg__DriveParam__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember loki_msgs__msg__DriveParam__rosidl_typesupport_introspection_c__DriveParam_message_member_array[3] = {
  {
    "index",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(loki_msgs__msg__DriveParam, index),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(loki_msgs__msg__DriveParam, type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(loki_msgs__msg__DriveParam, value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers loki_msgs__msg__DriveParam__rosidl_typesupport_introspection_c__DriveParam_message_members = {
  "loki_msgs__msg",  // message namespace
  "DriveParam",  // message name
  3,  // number of fields
  sizeof(loki_msgs__msg__DriveParam),
  loki_msgs__msg__DriveParam__rosidl_typesupport_introspection_c__DriveParam_message_member_array,  // message members
  loki_msgs__msg__DriveParam__rosidl_typesupport_introspection_c__DriveParam_init_function,  // function to initialize message memory (memory has to be allocated)
  loki_msgs__msg__DriveParam__rosidl_typesupport_introspection_c__DriveParam_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t loki_msgs__msg__DriveParam__rosidl_typesupport_introspection_c__DriveParam_message_type_support_handle = {
  0,
  &loki_msgs__msg__DriveParam__rosidl_typesupport_introspection_c__DriveParam_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_loki_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, loki_msgs, msg, DriveParam)() {
  if (!loki_msgs__msg__DriveParam__rosidl_typesupport_introspection_c__DriveParam_message_type_support_handle.typesupport_identifier) {
    loki_msgs__msg__DriveParam__rosidl_typesupport_introspection_c__DriveParam_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &loki_msgs__msg__DriveParam__rosidl_typesupport_introspection_c__DriveParam_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
