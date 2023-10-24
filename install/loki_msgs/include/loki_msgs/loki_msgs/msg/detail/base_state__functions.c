// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from loki_msgs:msg/BaseState.idl
// generated code does not contain a copyright notice
#include "loki_msgs/msg/detail/base_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `prop_speed`
// Member `prop_pos`
// Member `steer_speed`
// Member `steer_pos`
// Member `steer_max_speed`
// Member `channel`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
loki_msgs__msg__BaseState__init(loki_msgs__msg__BaseState * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    loki_msgs__msg__BaseState__fini(msg);
    return false;
  }
  // drive_mode
  // prop_speed
  if (!rosidl_runtime_c__double__Sequence__init(&msg->prop_speed, 0)) {
    loki_msgs__msg__BaseState__fini(msg);
    return false;
  }
  // prop_pos
  if (!rosidl_runtime_c__double__Sequence__init(&msg->prop_pos, 0)) {
    loki_msgs__msg__BaseState__fini(msg);
    return false;
  }
  // steer_speed
  if (!rosidl_runtime_c__double__Sequence__init(&msg->steer_speed, 0)) {
    loki_msgs__msg__BaseState__fini(msg);
    return false;
  }
  // steer_pos
  if (!rosidl_runtime_c__double__Sequence__init(&msg->steer_pos, 0)) {
    loki_msgs__msg__BaseState__fini(msg);
    return false;
  }
  // steer_max_speed
  if (!rosidl_runtime_c__double__Sequence__init(&msg->steer_max_speed, 0)) {
    loki_msgs__msg__BaseState__fini(msg);
    return false;
  }
  // channel
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->channel, 0)) {
    loki_msgs__msg__BaseState__fini(msg);
    return false;
  }
  return true;
}

void
loki_msgs__msg__BaseState__fini(loki_msgs__msg__BaseState * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // drive_mode
  // prop_speed
  rosidl_runtime_c__double__Sequence__fini(&msg->prop_speed);
  // prop_pos
  rosidl_runtime_c__double__Sequence__fini(&msg->prop_pos);
  // steer_speed
  rosidl_runtime_c__double__Sequence__fini(&msg->steer_speed);
  // steer_pos
  rosidl_runtime_c__double__Sequence__fini(&msg->steer_pos);
  // steer_max_speed
  rosidl_runtime_c__double__Sequence__fini(&msg->steer_max_speed);
  // channel
  rosidl_runtime_c__int32__Sequence__fini(&msg->channel);
}

bool
loki_msgs__msg__BaseState__are_equal(const loki_msgs__msg__BaseState * lhs, const loki_msgs__msg__BaseState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // drive_mode
  if (lhs->drive_mode != rhs->drive_mode) {
    return false;
  }
  // prop_speed
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->prop_speed), &(rhs->prop_speed)))
  {
    return false;
  }
  // prop_pos
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->prop_pos), &(rhs->prop_pos)))
  {
    return false;
  }
  // steer_speed
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->steer_speed), &(rhs->steer_speed)))
  {
    return false;
  }
  // steer_pos
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->steer_pos), &(rhs->steer_pos)))
  {
    return false;
  }
  // steer_max_speed
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->steer_max_speed), &(rhs->steer_max_speed)))
  {
    return false;
  }
  // channel
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->channel), &(rhs->channel)))
  {
    return false;
  }
  return true;
}

bool
loki_msgs__msg__BaseState__copy(
  const loki_msgs__msg__BaseState * input,
  loki_msgs__msg__BaseState * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // drive_mode
  output->drive_mode = input->drive_mode;
  // prop_speed
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->prop_speed), &(output->prop_speed)))
  {
    return false;
  }
  // prop_pos
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->prop_pos), &(output->prop_pos)))
  {
    return false;
  }
  // steer_speed
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->steer_speed), &(output->steer_speed)))
  {
    return false;
  }
  // steer_pos
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->steer_pos), &(output->steer_pos)))
  {
    return false;
  }
  // steer_max_speed
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->steer_max_speed), &(output->steer_max_speed)))
  {
    return false;
  }
  // channel
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->channel), &(output->channel)))
  {
    return false;
  }
  return true;
}

loki_msgs__msg__BaseState *
loki_msgs__msg__BaseState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  loki_msgs__msg__BaseState * msg = (loki_msgs__msg__BaseState *)allocator.allocate(sizeof(loki_msgs__msg__BaseState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(loki_msgs__msg__BaseState));
  bool success = loki_msgs__msg__BaseState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
loki_msgs__msg__BaseState__destroy(loki_msgs__msg__BaseState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    loki_msgs__msg__BaseState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
loki_msgs__msg__BaseState__Sequence__init(loki_msgs__msg__BaseState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  loki_msgs__msg__BaseState * data = NULL;

  if (size) {
    data = (loki_msgs__msg__BaseState *)allocator.zero_allocate(size, sizeof(loki_msgs__msg__BaseState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = loki_msgs__msg__BaseState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        loki_msgs__msg__BaseState__fini(&data[i - 1]);
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
loki_msgs__msg__BaseState__Sequence__fini(loki_msgs__msg__BaseState__Sequence * array)
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
      loki_msgs__msg__BaseState__fini(&array->data[i]);
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

loki_msgs__msg__BaseState__Sequence *
loki_msgs__msg__BaseState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  loki_msgs__msg__BaseState__Sequence * array = (loki_msgs__msg__BaseState__Sequence *)allocator.allocate(sizeof(loki_msgs__msg__BaseState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = loki_msgs__msg__BaseState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
loki_msgs__msg__BaseState__Sequence__destroy(loki_msgs__msg__BaseState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    loki_msgs__msg__BaseState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
loki_msgs__msg__BaseState__Sequence__are_equal(const loki_msgs__msg__BaseState__Sequence * lhs, const loki_msgs__msg__BaseState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!loki_msgs__msg__BaseState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
loki_msgs__msg__BaseState__Sequence__copy(
  const loki_msgs__msg__BaseState__Sequence * input,
  loki_msgs__msg__BaseState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(loki_msgs__msg__BaseState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    loki_msgs__msg__BaseState * data =
      (loki_msgs__msg__BaseState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!loki_msgs__msg__BaseState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          loki_msgs__msg__BaseState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!loki_msgs__msg__BaseState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
