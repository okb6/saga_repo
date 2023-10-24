// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from loki_msgs:msg/ControllerState.idl
// generated code does not contain a copyright notice
#include "loki_msgs/msg/detail/controller_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `temps`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `status_flags`
#include "loki_msgs/msg/detail/controller_status_flag__functions.h"

bool
loki_msgs__msg__ControllerState__init(loki_msgs__msg__ControllerState * msg)
{
  if (!msg) {
    return false;
  }
  // controller_mode
  // battery_volts
  // battery_amps
  // temps
  if (!rosidl_runtime_c__int16__Sequence__init(&msg->temps, 0)) {
    loki_msgs__msg__ControllerState__fini(msg);
    return false;
  }
  // status_flags
  if (!loki_msgs__msg__ControllerStatusFlag__Sequence__init(&msg->status_flags, 0)) {
    loki_msgs__msg__ControllerState__fini(msg);
    return false;
  }
  return true;
}

void
loki_msgs__msg__ControllerState__fini(loki_msgs__msg__ControllerState * msg)
{
  if (!msg) {
    return;
  }
  // controller_mode
  // battery_volts
  // battery_amps
  // temps
  rosidl_runtime_c__int16__Sequence__fini(&msg->temps);
  // status_flags
  loki_msgs__msg__ControllerStatusFlag__Sequence__fini(&msg->status_flags);
}

bool
loki_msgs__msg__ControllerState__are_equal(const loki_msgs__msg__ControllerState * lhs, const loki_msgs__msg__ControllerState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // controller_mode
  if (lhs->controller_mode != rhs->controller_mode) {
    return false;
  }
  // battery_volts
  if (lhs->battery_volts != rhs->battery_volts) {
    return false;
  }
  // battery_amps
  if (lhs->battery_amps != rhs->battery_amps) {
    return false;
  }
  // temps
  if (!rosidl_runtime_c__int16__Sequence__are_equal(
      &(lhs->temps), &(rhs->temps)))
  {
    return false;
  }
  // status_flags
  if (!loki_msgs__msg__ControllerStatusFlag__Sequence__are_equal(
      &(lhs->status_flags), &(rhs->status_flags)))
  {
    return false;
  }
  return true;
}

bool
loki_msgs__msg__ControllerState__copy(
  const loki_msgs__msg__ControllerState * input,
  loki_msgs__msg__ControllerState * output)
{
  if (!input || !output) {
    return false;
  }
  // controller_mode
  output->controller_mode = input->controller_mode;
  // battery_volts
  output->battery_volts = input->battery_volts;
  // battery_amps
  output->battery_amps = input->battery_amps;
  // temps
  if (!rosidl_runtime_c__int16__Sequence__copy(
      &(input->temps), &(output->temps)))
  {
    return false;
  }
  // status_flags
  if (!loki_msgs__msg__ControllerStatusFlag__Sequence__copy(
      &(input->status_flags), &(output->status_flags)))
  {
    return false;
  }
  return true;
}

loki_msgs__msg__ControllerState *
loki_msgs__msg__ControllerState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  loki_msgs__msg__ControllerState * msg = (loki_msgs__msg__ControllerState *)allocator.allocate(sizeof(loki_msgs__msg__ControllerState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(loki_msgs__msg__ControllerState));
  bool success = loki_msgs__msg__ControllerState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
loki_msgs__msg__ControllerState__destroy(loki_msgs__msg__ControllerState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    loki_msgs__msg__ControllerState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
loki_msgs__msg__ControllerState__Sequence__init(loki_msgs__msg__ControllerState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  loki_msgs__msg__ControllerState * data = NULL;

  if (size) {
    data = (loki_msgs__msg__ControllerState *)allocator.zero_allocate(size, sizeof(loki_msgs__msg__ControllerState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = loki_msgs__msg__ControllerState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        loki_msgs__msg__ControllerState__fini(&data[i - 1]);
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
loki_msgs__msg__ControllerState__Sequence__fini(loki_msgs__msg__ControllerState__Sequence * array)
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
      loki_msgs__msg__ControllerState__fini(&array->data[i]);
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

loki_msgs__msg__ControllerState__Sequence *
loki_msgs__msg__ControllerState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  loki_msgs__msg__ControllerState__Sequence * array = (loki_msgs__msg__ControllerState__Sequence *)allocator.allocate(sizeof(loki_msgs__msg__ControllerState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = loki_msgs__msg__ControllerState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
loki_msgs__msg__ControllerState__Sequence__destroy(loki_msgs__msg__ControllerState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    loki_msgs__msg__ControllerState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
loki_msgs__msg__ControllerState__Sequence__are_equal(const loki_msgs__msg__ControllerState__Sequence * lhs, const loki_msgs__msg__ControllerState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!loki_msgs__msg__ControllerState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
loki_msgs__msg__ControllerState__Sequence__copy(
  const loki_msgs__msg__ControllerState__Sequence * input,
  loki_msgs__msg__ControllerState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(loki_msgs__msg__ControllerState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    loki_msgs__msg__ControllerState * data =
      (loki_msgs__msg__ControllerState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!loki_msgs__msg__ControllerState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          loki_msgs__msg__ControllerState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!loki_msgs__msg__ControllerState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
