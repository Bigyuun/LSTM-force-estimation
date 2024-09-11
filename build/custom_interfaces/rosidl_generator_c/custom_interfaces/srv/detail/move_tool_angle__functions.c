// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from custom_interfaces:srv/MoveToolAngle.idl
// generated code does not contain a copyright notice
#include "custom_interfaces/srv/detail/move_tool_angle__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
custom_interfaces__srv__MoveToolAngle_Request__init(custom_interfaces__srv__MoveToolAngle_Request * msg)
{
  if (!msg) {
    return false;
  }
  // tiltangle
  // panangle
  // gripangle
  // mode
  return true;
}

void
custom_interfaces__srv__MoveToolAngle_Request__fini(custom_interfaces__srv__MoveToolAngle_Request * msg)
{
  if (!msg) {
    return;
  }
  // tiltangle
  // panangle
  // gripangle
  // mode
}

bool
custom_interfaces__srv__MoveToolAngle_Request__are_equal(const custom_interfaces__srv__MoveToolAngle_Request * lhs, const custom_interfaces__srv__MoveToolAngle_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // tiltangle
  if (lhs->tiltangle != rhs->tiltangle) {
    return false;
  }
  // panangle
  if (lhs->panangle != rhs->panangle) {
    return false;
  }
  // gripangle
  if (lhs->gripangle != rhs->gripangle) {
    return false;
  }
  // mode
  if (lhs->mode != rhs->mode) {
    return false;
  }
  return true;
}

bool
custom_interfaces__srv__MoveToolAngle_Request__copy(
  const custom_interfaces__srv__MoveToolAngle_Request * input,
  custom_interfaces__srv__MoveToolAngle_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // tiltangle
  output->tiltangle = input->tiltangle;
  // panangle
  output->panangle = input->panangle;
  // gripangle
  output->gripangle = input->gripangle;
  // mode
  output->mode = input->mode;
  return true;
}

