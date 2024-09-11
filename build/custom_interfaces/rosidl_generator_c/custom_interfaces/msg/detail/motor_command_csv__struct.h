// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_interfaces:msg/MotorCommandCSV.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__MSG__DETAIL__MOTOR_COMMAND_CSV__STRUCT_H_
#define CUSTOM_INTERFACES__MSG__DETAIL__MOTOR_COMMAND_CSV__STRUCT_H_

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
// Member 'target_val'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/MotorCommandCSV in the package custom_interfaces.
/**
  * Motor operating target values
  * builtin_interfaces/Time stamp
 */
typedef struct custom_interfaces__msg__MotorCommandCSV
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__int32__Sequence target_val;
} custom_interfaces__msg__MotorCommandCSV;

// Struct for a sequence of custom_interfaces__msg__MotorCommandCSV.
typedef struct custom_interfaces__msg__MotorCommandCSV__Sequence
{
  custom_interfaces__msg__MotorCommandCSV * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interfaces__msg__MotorCommandCSV__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__MOTOR_COMMAND_CSV__STRUCT_H_
