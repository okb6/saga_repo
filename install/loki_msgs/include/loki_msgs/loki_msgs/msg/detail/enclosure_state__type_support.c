// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from loki_msgs:msg/EnclosureState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "loki_msgs/msg/detail/enclosure_state__rosidl_typesupport_introspection_c.h"
#include "loki_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "loki_msgs/msg/detail/enclosure_state__functions.h"
#include "loki_msgs/msg/detail/enclosure_state__struct.h"


// Include directives for member types
// Member `digital_pin_numbers`
// Member `digital_pin_values`
// Member `analog_pin_numbers`
// Member `analog_pin_values`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void loki_msgs__msg__EnclosureState__rosidl_typesupport_introspection_c__EnclosureState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  loki_msgs__msg__EnclosureState__init(message_memory);
}

void loki_msgs__msg__EnclosureState__rosidl_typesupport_introspection_c__EnclosureState_fini_function(void * message_memory)
{
  loki_msgs__msg__EnclosureState__fini(message_memory);
}

size_t loki_msgs__msg__EnclosureState__rosidl_typesupport_introspection_c__size_function__EnclosureState__digital_pin_numbers(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * loki_msgs__msg__EnclosureState__rosidl_typesupport_introspection_c__get_const_function__EnclosureState__digital_pin_numbers(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * loki_msgs__msg__EnclosureState__rosidl_typesupport_introspection_c__get_function__EnclosureState__digital_pin_numbers(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void loki_msgs__msg__EnclosureState__rosidl_typesupport_introspection_c__fetch_function__EnclosureState__digital_pin_numbers(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    loki_msgs__msg__EnclosureState__rosidl_typesupport_introspection_c__get_const_function__EnclosureState__digital_pin_numbers(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void loki_msgs__msg__EnclosureState__rosidl_typesupport_introspection_c__assign_function__EnclosureState__digital_pin_numbers(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    loki_msgs__msg__EnclosureState__rosidl_typesupport_introspection_c__get_function__EnclosureState__digital_pin_numbers(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool loki_msgs__msg__EnclosureState__rosidl_typesupport_introspection_c__resize_function__EnclosureState__digital_pin_numbers(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

size_t loki_msgs__msg__EnclosureState__rosidl_typesupport_introspection_c__size_function__EnclosureState__digital_pin_values(
  const void * untyped_member)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return member->size;
}

const void * loki_msgs__msg__EnclosureState__rosidl_typesupport_introspection_c__get_const_function__EnclosureState__digital_pin_values(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void * loki_msgs__msg__EnclosureState__rosidl_typesupport_introspection_c__get_function__EnclosureState__digital_pin_values(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void loki_msgs__msg__EnclosureState__rosidl_typesupport_introspection_c__fetch_function__EnclosureState__digital_pin_values(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bool * item =
    ((const bool *)
    loki_msgs__msg__EnclosureState__rosidl_typesupport_introspection_c__get_const_function__EnclosureState__digital_pin_values(untyped_member, index));
  bool * value =
    (bool *)(untyped_value);
  *value = *item;
}

void loki_msgs__msg__EnclosureState__rosidl_typesupport_introspection_c__assign_function__EnclosureState__digital_pin_values(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bool * item =
    ((bool *)
    loki_msgs__msg__EnclosureState__rosidl_typesupport_introspection_c__get_function__EnclosureState__digital_pin_values(untyped_member, index));
  const bool * value =
    (const bool *)(untyped_value);
  *item = *value;
}

bool loki_msgs__msg__EnclosureState__rosidl_typesupport_introspection_c__resize_function__EnclosureState__digital_pin_values(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  rosidl_runtime_c__boolean__Sequence__fini(member);
  return rosidl_runtime_c__boolean__Sequence__init(member, size);
}

size_t loki_msgs__msg__EnclosureState__rosidl_typesupport_introspection_c__size_function__EnclosureState__analog_pin_numbers(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * loki_msgs__msg__EnclosureState__rosidl_typesupport_introspection_c__get_const_function__EnclosureState__analog_pin_numbers(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * loki_msgs__msg__EnclosureState__rosidl_typesupport_introspection_c__get_function__EnclosureState__analog_pin_numbers(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void loki_msgs__msg__EnclosureState__rosidl_typesupport_introspection_c__fetch_function__EnclosureState__analog_pin_numbers(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    loki_msgs__msg__EnclosureState__rosidl_typesupport_introspection_c__get_const_function__EnclosureState__analog_pin_numbers(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void loki_msgs__msg__EnclosureState__rosidl_typesupport_introspection_c__assign_function__EnclosureState__analog_pin_numbers(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    loki_msgs__msg__EnclosureState__rosidl_typesupport_introspection_c__get_function__EnclosureState__analog_pin_numbers(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool loki_msgs__msg__EnclosureState__rosidl_typesupport_introspection_c__resize_function__EnclosureState__analog_pin_numbers(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

size_t loki_msgs__msg__EnclosureState__rosidl_typesupport_introspection_c__size_function__EnclosureState__analog_pin_values(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * loki_msgs__msg__EnclosureState__rosidl_typesupport_introspection_c__get_const_function__EnclosureState__analog_pin_values(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * loki_msgs__msg__EnclosureState__rosidl_typesupport_introspection_c__get_function__EnclosureState__analog_pin_values(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void loki_msgs__msg__EnclosureState__rosidl_typesupport_introspection_c__fetch_function__EnclosureState__analog_pin_values(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    loki_msgs__msg__EnclosureState__rosidl_typesupport_introspection_c__get_const_function__EnclosureState__analog_pin_values(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void loki_msgs__msg__EnclosureState__rosidl_typesupport_introspection_c__assign_function__EnclosureState__analog_pin_values(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    loki_msgs__msg__EnclosureState__rosidl_typesupport_introspection_c__get_function__EnclosureState__analog_pin_values(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool loki_msgs__msg__EnclosureState__rosidl_typesupport_introspection_c__resize_function__EnclosureState__analog_pin_values(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember loki_msgs__msg__EnclosureState__rosidl_typesupport_introspection_c__EnclosureState_message_member_array[10] = {
  {
    "communication_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(loki_msgs__msg__EnclosureState, communication_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "esd_ok",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(loki_msgs__msg__EnclosureState, esd_ok),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "contactors_on",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(loki_msgs__msg__EnclosureState, contactors_on),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "motor_power_control_on",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(loki_msgs__msg__EnclosureState, motor_power_control_on),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rl3_on",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(loki_msgs__msg__EnclosureState, rl3_on),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rl5_on",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(loki_msgs__msg__EnclosureState, rl5_on),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "digital_pin_numbers",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(loki_msgs__msg__EnclosureState, digital_pin_numbers),  // bytes offset in struct
    NULL,  // default value
    loki_msgs__msg__EnclosureState__rosidl_typesupport_introspection_c__size_function__EnclosureState__digital_pin_numbers,  // size() function pointer
    loki_msgs__msg__EnclosureState__rosidl_typesupport_introspection_c__get_const_function__EnclosureState__digital_pin_numbers,  // get_const(index) function pointer
    loki_msgs__msg__EnclosureState__rosidl_typesupport_introspection_c__get_function__EnclosureState__digital_pin_numbers,  // get(index) function pointer
    loki_msgs__msg__EnclosureState__rosidl_typesupport_introspection_c__fetch_function__EnclosureState__digital_pin_numbers,  // fetch(index, &value) function pointer
    loki_msgs__msg__EnclosureState__rosidl_typesupport_introspection_c__assign_function__EnclosureState__digital_pin_numbers,  // assign(index, value) function pointer
    loki_msgs__msg__EnclosureState__rosidl_typesupport_introspection_c__resize_function__EnclosureState__digital_pin_numbers  // resize(index) function pointer
  },
  {
    "digital_pin_values",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(loki_msgs__msg__EnclosureState, digital_pin_values),  // bytes offset in struct
    NULL,  // default value
    loki_msgs__msg__EnclosureState__rosidl_typesupport_introspection_c__size_function__EnclosureState__digital_pin_values,  // size() function pointer
    loki_msgs__msg__EnclosureState__rosidl_typesupport_introspection_c__get_const_function__EnclosureState__digital_pin_values,  // get_const(index) function pointer
    loki_msgs__msg__EnclosureState__rosidl_typesupport_introspection_c__get_function__EnclosureState__digital_pin_values,  // get(index) function pointer
    loki_msgs__msg__EnclosureState__rosidl_typesupport_introspection_c__fetch_function__EnclosureState__digital_pin_values,  // fetch(index, &value) function pointer
    loki_msgs__msg__EnclosureState__rosidl_typesupport_introspection_c__assign_function__EnclosureState__digital_pin_values,  // assign(index, value) function pointer
    loki_msgs__msg__EnclosureState__rosidl_typesupport_introspection_c__resize_function__EnclosureState__digital_pin_values  // resize(index) function pointer
  },
  {
    "analog_pin_numbers",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(loki_msgs__msg__EnclosureState, analog_pin_numbers),  // bytes offset in struct
    NULL,  // default value
    loki_msgs__msg__EnclosureState__rosidl_typesupport_introspection_c__size_function__EnclosureState__analog_pin_numbers,  // size() function pointer
    loki_msgs__msg__EnclosureState__rosidl_typesupport_introspection_c__get_const_function__EnclosureState__analog_pin_numbers,  // get_const(index) function pointer
    loki_msgs__msg__EnclosureState__rosidl_typesupport_introspection_c__get_function__EnclosureState__analog_pin_numbers,  // get(index) function pointer
    loki_msgs__msg__EnclosureState__rosidl_typesupport_introspection_c__fetch_function__EnclosureState__analog_pin_numbers,  // fetch(index, &value) function pointer
    loki_msgs__msg__EnclosureState__rosidl_typesupport_introspection_c__assign_function__EnclosureState__analog_pin_numbers,  // assign(index, value) function pointer
    loki_msgs__msg__EnclosureState__rosidl_typesupport_introspection_c__resize_function__EnclosureState__analog_pin_numbers  // resize(index) function pointer
  },
  {
    "analog_pin_values",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(loki_msgs__msg__EnclosureState, analog_pin_values),  // bytes offset in struct
    NULL,  // default value
    loki_msgs__msg__EnclosureState__rosidl_typesupport_introspection_c__size_function__EnclosureState__analog_pin_values,  // size() function pointer
    loki_msgs__msg__EnclosureState__rosidl_typesupport_introspection_c__get_const_function__EnclosureState__analog_pin_values,  // get_const(index) function pointer
    loki_msgs__msg__EnclosureState__rosidl_typesupport_introspection_c__get_function__EnclosureState__analog_pin_values,  // get(index) function pointer
    loki_msgs__msg__EnclosureState__rosidl_typesupport_introspection_c__fetch_function__EnclosureState__analog_pin_values,  // fetch(index, &value) function pointer
    loki_msgs__msg__EnclosureState__rosidl_typesupport_introspection_c__assign_function__EnclosureState__analog_pin_values,  // assign(index, value) function pointer
    loki_msgs__msg__EnclosureState__rosidl_typesupport_introspection_c__resize_function__EnclosureState__analog_pin_values  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers loki_msgs__msg__EnclosureState__rosidl_typesupport_introspection_c__EnclosureState_message_members = {
  "loki_msgs__msg",  // message namespace
  "EnclosureState",  // message name
  10,  // number of fields
  sizeof(loki_msgs__msg__EnclosureState),
  loki_msgs__msg__EnclosureState__rosidl_typesupport_introspection_c__EnclosureState_message_member_array,  // message members
  loki_msgs__msg__EnclosureState__rosidl_typesupport_introspection_c__EnclosureState_init_function,  // function to initialize message memory (memory has to be allocated)
  loki_msgs__msg__EnclosureState__rosidl_typesupport_introspection_c__EnclosureState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t loki_msgs__msg__EnclosureState__rosidl_typesupport_introspection_c__EnclosureState_message_type_support_handle = {
  0,
  &loki_msgs__msg__EnclosureState__rosidl_typesupport_introspection_c__EnclosureState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_loki_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, loki_msgs, msg, EnclosureState)() {
  if (!loki_msgs__msg__EnclosureState__rosidl_typesupport_introspection_c__EnclosureState_message_type_support_handle.typesupport_identifier) {
    loki_msgs__msg__EnclosureState__rosidl_typesupport_introspection_c__EnclosureState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &loki_msgs__msg__EnclosureState__rosidl_typesupport_introspection_c__EnclosureState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
