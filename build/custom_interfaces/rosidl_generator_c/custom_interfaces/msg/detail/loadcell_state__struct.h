// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_interfaces:msg/LoadcellState.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__MSG__DETAIL__LOADCELL_STATE__STRUCT_H_
#define CUSTOM_INTERFACES__MSG__DETAIL__LOADCELL_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'stress'
// Member 'output_voltage'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/LoadcellState in the package custom_interfaces.
/**
  * Loadcell data
  * builtin_interfaces/Time stamp
 */
typedef struct custom_interfaces__msg__LoadcellState
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__float__Sequence stress;
  rosidl_runtime_c__float__Sequence output_voltage;
} custom_interfaces__msg__LoadcellState;

// Struct for a sequence of custom_interfaces__msg__LoadcellState.
typedef struct custom_interfaces__msg__LoadcellState__Sequence
{
  custom_interfaces__msg__LoadcellState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interfaces__msg__LoadcellState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__LOADCELL_STATE__STRUCT_H_
