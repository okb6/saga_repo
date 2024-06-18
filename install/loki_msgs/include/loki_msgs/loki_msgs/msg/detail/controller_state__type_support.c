// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from loki_msgs:msg/ControllerState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "loki_msgs/msg/detail/controller_state__rosidl_typesupport_introspection_c.h"
#include "loki_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "loki_msgs/msg/detail/controller_state__functions.h"
#include "loki_msgs/msg/detail/controller_state__struct.h"


// Include directives for member types
// Member `temps`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `status_flags`
#include "loki_msgs/msg/controller_status_flag.h"
// Member `status_flags`
#include "loki_msgs/msg/detail/controller_status_flag__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void loki_msgs__msg__ControllerState__rosidl_typesupport_introspection_c__ControllerState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  loki_msgs__msg__ControllerState__init(message_memory);
}

void loki_msgs__msg__ControllerState__rosidl_typesupport_introspection_c__ControllerState_fini_function(void * message_memory)
{
  loki_msgs__msg__ControllerState__fini(message_memory);
}

size_t loki_msgs__msg__ControllerState__rosidl_typesupport_introspection_c__size_function__ControllerState__temps(
  const void * untyped_member)
{
  const rosidl_runtime_c__int16__Sequence * member =
    (const rosidl_runtime_c__int16__Sequence *)(untyped_member);
  return member->size;
}

const void * loki_msgs__msg__ControllerState__rosidl_typesupport_introspection_c__get_const_function__ControllerState__temps(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int16__Sequence * member =
    (const rosidl_runtime_c__int16__Sequence *)(untyped_member);
  return &member->data[index];
}

void * loki_msgs__msg__ControllerState__rosidl_typesupport_introspection_c__get_function__ControllerState__temps(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int16__Sequence * member =
    (rosidl_runtime_c__int16__Sequence *)(untyped_member);
  return &member->data[index];
}

void loki_msgs__msg__ControllerState__rosidl_typesupport_introspection_c__fetch_function__ControllerState__temps(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int16_t * item =
    ((const int16_t *)
    loki_msgs__msg__ControllerState__rosidl_typesupport_introspection_c__get_const_function__ControllerState__temps(untyped_member, index));
  int16_t * value =
    (int16_t *)(untyped_value);
  *value = *item;
}

void loki_msgs__msg__ControllerState__rosidl_typesupport_introspection_c__assign_function__ControllerState__temps(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int16_t * item =
    ((int16_t *)
    loki_msgs__msg__ControllerState__rosidl_typesupport_introspection_c__get_function__ControllerState__temps(untyped_member, index));
  const int16_t * value =
    (const int16_t *)(untyped_value);
  *item = *value;
}

bool loki_msgs__msg__ControllerState__rosidl_typesupport_introspection_c__resize_function__ControllerState__temps(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int16__Sequence * member =
    (rosidl_runtime_c__int16__Sequence *)(untyped_member);
  rosidl_runtime_c__int16__Sequence__fini(member);
  return rosidl_runtime_c__int16__Sequence__init(member, size);
}

size_t loki_msgs__msg__ControllerState__rosidl_typesupport_introspection_c__size_function__ControllerState__status_flags(
  const void * untyped_member)
{
  const loki_msgs__msg__ControllerStatusFlag__Sequence * member =
    (const loki_msgs__msg__ControllerStatusFlag__Sequence *)(untyped_member);
  return member->size;
}

const void * loki_msgs__msg__ControllerState__rosidl_typesupport_introspection_c__get_const_function__ControllerState__status_flags(
  const void * untyped_member, size_t index)
{
  const loki_msgs__msg__ControllerStatusFlag__Sequence * member =
    (const loki_msgs__msg__ControllerStatusFlag__Sequence *)(untyped_member);
  return &member->data[index];
}

void * loki_msgs__msg__ControllerState__rosidl_typesupport_introspection_c__get_function__ControllerState__status_flags(
  void * untyped_member, size_t index)
{
  loki_msgs__msg__ControllerStatusFlag__Sequence * member =
    (loki_msgs__msg__ControllerStatusFlag__Sequence *)(untyped_member);
  return &member->data[index];
}

void loki_msgs__msg__ControllerState__rosidl_typesupport_introspection_c__fetch_function__ControllerState__status_flags(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const loki_msgs__msg__ControllerStatusFlag * item =
    ((const loki_msgs__msg__ControllerStatusFlag *)
    loki_msgs__msg__ControllerState__rosidl_typesupport_introspection_c__get_const_function__ControllerState__status_flags(untyped_member, index));
  loki_msgs__msg__ControllerStatusFlag * value =
    (loki_msgs__msg__ControllerStatusFlag *)(untyped_value);
  *value = *item;
}

