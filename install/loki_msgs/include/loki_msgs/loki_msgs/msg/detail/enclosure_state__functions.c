// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from loki_msgs:msg/EnclosureState.idl
// generated code does not contain a copyright notice
#include "loki_msgs/msg/detail/enclosure_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `digital_pin_numbers`
// Member `digital_pin_values`
// Member `analog_pin_numbers`
// Member `analog_pin_values`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
loki_msgs__msg__EnclosureState__init(loki_msgs__msg__EnclosureState * msg)
{
  if (!msg) {
    return false;
  }
  // communication_state
  // esd_ok
  // contactors_on
  // motor_power_control_on
  // rl3_on
  // rl5_on
  // digital_pin_numbers
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->digital_pin_numbers, 0)) {
    loki_msgs__msg__EnclosureState__fini(msg);
    return false;
  }
  // digital_pin_values
  if (!rosidl_runtime_c__boolean__Sequence__init(&msg->digital_pin_values, 0)) {
    loki_msgs__msg__EnclosureState__fini(msg);
    return false;
  }
  // analog_pin_numbers
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->analog_pin_numbers, 0)) {
    loki_msgs__msg__EnclosureState__fini(msg);
    return false;
  }
  // analog_pin_values
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->analog_pin_values, 0)) {
    loki_msgs__msg__EnclosureState__fini(msg);
    return false;
  }
  return true;
}

void
loki_msgs__msg__EnclosureState__fini(loki_msgs__msg__EnclosureState * msg)
{
  if (!msg) {
    return;
  }
  // communication_state
  // esd_ok
  // contactors_on
  // motor_power_control_on
  // rl3_on
  // rl5_on
  // digital_pin_numbers
  rosidl_runtime_c__int32__Sequence__fini(&msg->digital_pin_numbers);
  // digital_pin_values
  rosidl_runtime_c__boolean__Sequence__fini(&msg->digital_pin_values);
  // analog_pin_numbers
  rosidl_runtime_c__int32__Sequence__fini(&msg->analog_pin_numbers);
  // analog_pin_values
  rosidl_runtime_c__int32__Sequence__fini(&msg->analog_pin_values);
}

bool
loki_msgs__msg__EnclosureState__are_equal(const loki_msgs__msg__EnclosureState * lhs, const loki_msgs__msg__EnclosureState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // communication_state
  if (lhs->communication_state != rhs->communication_state) {
    return false;
  }
  // esd_ok
  if (lhs->esd_ok != rhs->esd_ok) {
    return false;
  }
  // contactors_on
  if (lhs->contactors_on != rhs->contactors_on) {
    return false;
  }
  // motor_power_control_on
  if (lhs->motor_power_control_on != rhs->motor_power_control_on) {
    return false;
  }
  // rl3_on
  if (lhs->rl3_on != rhs->rl3_on) {
    return false;
  }
  // rl5_on
  if (lhs->rl5_on != rhs->rl5_on) {
    return false;
  }
  // digital_pin_numbers
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->digital_pin_numbers), &(rhs->digital_pin_numbers)))
  {
    return false;
  }
  // digital_pin_values
  if (!rosidl_runtime_c__boolean__Sequence__are_equal(
      &(lhs->digital_pin_values), &(rhs->digital_pin_values)))
  {
    return false;
  }
  // analog_pin_numbers
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->analog_pin_numbers), &(rhs->analog_pin_numbers)))
  {
    return false;
  }
  // analog_pin_values
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->analog_pin_values), &(rhs->analog_pin_values)))
  {
    return false;
  }
  return true;
}

bool
loki_msgs__msg__EnclosureState__copy(
  const loki_msgs__msg__EnclosureState * input,
  loki_msgs__msg__EnclosureState * output)
{
  if (!input || !output) {
    return false;
  }
  // communication_state
  output->communication_state = input->communication_state;
  // esd_ok
  output->esd_ok = input->esd_ok;
  // contactors_on
  output->contactors_on = input->contactors_on;
  // motor_power_control_on
  output->motor_power_control_on = input->motor_power_control_on;
  // rl3_on
  output->rl3_on = input->rl3_on;
  // rl5_on
  output->rl5_on = input->rl5_on;
  // digital_pin_numbers
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->digital_pin_numbers), &(output->digital_pin_numbers)))
  {
    return false;
  }
  // digital_pin_values
  if (!rosidl_runtime_c__boolean__Sequence__copy(
      &(input->digital_pin_values), &(output->digital_pin_values)))
  {
    return false;
  }
  // analog_pin_numbers
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->analog_pin_numbers), &(output->analog_pin_numbers)))
  {
    return false;
  }
  // analog_pin_values
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->analog_pin_values), &(output->analog_pin_values)))
  {
    return false;
  }
  return true;
}

loki_msgs__msg__EnclosureState *
loki_msgs__msg__EnclosureState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  loki_msgs__msg__EnclosureState * msg = (loki_msgs__msg__EnclosureState *)allocator.allocate(sizeof(loki_msgs__msg__EnclosureState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(loki_msgs__msg__EnclosureState));
  bool success = loki_msgs__msg__EnclosureState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
loki_msgs__msg__EnclosureState__destroy(loki_msgs__msg__EnclosureState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    loki_msgs__msg__EnclosureState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
loki_msgs__msg__EnclosureState__Sequence__init(loki_msgs__msg__EnclosureState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  loki_msgs__msg__EnclosureState * data = NULL;

  if (size) {
    data = (loki_msgs__msg__EnclosureState *)allocator.zero_allocate(size, sizeof(loki_msgs__msg__EnclosureState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = loki_msgs__msg__EnclosureState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        loki_msgs__msg__EnclosureState__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
loki_msgs__msg__EnclosureState__Sequence__fini(loki_msgs__msg__EnclosureState__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      loki_msgs__msg__EnclosureState__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

loki_msgs__msg__EnclosureState__Sequence *
loki_msgs__msg__EnclosureState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  loki_msgs__msg__EnclosureState__Sequence * array = (loki_msgs__msg__EnclosureState__Sequence *)allocator.allocate(sizeof(loki_msgs__msg__EnclosureState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = loki_msgs__msg__EnclosureState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
loki_msgs__msg__EnclosureState__Sequence__destroy(loki_msgs__msg__EnclosureState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    loki_msgs__msg__EnclosureState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
loki_msgs__msg__EnclosureState__Sequence__are_equal(const loki_msgs__msg__EnclosureState__Sequence * lhs, const loki_msgs__msg__EnclosureState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!loki_msgs__msg__EnclosureState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
loki_msgs__msg__EnclosureState__Sequence__copy(
  const loki_msgs__msg__EnclosureState__Sequence * input,
  loki_msgs__msg__EnclosureState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(loki_msgs__msg__EnclosureState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    loki_msgs__msg__EnclosureState * data =
      (loki_msgs__msg__EnclosureState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!loki_msgs__msg__EnclosureState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          loki_msgs__msg__EnclosureState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!loki_msgs__msg__EnclosureState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
