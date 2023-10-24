// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from loki_msgs:msg/BaseState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "loki_msgs/msg/detail/base_state__rosidl_typesupport_introspection_c.h"
#include "loki_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "loki_msgs/msg/detail/base_state__functions.h"
#include "loki_msgs/msg/detail/base_state__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `prop_speed`
// Member `prop_pos`
// Member `steer_speed`
// Member `steer_pos`
// Member `steer_max_speed`
// Member `channel`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void loki_msgs__msg__BaseState__rosidl_typesupport_introspection_c__BaseState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  loki_msgs__msg__BaseState__init(message_memory);
}

void loki_msgs__msg__BaseState__rosidl_typesupport_introspection_c__BaseState_fini_function(void * message_memory)
{
  loki_msgs__msg__BaseState__fini(message_memory);
}

size_t loki_msgs__msg__BaseState__rosidl_typesupport_introspection_c__size_function__BaseState__prop_speed(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * loki_msgs__msg__BaseState__rosidl_typesupport_introspection_c__get_const_function__BaseState__prop_speed(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * loki_msgs__msg__BaseState__rosidl_typesupport_introspection_c__get_function__BaseState__prop_speed(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void loki_msgs__msg__BaseState__rosidl_typesupport_introspection_c__fetch_function__BaseState__prop_speed(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    loki_msgs__msg__BaseState__rosidl_typesupport_introspection_c__get_const_function__BaseState__prop_speed(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void loki_msgs__msg__BaseState__rosidl_typesupport_introspection_c__assign_function__BaseState__prop_speed(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    loki_msgs__msg__BaseState__rosidl_typesupport_introspection_c__get_function__BaseState__prop_speed(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool loki_msgs__msg__BaseState__rosidl_typesupport_introspection_c__resize_function__BaseState__prop_speed(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t loki_msgs__msg__BaseState__rosidl_typesupport_introspection_c__size_function__BaseState__prop_pos(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * loki_msgs__msg__BaseState__rosidl_typesupport_introspection_c__get_const_function__BaseState__prop_pos(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * loki_msgs__msg__BaseState__rosidl_typesupport_introspection_c__get_function__BaseState__prop_pos(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void loki_msgs__msg__BaseState__rosidl_typesupport_introspection_c__fetch_function__BaseState__prop_pos(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    loki_msgs__msg__BaseState__rosidl_typesupport_introspection_c__get_const_function__BaseState__prop_pos(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void loki_msgs__msg__BaseState__rosidl_typesupport_introspection_c__assign_function__BaseState__prop_pos(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    loki_msgs__msg__BaseState__rosidl_typesupport_introspection_c__get_function__BaseState__prop_pos(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool loki_msgs__msg__BaseState__rosidl_typesupport_introspection_c__resize_function__BaseState__prop_pos(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t loki_msgs__msg__BaseState__rosidl_typesupport_introspection_c__size_function__BaseState__steer_speed(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * loki_msgs__msg__BaseState__rosidl_typesupport_introspection_c__get_const_function__BaseState__steer_speed(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * loki_msgs__msg__BaseState__rosidl_typesupport_introspection_c__get_function__BaseState__steer_speed(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void loki_msgs__msg__BaseState__rosidl_typesupport_introspection_c__fetch_function__BaseState__steer_speed(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    loki_msgs__msg__BaseState__rosidl_typesupport_introspection_c__get_const_function__BaseState__steer_speed(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void loki_msgs__msg__BaseState__rosidl_typesupport_introspection_c__assign_function__BaseState__steer_speed(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    loki_msgs__msg__BaseState__rosidl_typesupport_introspection_c__get_function__BaseState__steer_speed(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool loki_msgs__msg__BaseState__rosidl_typesupport_introspection_c__resize_function__BaseState__steer_speed(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t loki_msgs__msg__BaseState__rosidl_typesupport_introspection_c__size_function__BaseState__steer_pos(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * loki_msgs__msg__BaseState__rosidl_typesupport_introspection_c__get_const_function__BaseState__steer_pos(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * loki_msgs__msg__BaseState__rosidl_typesupport_introspection_c__get_function__BaseState__steer_pos(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void loki_msgs__msg__BaseState__rosidl_typesupport_introspection_c__fetch_function__BaseState__steer_pos(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    loki_msgs__msg__BaseState__rosidl_typesupport_introspection_c__get_const_function__BaseState__steer_pos(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void loki_msgs__msg__BaseState__rosidl_typesupport_introspection_c__assign_function__BaseState__steer_pos(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    loki_msgs__msg__BaseState__rosidl_typesupport_introspection_c__get_function__BaseState__steer_pos(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool loki_msgs__msg__BaseState__rosidl_typesupport_introspection_c__resize_function__BaseState__steer_pos(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t loki_msgs__msg__BaseState__rosidl_typesupport_introspection_c__size_function__BaseState__steer_max_speed(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * loki_msgs__msg__BaseState__rosidl_typesupport_introspection_c__get_const_function__BaseState__steer_max_speed(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * loki_msgs__msg__BaseState__rosidl_typesupport_introspection_c__get_function__BaseState__steer_max_speed(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void loki_msgs__msg__BaseState__rosidl_typesupport_introspection_c__fetch_function__BaseState__steer_max_speed(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    loki_msgs__msg__BaseState__rosidl_typesupport_introspection_c__get_const_function__BaseState__steer_max_speed(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void loki_msgs__msg__BaseState__rosidl_typesupport_introspection_c__assign_function__BaseState__steer_max_speed(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    loki_msgs__msg__BaseState__rosidl_typesupport_introspection_c__get_function__BaseState__steer_max_speed(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool loki_msgs__msg__BaseState__rosidl_typesupport_introspection_c__resize_function__BaseState__steer_max_speed(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t loki_msgs__msg__BaseState__rosidl_typesupport_introspection_c__size_function__BaseState__channel(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * loki_msgs__msg__BaseState__rosidl_typesupport_introspection_c__get_const_function__BaseState__channel(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * loki_msgs__msg__BaseState__rosidl_typesupport_introspection_c__get_function__BaseState__channel(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void loki_msgs__msg__BaseState__rosidl_typesupport_introspection_c__fetch_function__BaseState__channel(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    loki_msgs__msg__BaseState__rosidl_typesupport_introspection_c__get_const_function__BaseState__channel(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void loki_msgs__msg__BaseState__rosidl_typesupport_introspection_c__assign_function__BaseState__channel(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    loki_msgs__msg__BaseState__rosidl_typesupport_introspection_c__get_function__BaseState__channel(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool loki_msgs__msg__BaseState__rosidl_typesupport_introspection_c__resize_function__BaseState__channel(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember loki_msgs__msg__BaseState__rosidl_typesupport_introspection_c__BaseState_message_member_array[8] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(loki_msgs__msg__BaseState, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "drive_mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(loki_msgs__msg__BaseState, drive_mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "prop_speed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(loki_msgs__msg__BaseState, prop_speed),  // bytes offset in struct
    NULL,  // default value
    loki_msgs__msg__BaseState__rosidl_typesupport_introspection_c__size_function__BaseState__prop_speed,  // size() function pointer
    loki_msgs__msg__BaseState__rosidl_typesupport_introspection_c__get_const_function__BaseState__prop_speed,  // get_const(index) function pointer
    loki_msgs__msg__BaseState__rosidl_typesupport_introspection_c__get_function__BaseState__prop_speed,  // get(index) function pointer
    loki_msgs__msg__BaseState__rosidl_typesupport_introspection_c__fetch_function__BaseState__prop_speed,  // fetch(index, &value) function pointer
    loki_msgs__msg__BaseState__rosidl_typesupport_introspection_c__assign_function__BaseState__prop_speed,  // assign(index, value) function pointer
    loki_msgs__msg__BaseState__rosidl_typesupport_introspection_c__resize_function__BaseState__prop_speed  // resize(index) function pointer
  },
  {
    "prop_pos",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(loki_msgs__msg__BaseState, prop_pos),  // bytes offset in struct
    NULL,  // default value
    loki_msgs__msg__BaseState__rosidl_typesupport_introspection_c__size_function__BaseState__prop_pos,  // size() function pointer
    loki_msgs__msg__BaseState__rosidl_typesupport_introspection_c__get_const_function__BaseState__prop_pos,  // get_const(index) function pointer
    loki_msgs__msg__BaseState__rosidl_typesupport_introspection_c__get_function__BaseState__prop_pos,  // get(index) function pointer
    loki_msgs__msg__BaseState__rosidl_typesupport_introspection_c__fetch_function__BaseState__prop_pos,  // fetch(index, &value) function pointer
    loki_msgs__msg__BaseState__rosidl_typesupport_introspection_c__assign_function__BaseState__prop_pos,  // assign(index, value) function pointer
    loki_msgs__msg__BaseState__rosidl_typesupport_introspection_c__resize_function__BaseState__prop_pos  // resize(index) function pointer
  },
  {
    "steer_speed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(loki_msgs__msg__BaseState, steer_speed),  // bytes offset in struct
    NULL,  // default value
    loki_msgs__msg__BaseState__rosidl_typesupport_introspection_c__size_function__BaseState__steer_speed,  // size() function pointer
    loki_msgs__msg__BaseState__rosidl_typesupport_introspection_c__get_const_function__BaseState__steer_speed,  // get_const(index) function pointer
    loki_msgs__msg__BaseState__rosidl_typesupport_introspection_c__get_function__BaseState__steer_speed,  // get(index) function pointer
    loki_msgs__msg__BaseState__rosidl_typesupport_introspection_c__fetch_function__BaseState__steer_speed,  // fetch(index, &value) function pointer
    loki_msgs__msg__BaseState__rosidl_typesupport_introspection_c__assign_function__BaseState__steer_speed,  // assign(index, value) function pointer
    loki_msgs__msg__BaseState__rosidl_typesupport_introspection_c__resize_function__BaseState__steer_speed  // resize(index) function pointer
  },
  {
    "steer_pos",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(loki_msgs__msg__BaseState, steer_pos),  // bytes offset in struct
    NULL,  // default value
    loki_msgs__msg__BaseState__rosidl_typesupport_introspection_c__size_function__BaseState__steer_pos,  // size() function pointer
    loki_msgs__msg__BaseState__rosidl_typesupport_introspection_c__get_const_function__BaseState__steer_pos,  // get_const(index) function pointer
    loki_msgs__msg__BaseState__rosidl_typesupport_introspection_c__get_function__BaseState__steer_pos,  // get(index) function pointer
    loki_msgs__msg__BaseState__rosidl_typesupport_introspection_c__fetch_function__BaseState__steer_pos,  // fetch(index, &value) function pointer
    loki_msgs__msg__BaseState__rosidl_typesupport_introspection_c__assign_function__BaseState__steer_pos,  // assign(index, value) function pointer
    loki_msgs__msg__BaseState__rosidl_typesupport_introspection_c__resize_function__BaseState__steer_pos  // resize(index) function pointer
  },
  {
    "steer_max_speed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(loki_msgs__msg__BaseState, steer_max_speed),  // bytes offset in struct
    NULL,  // default value
    loki_msgs__msg__BaseState__rosidl_typesupport_introspection_c__size_function__BaseState__steer_max_speed,  // size() function pointer
    loki_msgs__msg__BaseState__rosidl_typesupport_introspection_c__get_const_function__BaseState__steer_max_speed,  // get_const(index) function pointer
    loki_msgs__msg__BaseState__rosidl_typesupport_introspection_c__get_function__BaseState__steer_max_speed,  // get(index) function pointer
    loki_msgs__msg__BaseState__rosidl_typesupport_introspection_c__fetch_function__BaseState__steer_max_speed,  // fetch(index, &value) function pointer
    loki_msgs__msg__BaseState__rosidl_typesupport_introspection_c__assign_function__BaseState__steer_max_speed,  // assign(index, value) function pointer
    loki_msgs__msg__BaseState__rosidl_typesupport_introspection_c__resize_function__BaseState__steer_max_speed  // resize(index) function pointer
  },
  {
    "channel",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(loki_msgs__msg__BaseState, channel),  // bytes offset in struct
    NULL,  // default value
    loki_msgs__msg__BaseState__rosidl_typesupport_introspection_c__size_function__BaseState__channel,  // size() function pointer
    loki_msgs__msg__BaseState__rosidl_typesupport_introspection_c__get_const_function__BaseState__channel,  // get_const(index) function pointer
    loki_msgs__msg__BaseState__rosidl_typesupport_introspection_c__get_function__BaseState__channel,  // get(index) function pointer
    loki_msgs__msg__BaseState__rosidl_typesupport_introspection_c__fetch_function__BaseState__channel,  // fetch(index, &value) function pointer
    loki_msgs__msg__BaseState__rosidl_typesupport_introspection_c__assign_function__BaseState__channel,  // assign(index, value) function pointer
    loki_msgs__msg__BaseState__rosidl_typesupport_introspection_c__resize_function__BaseState__channel  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers loki_msgs__msg__BaseState__rosidl_typesupport_introspection_c__BaseState_message_members = {
  "loki_msgs__msg",  // message namespace
  "BaseState",  // message name
  8,  // number of fields
  sizeof(loki_msgs__msg__BaseState),
  loki_msgs__msg__BaseState__rosidl_typesupport_introspection_c__BaseState_message_member_array,  // message members
  loki_msgs__msg__BaseState__rosidl_typesupport_introspection_c__BaseState_init_function,  // function to initialize message memory (memory has to be allocated)
  loki_msgs__msg__BaseState__rosidl_typesupport_introspection_c__BaseState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t loki_msgs__msg__BaseState__rosidl_typesupport_introspection_c__BaseState_message_type_support_handle = {
  0,
  &loki_msgs__msg__BaseState__rosidl_typesupport_introspection_c__BaseState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_loki_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, loki_msgs, msg, BaseState)() {
  loki_msgs__msg__BaseState__rosidl_typesupport_introspection_c__BaseState_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!loki_msgs__msg__BaseState__rosidl_typesupport_introspection_c__BaseState_message_type_support_handle.typesupport_identifier) {
    loki_msgs__msg__BaseState__rosidl_typesupport_introspection_c__BaseState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &loki_msgs__msg__BaseState__rosidl_typesupport_introspection_c__BaseState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
