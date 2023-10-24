// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from loki_msgs:msg/ControllerData.idl
// generated code does not contain a copyright notice
#include "loki_msgs/msg/detail/controller_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `controller_config`
#include "loki_msgs/msg/detail/controller_config__functions.h"
// Member `controller_state`
#include "loki_msgs/msg/detail/controller_state__functions.h"
// Member `motor_state`
#include "loki_msgs/msg/detail/motor_state__functions.h"

bool
loki_msgs__msg__ControllerData__init(loki_msgs__msg__ControllerData * msg)
{
  if (!msg) {
    return false;
  }
  // controller_config
  if (!loki_msgs__msg__ControllerConfig__init(&msg->controller_config)) {
    loki_msgs__msg__ControllerData__fini(msg);
    return false;
  }
  // controller_state
  if (!loki_msgs__msg__ControllerState__init(&msg->controller_state)) {
    loki_msgs__msg__ControllerData__fini(msg);
    return false;
  }
  // motor_state
  if (!loki_msgs__msg__MotorState__Sequence__init(&msg->motor_state, 0)) {
    loki_msgs__msg__ControllerData__fini(msg);
    return false;
  }
  return true;
}

void
loki_msgs__msg__ControllerData__fini(loki_msgs__msg__ControllerData * msg)
{
  if (!msg) {
    return;
  }
  // controller_config
  loki_msgs__msg__ControllerConfig__fini(&msg->controller_config);
  // controller_state
  loki_msgs__msg__ControllerState__fini(&msg->controller_state);
  // motor_state
  loki_msgs__msg__MotorState__Sequence__fini(&msg->motor_state);
}

bool
loki_msgs__msg__ControllerData__are_equal(const loki_msgs__msg__ControllerData * lhs, const loki_msgs__msg__ControllerData * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // controller_config
  if (!loki_msgs__msg__ControllerConfig__are_equal(
      &(lhs->controller_config), &(rhs->controller_config)))
  {
    return false;
  }
  // controller_state
  if (!loki_msgs__msg__ControllerState__are_equal(
      &(lhs->controller_state), &(rhs->controller_state)))
  {
    return false;
  }
  // motor_state
  if (!loki_msgs__msg__MotorState__Sequence__are_equal(
      &(lhs->motor_state), &(rhs->motor_state)))
  {
    return false;
  }
  return true;
}

bool
loki_msgs__msg__ControllerData__copy(
  const loki_msgs__msg__ControllerData * input,
  loki_msgs__msg__ControllerData * output)
{
  if (!input || !output) {
    return false;
  }
  // controller_config
  if (!loki_msgs__msg__ControllerConfig__copy(
      &(input->controller_config), &(output->controller_config)))
  {
    return false;
  }
  // controller_state
  if (!loki_msgs__msg__ControllerState__copy(
      &(input->controller_state), &(output->controller_state)))
  {
    return false;
  }
  // motor_state
  if (!loki_msgs__msg__MotorState__Sequence__copy(
      &(input->motor_state), &(output->motor_state)))
  {
    return false;
  }
  return true;
}

loki_msgs__msg__ControllerData *
loki_msgs__msg__ControllerData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  loki_msgs__msg__ControllerData * msg = (loki_msgs__msg__ControllerData *)allocator.allocate(sizeof(loki_msgs__msg__ControllerData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(loki_msgs__msg__ControllerData));
  bool success = loki_msgs__msg__ControllerData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
loki_msgs__msg__ControllerData__destroy(loki_msgs__msg__ControllerData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    loki_msgs__msg__ControllerData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
loki_msgs__msg__ControllerData__Sequence__init(loki_msgs__msg__ControllerData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  loki_msgs__msg__ControllerData * data = NULL;

  if (size) {
    data = (loki_msgs__msg__ControllerData *)allocator.zero_allocate(size, sizeof(loki_msgs__msg__ControllerData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = loki_msgs__msg__ControllerData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        loki_msgs__msg__ControllerData__fini(&data[i - 1]);
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
loki_msgs__msg__ControllerData__Sequence__fini(loki_msgs__msg__ControllerData__Sequence * array)
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
      loki_msgs__msg__ControllerData__fini(&array->data[i]);
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

loki_msgs__msg__ControllerData__Sequence *
loki_msgs__msg__ControllerData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  loki_msgs__msg__ControllerData__Sequence * array = (loki_msgs__msg__ControllerData__Sequence *)allocator.allocate(sizeof(loki_msgs__msg__ControllerData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = loki_msgs__msg__ControllerData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
loki_msgs__msg__ControllerData__Sequence__destroy(loki_msgs__msg__ControllerData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    loki_msgs__msg__ControllerData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
loki_msgs__msg__ControllerData__Sequence__are_equal(const loki_msgs__msg__ControllerData__Sequence * lhs, const loki_msgs__msg__ControllerData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!loki_msgs__msg__ControllerData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
loki_msgs__msg__ControllerData__Sequence__copy(
  const loki_msgs__msg__ControllerData__Sequence * input,
  loki_msgs__msg__ControllerData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(loki_msgs__msg__ControllerData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    loki_msgs__msg__ControllerData * data =
      (loki_msgs__msg__ControllerData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!loki_msgs__msg__ControllerData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          loki_msgs__msg__ControllerData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!loki_msgs__msg__ControllerData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
