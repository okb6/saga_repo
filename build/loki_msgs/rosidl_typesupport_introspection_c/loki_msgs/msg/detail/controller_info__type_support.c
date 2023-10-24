// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from loki_msgs:msg/ControllerInfo.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "loki_msgs/msg/detail/controller_info__rosidl_typesupport_introspection_c.h"
#include "loki_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "loki_msgs/msg/detail/controller_info__functions.h"
#include "loki_msgs/msg/detail/controller_info__struct.h"


// Include directives for member types
// Member `drive_directions`
// Member `home_counts`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void loki_msgs__msg__ControllerInfo__rosidl_typesupport_introspection_c__ControllerInfo_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  loki_msgs__msg__ControllerInfo__init(message_memory);
}

void loki_msgs__msg__ControllerInfo__rosidl_typesupport_introspection_c__ControllerInfo_fini_function(void * message_memory)
{
  loki_msgs__msg__ControllerInfo__fini(message_memory);
}

size_t loki_msgs__msg__ControllerInfo__rosidl_typesupport_introspection_c__size_function__ControllerInfo__drive_directions(
  const void * untyped_member)
{
  const rosidl_runtime_c__int16__Sequence * member =
    (const rosidl_runtime_c__int16__Sequence *)(untyped_member);
  return member->size;
}

const void * loki_msgs__msg__ControllerInfo__rosidl_typesupport_introspection_c__get_const_function__ControllerInfo__drive_directions(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int16__Sequence * member =
    (const rosidl_runtime_c__int16__Sequence *)(untyped_member);
  return &member->data[index];
}

void * loki_msgs__msg__ControllerInfo__rosidl_typesupport_introspection_c__get_function__ControllerInfo__drive_directions(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int16__Sequence * member =
    (rosidl_runtime_c__int16__Sequence *)(untyped_member);
  return &member->data[index];
}

void loki_msgs__msg__ControllerInfo__rosidl_typesupport_introspection_c__fetch_function__ControllerInfo__drive_directions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int16_t * item =
    ((const int16_t *)
    loki_msgs__msg__ControllerInfo__rosidl_typesupport_introspection_c__get_const_function__ControllerInfo__drive_directions(untyped_member, index));
  int16_t * value =
    (int16_t *)(untyped_value);
  *value = *item;
}

void loki_msgs__msg__ControllerInfo__rosidl_typesupport_introspection_c__assign_function__ControllerInfo__drive_directions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int16_t * item =
    ((int16_t *)
    loki_msgs__msg__ControllerInfo__rosidl_typesupport_introspection_c__get_function__ControllerInfo__drive_directions(untyped_member, index));
  const int16_t * value =
    (const int16_t *)(untyped_value);
  *item = *value;
}

bool loki_msgs__msg__ControllerInfo__rosidl_typesupport_introspection_c__resize_function__ControllerInfo__drive_directions(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int16__Sequence * member =
    (rosidl_runtime_c__int16__Sequence *)(untyped_member);
  rosidl_runtime_c__int16__Sequence__fini(member);
  return rosidl_runtime_c__int16__Sequence__init(member, size);
}