custom_interfaces__srv__MoveToolAngle_Request *
custom_interfaces__srv__MoveToolAngle_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_interfaces__srv__MoveToolAngle_Request * msg = (custom_interfaces__srv__MoveToolAngle_Request *)allocator.allocate(sizeof(custom_interfaces__srv__MoveToolAngle_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(custom_interfaces__srv__MoveToolAngle_Request));
  bool success = custom_interfaces__srv__MoveToolAngle_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
custom_interfaces__srv__MoveToolAngle_Request__destroy(custom_interfaces__srv__MoveToolAngle_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    custom_interfaces__srv__MoveToolAngle_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
custom_interfaces__srv__MoveToolAngle_Request__Sequence__init(custom_interfaces__srv__MoveToolAngle_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_interfaces__srv__MoveToolAngle_Request * data = NULL;

  if (size) {
    data = (custom_interfaces__srv__MoveToolAngle_Request *)allocator.zero_allocate(size, sizeof(custom_interfaces__srv__MoveToolAngle_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = custom_interfaces__srv__MoveToolAngle_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        custom_interfaces__srv__MoveToolAngle_Request__fini(&data[i - 1]);
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
custom_interfaces__srv__MoveToolAngle_Request__Sequence__fini(custom_interfaces__srv__MoveToolAngle_Request__Sequence * array)
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
      custom_interfaces__srv__MoveToolAngle_Request__fini(&array->data[i]);
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

custom_interfaces__srv__MoveToolAngle_Request__Sequence *
custom_interfaces__srv__MoveToolAngle_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_interfaces__srv__MoveToolAngle_Request__Sequence * array = (custom_interfaces__srv__MoveToolAngle_Request__Sequence *)allocator.allocate(sizeof(custom_interfaces__srv__MoveToolAngle_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = custom_interfaces__srv__MoveToolAngle_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
custom_interfaces__srv__MoveToolAngle_Request__Sequence__destroy(custom_interfaces__srv__MoveToolAngle_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    custom_interfaces__srv__MoveToolAngle_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
custom_interfaces__srv__MoveToolAngle_Request__Sequence__are_equal(const custom_interfaces__srv__MoveToolAngle_Request__Sequence * lhs, const custom_interfaces__srv__MoveToolAngle_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!custom_interfaces__srv__MoveToolAngle_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
custom_interfaces__srv__MoveToolAngle_Request__Sequence__copy(
  const custom_interfaces__srv__MoveToolAngle_Request__Sequence * input,
  custom_interfaces__srv__MoveToolAngle_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(custom_interfaces__srv__MoveToolAngle_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    custom_interfaces__srv__MoveToolAngle_Request * data =
      (custom_interfaces__srv__MoveToolAngle_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!custom_interfaces__srv__MoveToolAngle_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          custom_interfaces__srv__MoveToolAngle_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!custom_interfaces__srv__MoveToolAngle_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
custom_interfaces__srv__MoveToolAngle_Response__init(custom_interfaces__srv__MoveToolAngle_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
custom_interfaces__srv__MoveToolAngle_Response__fini(custom_interfaces__srv__MoveToolAngle_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
}

bool
custom_interfaces__srv__MoveToolAngle_Response__are_equal(const custom_interfaces__srv__MoveToolAngle_Response * lhs, const custom_interfaces__srv__MoveToolAngle_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  return true;
}

bool
custom_interfaces__srv__MoveToolAngle_Response__copy(
  const custom_interfaces__srv__MoveToolAngle_Response * input,
  custom_interfaces__srv__MoveToolAngle_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  return true;
}

custom_interfaces__srv__MoveToolAngle_Response *
custom_interfaces__srv__MoveToolAngle_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_interfaces__srv__MoveToolAngle_Response * msg = (custom_interfaces__srv__MoveToolAngle_Response *)allocator.allocate(sizeof(custom_interfaces__srv__MoveToolAngle_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(custom_interfaces__srv__MoveToolAngle_Response));
  bool success = custom_interfaces__srv__MoveToolAngle_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
custom_interfaces__srv__MoveToolAngle_Response__destroy(custom_interfaces__srv__MoveToolAngle_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    custom_interfaces__srv__MoveToolAngle_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
custom_interfaces__srv__MoveToolAngle_Response__Sequence__init(custom_interfaces__srv__MoveToolAngle_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_interfaces__srv__MoveToolAngle_Response * data = NULL;

  if (size) {
    data = (custom_interfaces__srv__MoveToolAngle_Response *)allocator.zero_allocate(size, sizeof(custom_interfaces__srv__MoveToolAngle_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = custom_interfaces__srv__MoveToolAngle_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        custom_interfaces__srv__MoveToolAngle_Response__fini(&data[i - 1]);
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
custom_interfaces__srv__MoveToolAngle_Response__Sequence__fini(custom_interfaces__srv__MoveToolAngle_Response__Sequence * array)
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
      custom_interfaces__srv__MoveToolAngle_Response__fini(&array->data[i]);
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

custom_interfaces__srv__MoveToolAngle_Response__Sequence *
custom_interfaces__srv__MoveToolAngle_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_interfaces__srv__MoveToolAngle_Response__Sequence * array = (custom_interfaces__srv__MoveToolAngle_Response__Sequence *)allocator.allocate(sizeof(custom_interfaces__srv__MoveToolAngle_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = custom_interfaces__srv__MoveToolAngle_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
custom_interfaces__srv__MoveToolAngle_Response__Sequence__destroy(custom_interfaces__srv__MoveToolAngle_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    custom_interfaces__srv__MoveToolAngle_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
custom_interfaces__srv__MoveToolAngle_Response__Sequence__are_equal(const custom_interfaces__srv__MoveToolAngle_Response__Sequence * lhs, const custom_interfaces__srv__MoveToolAngle_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!custom_interfaces__srv__MoveToolAngle_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
custom_interfaces__srv__MoveToolAngle_Response__Sequence__copy(
  const custom_interfaces__srv__MoveToolAngle_Response__Sequence * input,
  custom_interfaces__srv__MoveToolAngle_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(custom_interfaces__srv__MoveToolAngle_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    custom_interfaces__srv__MoveToolAngle_Response * data =
      (custom_interfaces__srv__MoveToolAngle_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!custom_interfaces__srv__MoveToolAngle_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          custom_interfaces__srv__MoveToolAngle_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!custom_interfaces__srv__MoveToolAngle_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