void loki_msgs__msg__ControllerState__rosidl_typesupport_introspection_c__assign_function__ControllerState__status_flags(
  void * untyped_member, size_t index, const void * untyped_value)
{
  loki_msgs__msg__ControllerStatusFlag * item =
    ((loki_msgs__msg__ControllerStatusFlag *)
    loki_msgs__msg__ControllerState__rosidl_typesupport_introspection_c__get_function__ControllerState__status_flags(untyped_member, index));
  const loki_msgs__msg__ControllerStatusFlag * value =
    (const loki_msgs__msg__ControllerStatusFlag *)(untyped_value);
  *item = *value;
}

bool loki_msgs__msg__ControllerState__rosidl_typesupport_introspection_c__resize_function__ControllerState__status_flags(
  void * untyped_member, size_t size)
{
  loki_msgs__msg__ControllerStatusFlag__Sequence * member =
    (loki_msgs__msg__ControllerStatusFlag__Sequence *)(untyped_member);
  loki_msgs__msg__ControllerStatusFlag__Sequence__fini(member);
  return loki_msgs__msg__ControllerStatusFlag__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember loki_msgs__msg__ControllerState__rosidl_typesupport_introspection_c__ControllerState_message_member_array[5] = {
  {
    "controller_mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(loki_msgs__msg__ControllerState, controller_mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "battery_volts",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(loki_msgs__msg__ControllerState, battery_volts),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "battery_amps",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(loki_msgs__msg__ControllerState, battery_amps),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "temps",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(loki_msgs__msg__ControllerState, temps),  // bytes offset in struct
    NULL,  // default value
    loki_msgs__msg__ControllerState__rosidl_typesupport_introspection_c__size_function__ControllerState__temps,  // size() function pointer
    loki_msgs__msg__ControllerState__rosidl_typesupport_introspection_c__get_const_function__ControllerState__temps,  // get_const(index) function pointer
    loki_msgs__msg__ControllerState__rosidl_typesupport_introspection_c__get_function__ControllerState__temps,  // get(index) function pointer
    loki_msgs__msg__ControllerState__rosidl_typesupport_introspection_c__fetch_function__ControllerState__temps,  // fetch(index, &value) function pointer
    loki_msgs__msg__ControllerState__rosidl_typesupport_introspection_c__assign_function__ControllerState__temps,  // assign(index, value) function pointer
    loki_msgs__msg__ControllerState__rosidl_typesupport_introspection_c__resize_function__ControllerState__temps  // resize(index) function pointer
  },
  {
    "status_flags",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(loki_msgs__msg__ControllerState, status_flags),  // bytes offset in struct
    NULL,  // default value
    loki_msgs__msg__ControllerState__rosidl_typesupport_introspection_c__size_function__ControllerState__status_flags,  // size() function pointer
    loki_msgs__msg__ControllerState__rosidl_typesupport_introspection_c__get_const_function__ControllerState__status_flags,  // get_const(index) function pointer
    loki_msgs__msg__ControllerState__rosidl_typesupport_introspection_c__get_function__ControllerState__status_flags,  // get(index) function pointer
    loki_msgs__msg__ControllerState__rosidl_typesupport_introspection_c__fetch_function__ControllerState__status_flags,  // fetch(index, &value) function pointer
    loki_msgs__msg__ControllerState__rosidl_typesupport_introspection_c__assign_function__ControllerState__status_flags,  // assign(index, value) function pointer
    loki_msgs__msg__ControllerState__rosidl_typesupport_introspection_c__resize_function__ControllerState__status_flags  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers loki_msgs__msg__ControllerState__rosidl_typesupport_introspection_c__ControllerState_message_members = {
  "loki_msgs__msg",  // message namespace
  "ControllerState",  // message name
  5,  // number of fields
  sizeof(loki_msgs__msg__ControllerState),
  loki_msgs__msg__ControllerState__rosidl_typesupport_introspection_c__ControllerState_message_member_array,  // message members
  loki_msgs__msg__ControllerState__rosidl_typesupport_introspection_c__ControllerState_init_function,  // function to initialize message memory (memory has to be allocated)
  loki_msgs__msg__ControllerState__rosidl_typesupport_introspection_c__ControllerState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t loki_msgs__msg__ControllerState__rosidl_typesupport_introspection_c__ControllerState_message_type_support_handle = {
  0,
  &loki_msgs__msg__ControllerState__rosidl_typesupport_introspection_c__ControllerState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_loki_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, loki_msgs, msg, ControllerState)() {
  loki_msgs__msg__ControllerState__rosidl_typesupport_introspection_c__ControllerState_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, loki_msgs, msg, ControllerStatusFlag)();
  if (!loki_msgs__msg__ControllerState__rosidl_typesupport_introspection_c__ControllerState_message_type_support_handle.typesupport_identifier) {
    loki_msgs__msg__ControllerState__rosidl_typesupport_introspection_c__ControllerState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &loki_msgs__msg__ControllerState__rosidl_typesupport_introspection_c__ControllerState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