size_t loki_msgs__msg__ControllerInfo__rosidl_typesupport_introspection_c__size_function__ControllerInfo__home_counts(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * loki_msgs__msg__ControllerInfo__rosidl_typesupport_introspection_c__get_const_function__ControllerInfo__home_counts(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * loki_msgs__msg__ControllerInfo__rosidl_typesupport_introspection_c__get_function__ControllerInfo__home_counts(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void loki_msgs__msg__ControllerInfo__rosidl_typesupport_introspection_c__fetch_function__ControllerInfo__home_counts(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    loki_msgs__msg__ControllerInfo__rosidl_typesupport_introspection_c__get_const_function__ControllerInfo__home_counts(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void loki_msgs__msg__ControllerInfo__rosidl_typesupport_introspection_c__assign_function__ControllerInfo__home_counts(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    loki_msgs__msg__ControllerInfo__rosidl_typesupport_introspection_c__get_function__ControllerInfo__home_counts(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool loki_msgs__msg__ControllerInfo__rosidl_typesupport_introspection_c__resize_function__ControllerInfo__home_counts(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember loki_msgs__msg__ControllerInfo__rosidl_typesupport_introspection_c__ControllerInfo_message_member_array[2] = {
  {
    "drive_directions",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(loki_msgs__msg__ControllerInfo, drive_directions),  // bytes offset in struct
    NULL,  // default value
    loki_msgs__msg__ControllerInfo__rosidl_typesupport_introspection_c__size_function__ControllerInfo__drive_directions,  // size() function pointer
    loki_msgs__msg__ControllerInfo__rosidl_typesupport_introspection_c__get_const_function__ControllerInfo__drive_directions,  // get_const(index) function pointer
    loki_msgs__msg__ControllerInfo__rosidl_typesupport_introspection_c__get_function__ControllerInfo__drive_directions,  // get(index) function pointer
    loki_msgs__msg__ControllerInfo__rosidl_typesupport_introspection_c__fetch_function__ControllerInfo__drive_directions,  // fetch(index, &value) function pointer
    loki_msgs__msg__ControllerInfo__rosidl_typesupport_introspection_c__assign_function__ControllerInfo__drive_directions,  // assign(index, value) function pointer
    loki_msgs__msg__ControllerInfo__rosidl_typesupport_introspection_c__resize_function__ControllerInfo__drive_directions  // resize(index) function pointer
  },
  {
    "home_counts",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(loki_msgs__msg__ControllerInfo, home_counts),  // bytes offset in struct
    NULL,  // default value
    loki_msgs__msg__ControllerInfo__rosidl_typesupport_introspection_c__size_function__ControllerInfo__home_counts,  // size() function pointer
    loki_msgs__msg__ControllerInfo__rosidl_typesupport_introspection_c__get_const_function__ControllerInfo__home_counts,  // get_const(index) function pointer
    loki_msgs__msg__ControllerInfo__rosidl_typesupport_introspection_c__get_function__ControllerInfo__home_counts,  // get(index) function pointer
    loki_msgs__msg__ControllerInfo__rosidl_typesupport_introspection_c__fetch_function__ControllerInfo__home_counts,  // fetch(index, &value) function pointer
    loki_msgs__msg__ControllerInfo__rosidl_typesupport_introspection_c__assign_function__ControllerInfo__home_counts,  // assign(index, value) function pointer
    loki_msgs__msg__ControllerInfo__rosidl_typesupport_introspection_c__resize_function__ControllerInfo__home_counts  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers loki_msgs__msg__ControllerInfo__rosidl_typesupport_introspection_c__ControllerInfo_message_members = {
  "loki_msgs__msg",  // message namespace
  "ControllerInfo",  // message name
  2,  // number of fields
  sizeof(loki_msgs__msg__ControllerInfo),
  loki_msgs__msg__ControllerInfo__rosidl_typesupport_introspection_c__ControllerInfo_message_member_array,  // message members
  loki_msgs__msg__ControllerInfo__rosidl_typesupport_introspection_c__ControllerInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  loki_msgs__msg__ControllerInfo__rosidl_typesupport_introspection_c__ControllerInfo_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t loki_msgs__msg__ControllerInfo__rosidl_typesupport_introspection_c__ControllerInfo_message_type_support_handle = {
  0,
  &loki_msgs__msg__ControllerInfo__rosidl_typesupport_introspection_c__ControllerInfo_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_loki_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, loki_msgs, msg, ControllerInfo)() {
  if (!loki_msgs__msg__ControllerInfo__rosidl_typesupport_introspection_c__ControllerInfo_message_type_support_handle.typesupport_identifier) {
    loki_msgs__msg__ControllerInfo__rosidl_typesupport_introspection_c__ControllerInfo_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &loki_msgs__msg__ControllerInfo__rosidl_typesupport_introspection_c__ControllerInfo_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
