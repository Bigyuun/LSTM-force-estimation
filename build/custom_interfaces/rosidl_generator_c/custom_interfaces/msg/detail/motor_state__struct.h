// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_interfaces:msg/MotorState.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__MSG__DETAIL__MOTOR_STATE__STRUCT_H_
#define CUSTOM_INTERFACES__MSG__DETAIL__MOTOR_STATE__STRUCT_H_

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
// Member 'actual_position'
// Member 'actual_velocity'
// Member 'actual_acceleration'
// Member 'actual_torque'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/MotorState in the package custom_interfaces.
/**
  * Motor state values
  * builtin_interfaces/Time stamp
 */
typedef struct custom_interfaces__msg__MotorState
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__int32__Sequence actual_position;
  rosidl_runtime_c__int32__Sequence actual_velocity;
  rosidl_runtime_c__int32__Sequence actual_acceleration;
  rosidl_runtime_c__int32__Sequence actual_torque;
} custom_interfaces__msg__MotorState;

// Struct for a sequence of custom_interfaces__msg__MotorState.
typedef struct custom_interfaces__msg__MotorState__Sequence
{
  custom_interfaces__msg__MotorState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interfaces__msg__MotorState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__MOTOR_STATE__STRUCT_H_
