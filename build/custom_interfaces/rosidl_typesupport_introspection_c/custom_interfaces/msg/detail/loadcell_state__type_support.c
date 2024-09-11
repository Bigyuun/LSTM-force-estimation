// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from custom_interfaces:msg/LoadcellState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "custom_interfaces/msg/detail/loadcell_state__rosidl_typesupport_introspection_c.h"
#include "custom_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "custom_interfaces/msg/detail/loadcell_state__functions.h"
#include "custom_interfaces/msg/detail/loadcell_state__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `stress`
// Member `output_voltage`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void custom_interfaces__msg__LoadcellState__rosidl_typesupport_introspection_c__LoadcellState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  custom_interfaces__msg__LoadcellState__init(message_memory);
}

void custom_interfaces__msg__LoadcellState__rosidl_typesupport_introspection_c__LoadcellState_fini_function(void * message_memory)
{
  custom_interfaces__msg__LoadcellState__fini(message_memory);
}

size_t custom_interfaces__msg__LoadcellState__rosidl_typesupport_introspection_c__size_function__LoadcellState__stress(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * custom_interfaces__msg__LoadcellState__rosidl_typesupport_introspection_c__get_const_function__LoadcellState__stress(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * custom_interfaces__msg__LoadcellState__rosidl_typesupport_introspection_c__get_function__LoadcellState__stress(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void custom_interfaces__msg__LoadcellState__rosidl_typesupport_introspection_c__fetch_function__LoadcellState__stress(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    custom_interfaces__msg__LoadcellState__rosidl_typesupport_introspection_c__get_const_function__LoadcellState__stress(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void custom_interfaces__msg__LoadcellState__rosidl_typesupport_introspection_c__assign_function__LoadcellState__stress(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    custom_interfaces__msg__LoadcellState__rosidl_typesupport_introspection_c__get_function__LoadcellState__stress(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool custom_interfaces__msg__LoadcellState__rosidl_typesupport_introspection_c__resize_function__LoadcellState__stress(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t custom_interfaces__msg__LoadcellState__rosidl_typesupport_introspection_c__size_function__LoadcellState__output_voltage(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * custom_interfaces__msg__LoadcellState__rosidl_typesupport_introspection_c__get_const_function__LoadcellState__output_voltage(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * custom_interfaces__msg__LoadcellState__rosidl_typesupport_introspection_c__get_function__LoadcellState__output_voltage(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void custom_interfaces__msg__LoadcellState__rosidl_typesupport_introspection_c__fetch_function__LoadcellState__output_voltage(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    custom_interfaces__msg__LoadcellState__rosidl_typesupport_introspection_c__get_const_function__LoadcellState__output_voltage(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void custom_interfaces__msg__LoadcellState__rosidl_typesupport_introspection_c__assign_function__LoadcellState__output_voltage(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    custom_interfaces__msg__LoadcellState__rosidl_typesupport_introspection_c__get_function__LoadcellState__output_voltage(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool custom_interfaces__msg__LoadcellState__rosidl_typesupport_introspection_c__resize_function__LoadcellState__output_voltage(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember custom_interfaces__msg__LoadcellState__rosidl_typesupport_introspection_c__LoadcellState_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_interfaces__msg__LoadcellState, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stress",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_interfaces__msg__LoadcellState, stress),  // bytes offset in struct
    NULL,  // default value
    custom_interfaces__msg__LoadcellState__rosidl_typesupport_introspection_c__size_function__LoadcellState__stress,  // size() function pointer
    custom_interfaces__msg__LoadcellState__rosidl_typesupport_introspection_c__get_const_function__LoadcellState__stress,  // get_const(index) function pointer
    custom_interfaces__msg__LoadcellState__rosidl_typesupport_introspection_c__get_function__LoadcellState__stress,  // get(index) function pointer
    custom_interfaces__msg__LoadcellState__rosidl_typesupport_introspection_c__fetch_function__LoadcellState__stress,  // fetch(index, &value) function pointer
    custom_interfaces__msg__LoadcellState__rosidl_typesupport_introspection_c__assign_function__LoadcellState__stress,  // assign(index, value) function pointer
    custom_interfaces__msg__LoadcellState__rosidl_typesupport_introspection_c__resize_function__LoadcellState__stress  // resize(index) function pointer
  },
  {
    "output_voltage",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_interfaces__msg__LoadcellState, output_voltage),  // bytes offset in struct
    NULL,  // default value
    custom_interfaces__msg__LoadcellState__rosidl_typesupport_introspection_c__size_function__LoadcellState__output_voltage,  // size() function pointer
    custom_interfaces__msg__LoadcellState__rosidl_typesupport_introspection_c__get_const_function__LoadcellState__output_voltage,  // get_const(index) function pointer
    custom_interfaces__msg__LoadcellState__rosidl_typesupport_introspection_c__get_function__LoadcellState__output_voltage,  // get(index) function pointer
    custom_interfaces__msg__LoadcellState__rosidl_typesupport_introspection_c__fetch_function__LoadcellState__output_voltage,  // fetch(index, &value) function pointer
    custom_interfaces__msg__LoadcellState__rosidl_typesupport_introspection_c__assign_function__LoadcellState__output_voltage,  // assign(index, value) function pointer
    custom_interfaces__msg__LoadcellState__rosidl_typesupport_introspection_c__resize_function__LoadcellState__output_voltage  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers custom_interfaces__msg__LoadcellState__rosidl_typesupport_introspection_c__LoadcellState_message_members = {
  "custom_interfaces__msg",  // message namespace
  "LoadcellState",  // message name
  3,  // number of fields
  sizeof(custom_interfaces__msg__LoadcellState),
  custom_interfaces__msg__LoadcellState__rosidl_typesupport_introspection_c__LoadcellState_message_member_array,  // message members
  custom_interfaces__msg__LoadcellState__rosidl_typesupport_introspection_c__LoadcellState_init_function,  // function to initialize message memory (memory has to be allocated)
  custom_interfaces__msg__LoadcellState__rosidl_typesupport_introspection_c__LoadcellState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t custom_interfaces__msg__LoadcellState__rosidl_typesupport_introspection_c__LoadcellState_message_type_support_handle = {
  0,
  &custom_interfaces__msg__LoadcellState__rosidl_typesupport_introspection_c__LoadcellState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_custom_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interfaces, msg, LoadcellState)() {
  custom_interfaces__msg__LoadcellState__rosidl_typesupport_introspection_c__LoadcellState_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!custom_interfaces__msg__LoadcellState__rosidl_typesupport_introspection_c__LoadcellState_message_type_support_handle.typesupport_identifier) {
    custom_interfaces__msg__LoadcellState__rosidl_typesupport_introspection_c__LoadcellState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &custom_interfaces__msg__LoadcellState__rosidl_typesupport_introspection_c__LoadcellState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
