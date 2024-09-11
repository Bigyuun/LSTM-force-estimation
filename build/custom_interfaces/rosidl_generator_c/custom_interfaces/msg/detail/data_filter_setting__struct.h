// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_interfaces:msg/DataFilterSetting.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__MSG__DETAIL__DATA_FILTER_SETTING__STRUCT_H_
#define CUSTOM_INTERFACES__MSG__DETAIL__DATA_FILTER_SETTING__STRUCT_H_

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

/// Struct defined in msg/DataFilterSetting in the package custom_interfaces.
/**
  * Data Filter message
  * builtin_interfaces/Time stamp
 */
typedef struct custom_interfaces__msg__DataFilterSetting
{
  std_msgs__msg__Header header;
  bool set_lpf;
  bool set_maf;
  float lpf_weight;
  int32_t maf_buffer_size;
} custom_interfaces__msg__DataFilterSetting;

// Struct for a sequence of custom_interfaces__msg__DataFilterSetting.
typedef struct custom_interfaces__msg__DataFilterSetting__Sequence
{
  custom_interfaces__msg__DataFilterSetting * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interfaces__msg__DataFilterSetting__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__DATA_FILTER_SETTING__STRUCT_H_
