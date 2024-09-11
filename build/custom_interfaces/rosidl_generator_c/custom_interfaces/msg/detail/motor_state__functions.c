// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from custom_interfaces:msg/MotorState.idl
// generated code does not contain a copyright notice
#include "custom_interfaces/msg/detail/motor_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `actual_position`
// Member `actual_velocity`
// Member `actual_acceleration`
// Member `actual_torque`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
custom_interfaces__msg__MotorState__init(custom_interfaces__msg__MotorState * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    custom_interfaces__msg__MotorState__fini(msg);
    return false;
  }
  // actual_position
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->actual_position, 0)) {
    custom_interfaces__msg__MotorState__fini(msg);
    return false;
  }
  // actual_velocity
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->actual_velocity, 0)) {
    custom_interfaces__msg__MotorState__fini(msg);
    return false;
  }
  // actual_acceleration
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->actual_acceleration, 0)) {
    custom_interfaces__msg__MotorState__fini(msg);
    return false;
  }
  // actual_torque
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->actual_torque, 0)) {
    custom_interfaces__msg__MotorState__fini(msg);
    return false;
  }
  return true;
}

void
custom_interfaces__msg__MotorState__fini(custom_interfaces__msg__MotorState * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // actual_position
  rosidl_runtime_c__int32__Sequence__fini(&msg->actual_position);
  // actual_velocity
  rosidl_runtime_c__int32__Sequence__fini(&msg->actual_velocity);
  // actual_acceleration
  rosidl_runtime_c__int32__Sequence__fini(&msg->actual_acceleration);
  // actual_torque
  rosidl_runtime_c__int32__Sequence__fini(&msg->actual_torque);
}

bool
custom_interfaces__msg__MotorState__are_equal(const custom_interfaces__msg__MotorState * lhs, const custom_interfaces__msg__MotorState * rhs)
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
  // actual_position
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->actual_position), &(rhs->actual_position)))
  {
    return false;
  }
  // actual_velocity
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->actual_velocity), &(rhs->actual_velocity)))
  {
    return false;
  }
  // actual_acceleration
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->actual_acceleration), &(rhs->actual_acceleration)))
  {
    return false;
  }
  // actual_torque
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->actual_torque), &(rhs->actual_torque)))
  {
    return false;
  }
  return true;
}

bool
custom_interfaces__msg__MotorState__copy(
  const custom_interfaces__msg__MotorState * input,
  custom_interfaces__msg__MotorState * output)
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
  // actual_position
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->actual_position), &(output->actual_position)))
  {
    return false;
  }
  // actual_velocity
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->actual_velocity), &(output->actual_velocity)))
  {
    return false;
  }
  // actual_acceleration
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->actual_acceleration), &(output->actual_acceleration)))
  {
    return false;
  }
  // actual_torque
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->actual_torque), &(output->actual_torque)))
  {
    return false;
  }
  return true;
}

custom_interfaces__msg__MotorState *
custom_interfaces__msg__MotorState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_interfaces__msg__MotorState * msg = (custom_interfaces__msg__MotorState *)allocator.allocate(sizeof(custom_interfaces__msg__MotorState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(custom_interfaces__msg__MotorState));
  bool success = custom_interfaces__msg__MotorState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
custom_interfaces__msg__MotorState__destroy(custom_interfaces__msg__MotorState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    custom_interfaces__msg__MotorState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
custom_interfaces__msg__MotorState__Sequence__init(custom_interfaces__msg__MotorState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_interfaces__msg__MotorState * data = NULL;

  if (size) {
    data = (custom_interfaces__msg__MotorState *)allocator.zero_allocate(size, sizeof(custom_interfaces__msg__MotorState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = custom_interfaces__msg__MotorState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        custom_interfaces__msg__MotorState__fini(&data[i - 1]);
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
custom_interfaces__msg__MotorState__Sequence__fini(custom_interfaces__msg__MotorState__Sequence * array)
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
      custom_interfaces__msg__MotorState__fini(&array->data[i]);
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

custom_interfaces__msg__MotorState__Sequence *
custom_interfaces__msg__MotorState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_interfaces__msg__MotorState__Sequence * array = (custom_interfaces__msg__MotorState__Sequence *)allocator.allocate(sizeof(custom_interfaces__msg__MotorState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = custom_interfaces__msg__MotorState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
custom_interfaces__msg__MotorState__Sequence__destroy(custom_interfaces__msg__MotorState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    custom_interfaces__msg__MotorState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
custom_interfaces__msg__MotorState__Sequence__are_equal(const custom_interfaces__msg__MotorState__Sequence * lhs, const custom_interfaces__msg__MotorState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!custom_interfaces__msg__MotorState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
custom_interfaces__msg__MotorState__Sequence__copy(
  const custom_interfaces__msg__MotorState__Sequence * input,
  custom_interfaces__msg__MotorState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(custom_interfaces__msg__MotorState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    custom_interfaces__msg__MotorState * data =
      (custom_interfaces__msg__MotorState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!custom_interfaces__msg__MotorState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          custom_interfaces__msg__MotorState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!custom_interfaces__msg__MotorState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
