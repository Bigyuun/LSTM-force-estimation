// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_interfaces:msg/MotorCommand.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__MSG__DETAIL__MOTOR_COMMAND__STRUCT_H_
#define CUSTOM_INTERFACES__MSG__DETAIL__MOTOR_COMMAND__STRUCT_H_

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
// Member 'target_position'
// Member 'target_velocity_profile'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/MotorCommand in the package custom_interfaces.
/**
  * Motor operating target values
  * builtin_interfaces/Time stamp
 */
typedef struct custom_interfaces__msg__MotorCommand
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__int32__Sequence target_position;
  rosidl_runtime_c__int32__Sequence target_velocity_profile;
} custom_interfaces__msg__MotorCommand;

// Struct for a sequence of custom_interfaces__msg__MotorCommand.
typedef struct custom_interfaces__msg__MotorCommand__Sequence
{
  custom_interfaces__msg__MotorCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interfaces__msg__MotorCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__MOTOR_COMMAND__STRUCT_H_
