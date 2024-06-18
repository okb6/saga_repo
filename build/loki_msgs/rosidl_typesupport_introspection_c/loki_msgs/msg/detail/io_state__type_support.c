// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from loki_msgs:msg/IOState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "loki_msgs/msg/detail/io_state__rosidl_typesupport_introspection_c.h"
#include "loki_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "loki_msgs/msg/detail/io_state__functions.h"
#include "loki_msgs/msg/detail/io_state__struct.h"


// Include directives for member types
// Member `name`
// Member `version`
// Member `analog_names`
// Member `digital_names`
#include "rosidl_runtime_c/string_functions.h"
// Member `analog_values`
// Member `digital_values`
// Member `ranges`
// Member `temps`
// Member `humidities`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `imu`
#include "sensor_msgs/msg/imu.h"
// Member `imu`
#include "sensor_msgs/msg/detail/imu__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void loki_msgs__msg__IOState__rosidl_typesupport_introspection_c__IOState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  loki_msgs__msg__IOState__init(message_memory);
}

void loki_msgs__msg__IOState__rosidl_typesupport_introspection_c__IOState_fini_function(void * message_memory)
{
  loki_msgs__msg__IOState__fini(message_memory);
}

size_t loki_msgs__msg__IOState__rosidl_typesupport_introspection_c__size_function__IOState__analog_names(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * loki_msgs__msg__IOState__rosidl_typesupport_introspection_c__get_const_function__IOState__analog_names(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * loki_msgs__msg__IOState__rosidl_typesupport_introspection_c__get_function__IOState__analog_names(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void loki_msgs__msg__IOState__rosidl_typesupport_introspection_c__fetch_function__IOState__analog_names(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    loki_msgs__msg__IOState__rosidl_typesupport_introspection_c__get_const_function__IOState__analog_names(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void loki_msgs__msg__IOState__rosidl_typesupport_introspection_c__assign_function__IOState__analog_names(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    loki_msgs__msg__IOState__rosidl_typesupport_introspection_c__get_function__IOState__analog_names(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool loki_msgs__msg__IOState__rosidl_typesupport_introspection_c__resize_function__IOState__analog_names(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t loki_msgs__msg__IOState__rosidl_typesupport_introspection_c__size_function__IOState__analog_values(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * loki_msgs__msg__IOState__rosidl_typesupport_introspection_c__get_const_function__IOState__analog_values(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * loki_msgs__msg__IOState__rosidl_typesupport_introspection_c__get_function__IOState__analog_values(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void loki_msgs__msg__IOState__rosidl_typesupport_introspection_c__fetch_function__IOState__analog_values(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    loki_msgs__msg__IOState__rosidl_typesupport_introspection_c__get_const_function__IOState__analog_values(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void loki_msgs__msg__IOState__rosidl_typesupport_introspection_c__assign_function__IOState__analog_values(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    loki_msgs__msg__IOState__rosidl_typesupport_introspection_c__get_function__IOState__analog_values(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool loki_msgs__msg__IOState__rosidl_typesupport_introspection_c__resize_function__IOState__analog_values(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

size_t loki_msgs__msg__IOState__rosidl_typesupport_introspection_c__size_function__IOState__digital_names(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * loki_msgs__msg__IOState__rosidl_typesupport_introspection_c__get_const_function__IOState__digital_names(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * loki_msgs__msg__IOState__rosidl_typesupport_introspection_c__get_function__IOState__digital_names(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void loki_msgs__msg__IOState__rosidl_typesupport_introspection_c__fetch_function__IOState__digital_names(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    loki_msgs__msg__IOState__rosidl_typesupport_introspection_c__get_const_function__IOState__digital_names(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void loki_msgs__msg__IOState__rosidl_typesupport_introspection_c__assign_function__IOState__digital_names(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    loki_msgs__msg__IOState__rosidl_typesupport_introspection_c__get_function__IOState__digital_names(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool loki_msgs__msg__IOState__rosidl_typesupport_introspection_c__resize_function__IOState__digital_names(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t loki_msgs__msg__IOState__rosidl_typesupport_introspection_c__size_function__IOState__digital_values(
  const void * untyped_member)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return member->size;
}

const void * loki_msgs__msg__IOState__rosidl_typesupport_introspection_c__get_const_function__IOState__digital_values(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void * loki_msgs__msg__IOState__rosidl_typesupport_introspection_c__get_function__IOState__digital_values(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void loki_msgs__msg__IOState__rosidl_typesupport_introspection_c__fetch_function__IOState__digital_values(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bool * item =
    ((const bool *)
    loki_msgs__msg__IOState__rosidl_typesupport_introspection_c__get_const_function__IOState__digital_values(untyped_member, index));
  bool * value =
    (bool *)(untyped_value);
  *value = *item;
}

void loki_msgs__msg__IOState__rosidl_typesupport_introspection_c__assign_function__IOState__digital_values(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bool * item =
    ((bool *)
    loki_msgs__msg__IOState__rosidl_typesupport_introspection_c__get_function__IOState__digital_values(untyped_member, index));
  const bool * value =
    (const bool *)(untyped_value);
  *item = *value;
}

bool loki_msgs__msg__IOState__rosidl_typesupport_introspection_c__resize_function__IOState__digital_values(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  rosidl_runtime_c__boolean__Sequence__fini(member);
  return rosidl_runtime_c__boolean__Sequence__init(member, size);
}

size_t loki_msgs__msg__IOState__rosidl_typesupport_introspection_c__size_function__IOState__ranges(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * loki_msgs__msg__IOState__rosidl_typesupport_introspection_c__get_const_function__IOState__ranges(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * loki_msgs__msg__IOState__rosidl_typesupport_introspection_c__get_function__IOState__ranges(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void loki_msgs__msg__IOState__rosidl_typesupport_introspection_c__fetch_function__IOState__ranges(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    loki_msgs__msg__IOState__rosidl_typesupport_introspection_c__get_const_function__IOState__ranges(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void loki_msgs__msg__IOState__rosidl_typesupport_introspection_c__assign_function__IOState__ranges(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    loki_msgs__msg__IOState__rosidl_typesupport_introspection_c__get_function__IOState__ranges(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool loki_msgs__msg__IOState__rosidl_typesupport_introspection_c__resize_function__IOState__ranges(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t loki_msgs__msg__IOState__rosidl_typesupport_introspection_c__size_function__IOState__temps(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * loki_msgs__msg__IOState__rosidl_typesupport_introspection_c__get_const_function__IOState__temps(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * loki_msgs__msg__IOState__rosidl_typesupport_introspection_c__get_function__IOState__temps(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void loki_msgs__msg__IOState__rosidl_typesupport_introspection_c__fetch_function__IOState__temps(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    loki_msgs__msg__IOState__rosidl_typesupport_introspection_c__get_const_function__IOState__temps(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void loki_msgs__msg__IOState__rosidl_typesupport_introspection_c__assign_function__IOState__temps(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    loki_msgs__msg__IOState__rosidl_typesupport_introspection_c__get_function__IOState__temps(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool loki_msgs__msg__IOState__rosidl_typesupport_introspection_c__resize_function__IOState__temps(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t loki_msgs__msg__IOState__rosidl_typesupport_introspection_c__size_function__IOState__humidities(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * loki_msgs__msg__IOState__rosidl_typesupport_introspection_c__get_const_function__IOState__humidities(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * loki_msgs__msg__IOState__rosidl_typesupport_introspection_c__get_function__IOState__humidities(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void loki_msgs__msg__IOState__rosidl_typesupport_introspection_c__fetch_function__IOState__humidities(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    loki_msgs__msg__IOState__rosidl_typesupport_introspection_c__get_const_function__IOState__humidities(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void loki_msgs__msg__IOState__rosidl_typesupport_introspection_c__assign_function__IOState__humidities(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    loki_msgs__msg__IOState__rosidl_typesupport_introspection_c__get_function__IOState__humidities(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool loki_msgs__msg__IOState__rosidl_typesupport_introspection_c__resize_function__IOState__humidities(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember loki_msgs__msg__IOState__rosidl_typesupport_introspection_c__IOState_message_member_array[11] = {
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(loki_msgs__msg__IOState, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(loki_msgs__msg__IOState, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "version",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(loki_msgs__msg__IOState, version),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "analog_names",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(loki_msgs__msg__IOState, analog_names),  // bytes offset in struct
    NULL,  // default value
    loki_msgs__msg__IOState__rosidl_typesupport_introspection_c__size_function__IOState__analog_names,  // size() function pointer
    loki_msgs__msg__IOState__rosidl_typesupport_introspection_c__get_const_function__IOState__analog_names,  // get_const(index) function pointer
    loki_msgs__msg__IOState__rosidl_typesupport_introspection_c__get_function__IOState__analog_names,  // get(index) function pointer
    loki_msgs__msg__IOState__rosidl_typesupport_introspection_c__fetch_function__IOState__analog_names,  // fetch(index, &value) function pointer
    loki_msgs__msg__IOState__rosidl_typesupport_introspection_c__assign_function__IOState__analog_names,  // assign(index, value) function pointer
    loki_msgs__msg__IOState__rosidl_typesupport_introspection_c__resize_function__IOState__analog_names  // resize(index) function pointer
  },
  {
    "analog_values",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(loki_msgs__msg__IOState, analog_values),  // bytes offset in struct
    NULL,  // default value
    loki_msgs__msg__IOState__rosidl_typesupport_introspection_c__size_function__IOState__analog_values,  // size() function pointer
    loki_msgs__msg__IOState__rosidl_typesupport_introspection_c__get_const_function__IOState__analog_values,  // get_const(index) function pointer
    loki_msgs__msg__IOState__rosidl_typesupport_introspection_c__get_function__IOState__analog_values,  // get(index) function pointer
    loki_msgs__msg__IOState__rosidl_typesupport_introspection_c__fetch_function__IOState__analog_values,  // fetch(index, &value) function pointer
    loki_msgs__msg__IOState__rosidl_typesupport_introspection_c__assign_function__IOState__analog_values,  // assign(index, value) function pointer
    loki_msgs__msg__IOState__rosidl_typesupport_introspection_c__resize_function__IOState__analog_values  // resize(index) function pointer
  },
  {
    "digital_names",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(loki_msgs__msg__IOState, digital_names),  // bytes offset in struct
    NULL,  // default value
    loki_msgs__msg__IOState__rosidl_typesupport_introspection_c__size_function__IOState__digital_names,  // size() function pointer
    loki_msgs__msg__IOState__rosidl_typesupport_introspection_c__get_const_function__IOState__digital_names,  // get_const(index) function pointer
    loki_msgs__msg__IOState__rosidl_typesupport_introspection_c__get_function__IOState__digital_names,  // get(index) function pointer
    loki_msgs__msg__IOState__rosidl_typesupport_introspection_c__fetch_function__IOState__digital_names,  // fetch(index, &value) function pointer
    loki_msgs__msg__IOState__rosidl_typesupport_introspection_c__assign_function__IOState__digital_names,  // assign(index, value) function pointer
    loki_msgs__msg__IOState__rosidl_typesupport_introspection_c__resize_function__IOState__digital_names  // resize(index) function pointer
  },
  {
    "digital_values",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(loki_msgs__msg__IOState, digital_values),  // bytes offset in struct
    NULL,  // default value
    loki_msgs__msg__IOState__rosidl_typesupport_introspection_c__size_function__IOState__digital_values,  // size() function pointer
    loki_msgs__msg__IOState__rosidl_typesupport_introspection_c__get_const_function__IOState__digital_values,  // get_const(index) function pointer
    loki_msgs__msg__IOState__rosidl_typesupport_introspection_c__get_function__IOState__digital_values,  // get(index) function pointer
    loki_msgs__msg__IOState__rosidl_typesupport_introspection_c__fetch_function__IOState__digital_values,  // fetch(index, &value) function pointer
    loki_msgs__msg__IOState__rosidl_typesupport_introspection_c__assign_function__IOState__digital_values,  // assign(index, value) function pointer
    loki_msgs__msg__IOState__rosidl_typesupport_introspection_c__resize_function__IOState__digital_values  // resize(index) function pointer
  },
  {
    "ranges",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(loki_msgs__msg__IOState, ranges),  // bytes offset in struct
    NULL,  // default value
    loki_msgs__msg__IOState__rosidl_typesupport_introspection_c__size_function__IOState__ranges,  // size() function pointer
    loki_msgs__msg__IOState__rosidl_typesupport_introspection_c__get_const_function__IOState__ranges,  // get_const(index) function pointer
    loki_msgs__msg__IOState__rosidl_typesupport_introspection_c__get_function__IOState__ranges,  // get(index) function pointer
    loki_msgs__msg__IOState__rosidl_typesupport_introspection_c__fetch_function__IOState__ranges,  // fetch(index, &value) function pointer
    loki_msgs__msg__IOState__rosidl_typesupport_introspection_c__assign_function__IOState__ranges,  // assign(index, value) function pointer
    loki_msgs__msg__IOState__rosidl_typesupport_introspection_c__resize_function__IOState__ranges  // resize(index) function pointer
  },
  {
    "temps",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(loki_msgs__msg__IOState, temps),  // bytes offset in struct
    NULL,  // default value
    loki_msgs__msg__IOState__rosidl_typesupport_introspection_c__size_function__IOState__temps,  // size() function pointer
    loki_msgs__msg__IOState__rosidl_typesupport_introspection_c__get_const_function__IOState__temps,  // get_const(index) function pointer
    loki_msgs__msg__IOState__rosidl_typesupport_introspection_c__get_function__IOState__temps,  // get(index) function pointer
    loki_msgs__msg__IOState__rosidl_typesupport_introspection_c__fetch_function__IOState__temps,  // fetch(index, &value) function pointer
    loki_msgs__msg__IOState__rosidl_typesupport_introspection_c__assign_function__IOState__temps,  // assign(index, value) function pointer
    loki_msgs__msg__IOState__rosidl_typesupport_introspection_c__resize_function__IOState__temps  // resize(index) function pointer
  },
  {
    "humidities",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(loki_msgs__msg__IOState, humidities),  // bytes offset in struct
    NULL,  // default value
    loki_msgs__msg__IOState__rosidl_typesupport_introspection_c__size_function__IOState__humidities,  // size() function pointer
    loki_msgs__msg__IOState__rosidl_typesupport_introspection_c__get_const_function__IOState__humidities,  // get_const(index) function pointer
    loki_msgs__msg__IOState__rosidl_typesupport_introspection_c__get_function__IOState__humidities,  // get(index) function pointer
    loki_msgs__msg__IOState__rosidl_typesupport_introspection_c__fetch_function__IOState__humidities,  // fetch(index, &value) function pointer
    loki_msgs__msg__IOState__rosidl_typesupport_introspection_c__assign_function__IOState__humidities,  // assign(index, value) function pointer
    loki_msgs__msg__IOState__rosidl_typesupport_introspection_c__resize_function__IOState__humidities  // resize(index) function pointer
  },
  {
    "imu",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(loki_msgs__msg__IOState, imu),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers loki_msgs__msg__IOState__rosidl_typesupport_introspection_c__IOState_message_members = {
  "loki_msgs__msg",  // message namespace
  "IOState",  // message name
  11,  // number of fields
  sizeof(loki_msgs__msg__IOState),
  loki_msgs__msg__IOState__rosidl_typesupport_introspection_c__IOState_message_member_array,  // message members
  loki_msgs__msg__IOState__rosidl_typesupport_introspection_c__IOState_init_function,  // function to initialize message memory (memory has to be allocated)
  loki_msgs__msg__IOState__rosidl_typesupport_introspection_c__IOState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t loki_msgs__msg__IOState__rosidl_typesupport_introspection_c__IOState_message_type_support_handle = {
  0,
  &loki_msgs__msg__IOState__rosidl_typesupport_introspection_c__IOState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_loki_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, loki_msgs, msg, IOState)() {
  loki_msgs__msg__IOState__rosidl_typesupport_introspection_c__IOState_message_member_array[10].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, Imu)();
  if (!loki_msgs__msg__IOState__rosidl_typesupport_introspection_c__IOState_message_type_support_handle.typesupport_identifier) {
    loki_msgs__msg__IOState__rosidl_typesupport_introspection_c__IOState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &loki_msgs__msg__IOState__rosidl_typesupport_introspection_c__IOState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
