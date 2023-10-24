// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from loki_msgs:msg/ControllerConfig.idl
// generated code does not contain a copyright notice
#include "loki_msgs/msg/detail/controller_config__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
// Member `type`
// Member `version`
#include "rosidl_runtime_c/string_functions.h"

bool
loki_msgs__msg__ControllerConfig__init(loki_msgs__msg__ControllerConfig * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    loki_msgs__msg__ControllerConfig__fini(msg);
    return false;
  }
  // type
  if (!rosidl_runtime_c__String__init(&msg->type)) {
    loki_msgs__msg__ControllerConfig__fini(msg);
    return false;
  }
  // version
  if (!rosidl_runtime_c__String__init(&msg->version)) {
    loki_msgs__msg__ControllerConfig__fini(msg);
    return false;
  }
  // can_id
  // drive_direction
  // home_speed
  // home_count
  return true;
}

void
loki_msgs__msg__ControllerConfig__fini(loki_msgs__msg__ControllerConfig * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // type
  rosidl_runtime_c__String__fini(&msg->type);
  // version
  rosidl_runtime_c__String__fini(&msg->version);
  // can_id
  // drive_direction
  // home_speed
  // home_count
}

bool
loki_msgs__msg__ControllerConfig__are_equal(const loki_msgs__msg__ControllerConfig * lhs, const loki_msgs__msg__ControllerConfig * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->type), &(rhs->type)))
  {
    return false;
  }
  // version
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->version), &(rhs->version)))
  {
    return false;
  }
  // can_id
  if (lhs->can_id != rhs->can_id) {
    return false;
  }
  // drive_direction
  if (lhs->drive_direction != rhs->drive_direction) {
    return false;
  }
  // home_speed
  if (lhs->home_speed != rhs->home_speed) {
    return false;
  }
  // home_count
  if (lhs->home_count != rhs->home_count) {
    return false;
  }
  return true;
}

bool
loki_msgs__msg__ControllerConfig__copy(
  const loki_msgs__msg__ControllerConfig * input,
  loki_msgs__msg__ControllerConfig * output)
{
  if (!input || !output) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // type
  if (!rosidl_runtime_c__String__copy(
      &(input->type), &(output->type)))
  {
    return false;
  }
  // version
  if (!rosidl_runtime_c__String__copy(
      &(input->version), &(output->version)))
  {
    return false;
  }
  // can_id
  output->can_id = input->can_id;
  // drive_direction
  output->drive_direction = input->drive_direction;
  // home_speed
  output->home_speed = input->home_speed;
  // home_count
  output->home_count = input->home_count;
  return true;
}

loki_msgs__msg__ControllerConfig *
loki_msgs__msg__ControllerConfig__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  loki_msgs__msg__ControllerConfig * msg = (loki_msgs__msg__ControllerConfig *)allocator.allocate(sizeof(loki_msgs__msg__ControllerConfig), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(loki_msgs__msg__ControllerConfig));
  bool success = loki_msgs__msg__ControllerConfig__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
loki_msgs__msg__ControllerConfig__destroy(loki_msgs__msg__ControllerConfig * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    loki_msgs__msg__ControllerConfig__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
loki_msgs__msg__ControllerConfig__Sequence__init(loki_msgs__msg__ControllerConfig__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  loki_msgs__msg__ControllerConfig * data = NULL;

  if (size) {
    data = (loki_msgs__msg__ControllerConfig *)allocator.zero_allocate(size, sizeof(loki_msgs__msg__ControllerConfig), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = loki_msgs__msg__ControllerConfig__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        loki_msgs__msg__ControllerConfig__fini(&data[i - 1]);
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
loki_msgs__msg__ControllerConfig__Sequence__fini(loki_msgs__msg__ControllerConfig__Sequence * array)
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
      loki_msgs__msg__ControllerConfig__fini(&array->data[i]);
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

loki_msgs__msg__ControllerConfig__Sequence *
loki_msgs__msg__ControllerConfig__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  loki_msgs__msg__ControllerConfig__Sequence * array = (loki_msgs__msg__ControllerConfig__Sequence *)allocator.allocate(sizeof(loki_msgs__msg__ControllerConfig__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = loki_msgs__msg__ControllerConfig__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
loki_msgs__msg__ControllerConfig__Sequence__destroy(loki_msgs__msg__ControllerConfig__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    loki_msgs__msg__ControllerConfig__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
loki_msgs__msg__ControllerConfig__Sequence__are_equal(const loki_msgs__msg__ControllerConfig__Sequence * lhs, const loki_msgs__msg__ControllerConfig__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!loki_msgs__msg__ControllerConfig__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
loki_msgs__msg__ControllerConfig__Sequence__copy(
  const loki_msgs__msg__ControllerConfig__Sequence * input,
  loki_msgs__msg__ControllerConfig__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(loki_msgs__msg__ControllerConfig);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    loki_msgs__msg__ControllerConfig * data =
      (loki_msgs__msg__ControllerConfig *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!loki_msgs__msg__ControllerConfig__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          loki_msgs__msg__ControllerConfig__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!loki_msgs__msg__ControllerConfig__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
