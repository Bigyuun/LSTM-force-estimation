// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from custom_interfaces:msg/MotorState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "custom_interfaces/msg/detail/motor_state__rosidl_typesupport_introspection_c.h"
#include "custom_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "custom_interfaces/msg/detail/motor_state__functions.h"
#include "custom_interfaces/msg/detail/motor_state__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `actual_position`
// Member `actual_velocity`
// Member `actual_acceleration`
// Member `actual_torque`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void custom_interfaces__msg__MotorState__rosidl_typesupport_introspection_c__MotorState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  custom_interfaces__msg__MotorState__init(message_memory);
}

void custom_interfaces__msg__MotorState__rosidl_typesupport_introspection_c__MotorState_fini_function(void * message_memory)
{
  custom_interfaces__msg__MotorState__fini(message_memory);
}

size_t custom_interfaces__msg__MotorState__rosidl_typesupport_introspection_c__size_function__MotorState__actual_position(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * custom_interfaces__msg__MotorState__rosidl_typesupport_introspection_c__get_const_function__MotorState__actual_position(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * custom_interfaces__msg__MotorState__rosidl_typesupport_introspection_c__get_function__MotorState__actual_position(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void custom_interfaces__msg__MotorState__rosidl_typesupport_introspection_c__fetch_function__MotorState__actual_position(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    custom_interfaces__msg__MotorState__rosidl_typesupport_introspection_c__get_const_function__MotorState__actual_position(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void custom_interfaces__msg__MotorState__rosidl_typesupport_introspection_c__assign_function__MotorState__actual_position(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    custom_interfaces__msg__MotorState__rosidl_typesupport_introspection_c__get_function__MotorState__actual_position(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool custom_interfaces__msg__MotorState__rosidl_typesupport_introspection_c__resize_function__MotorState__actual_position(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

size_t custom_interfaces__msg__MotorState__rosidl_typesupport_introspection_c__size_function__MotorState__actual_velocity(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * custom_interfaces__msg__MotorState__rosidl_typesupport_introspection_c__get_const_function__MotorState__actual_velocity(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * custom_interfaces__msg__MotorState__rosidl_typesupport_introspection_c__get_function__MotorState__actual_velocity(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void custom_interfaces__msg__MotorState__rosidl_typesupport_introspection_c__fetch_function__MotorState__actual_velocity(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    custom_interfaces__msg__MotorState__rosidl_typesupport_introspection_c__get_const_function__MotorState__actual_velocity(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void custom_interfaces__msg__MotorState__rosidl_typesupport_introspection_c__assign_function__MotorState__actual_velocity(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    custom_interfaces__msg__MotorState__rosidl_typesupport_introspection_c__get_function__MotorState__actual_velocity(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool custom_interfaces__msg__MotorState__rosidl_typesupport_introspection_c__resize_function__MotorState__actual_velocity(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

size_t custom_interfaces__msg__MotorState__rosidl_typesupport_introspection_c__size_function__MotorState__actual_acceleration(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * custom_interfaces__msg__MotorState__rosidl_typesupport_introspection_c__get_const_function__MotorState__actual_acceleration(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * custom_interfaces__msg__MotorState__rosidl_typesupport_introspection_c__get_function__MotorState__actual_acceleration(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void custom_interfaces__msg__MotorState__rosidl_typesupport_introspection_c__fetch_function__MotorState__actual_acceleration(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    custom_interfaces__msg__MotorState__rosidl_typesupport_introspection_c__get_const_function__MotorState__actual_acceleration(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void custom_interfaces__msg__MotorState__rosidl_typesupport_introspection_c__assign_function__MotorState__actual_acceleration(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    custom_interfaces__msg__MotorState__rosidl_typesupport_introspection_c__get_function__MotorState__actual_acceleration(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool custom_interfaces__msg__MotorState__rosidl_typesupport_introspection_c__resize_function__MotorState__actual_acceleration(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

size_t custom_interfaces__msg__MotorState__rosidl_typesupport_introspection_c__size_function__MotorState__actual_torque(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * custom_interfaces__msg__MotorState__rosidl_typesupport_introspection_c__get_const_function__MotorState__actual_torque(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * custom_interfaces__msg__MotorState__rosidl_typesupport_introspection_c__get_function__MotorState__actual_torque(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void custom_interfaces__msg__MotorState__rosidl_typesupport_introspection_c__fetch_function__MotorState__actual_torque(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    custom_interfaces__msg__MotorState__rosidl_typesupport_introspection_c__get_const_function__MotorState__actual_torque(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void custom_interfaces__msg__MotorState__rosidl_typesupport_introspection_c__assign_function__MotorState__actual_torque(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    custom_interfaces__msg__MotorState__rosidl_typesupport_introspection_c__get_function__MotorState__actual_torque(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool custom_interfaces__msg__MotorState__rosidl_typesupport_introspection_c__resize_function__MotorState__actual_torque(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember custom_interfaces__msg__MotorState__rosidl_typesupport_introspection_c__MotorState_message_member_array[5] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_interfaces__msg__MotorState, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "actual_position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_interfaces__msg__MotorState, actual_position),  // bytes offset in struct
    NULL,  // default value
    custom_interfaces__msg__MotorState__rosidl_typesupport_introspection_c__size_function__MotorState__actual_position,  // size() function pointer
    custom_interfaces__msg__MotorState__rosidl_typesupport_introspection_c__get_const_function__MotorState__actual_position,  // get_const(index) function pointer
    custom_interfaces__msg__MotorState__rosidl_typesupport_introspection_c__get_function__MotorState__actual_position,  // get(index) function pointer
    custom_interfaces__msg__MotorState__rosidl_typesupport_introspection_c__fetch_function__MotorState__actual_position,  // fetch(index, &value) function pointer
    custom_interfaces__msg__MotorState__rosidl_typesupport_introspection_c__assign_function__MotorState__actual_position,  // assign(index, value) function pointer
    custom_interfaces__msg__MotorState__rosidl_typesupport_introspection_c__resize_function__MotorState__actual_position  // resize(index) function pointer
  },
  {
    "actual_velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_interfaces__msg__MotorState, actual_velocity),  // bytes offset in struct
    NULL,  // default value
    custom_interfaces__msg__MotorState__rosidl_typesupport_introspection_c__size_function__MotorState__actual_velocity,  // size() function pointer
    custom_interfaces__msg__MotorState__rosidl_typesupport_introspection_c__get_const_function__MotorState__actual_velocity,  // get_const(index) function pointer
    custom_interfaces__msg__MotorState__rosidl_typesupport_introspection_c__get_function__MotorState__actual_velocity,  // get(index) function pointer
    custom_interfaces__msg__MotorState__rosidl_typesupport_introspection_c__fetch_function__MotorState__actual_velocity,  // fetch(index, &value) function pointer
    custom_interfaces__msg__MotorState__rosidl_typesupport_introspection_c__assign_function__MotorState__actual_velocity,  // assign(index, value) function pointer
    custom_interfaces__msg__MotorState__rosidl_typesupport_introspection_c__resize_function__MotorState__actual_velocity  // resize(index) function pointer
  },
  {
    "actual_acceleration",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_interfaces__msg__MotorState, actual_acceleration),  // bytes offset in struct
    NULL,  // default value
    custom_interfaces__msg__MotorState__rosidl_typesupport_introspection_c__size_function__MotorState__actual_acceleration,  // size() function pointer
    custom_interfaces__msg__MotorState__rosidl_typesupport_introspection_c__get_const_function__MotorState__actual_acceleration,  // get_const(index) function pointer
    custom_interfaces__msg__MotorState__rosidl_typesupport_introspection_c__get_function__MotorState__actual_acceleration,  // get(index) function pointer
    custom_interfaces__msg__MotorState__rosidl_typesupport_introspection_c__fetch_function__MotorState__actual_acceleration,  // fetch(index, &value) function pointer
    custom_interfaces__msg__MotorState__rosidl_typesupport_introspection_c__assign_function__MotorState__actual_acceleration,  // assign(index, value) function pointer
    custom_interfaces__msg__MotorState__rosidl_typesupport_introspection_c__resize_function__MotorState__actual_acceleration  // resize(index) function pointer
  },
  {
    "actual_torque",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_interfaces__msg__MotorState, actual_torque),  // bytes offset in struct
    NULL,  // default value
    custom_interfaces__msg__MotorState__rosidl_typesupport_introspection_c__size_function__MotorState__actual_torque,  // size() function pointer
    custom_interfaces__msg__MotorState__rosidl_typesupport_introspection_c__get_const_function__MotorState__actual_torque,  // get_const(index) function pointer
    custom_interfaces__msg__MotorState__rosidl_typesupport_introspection_c__get_function__MotorState__actual_torque,  // get(index) function pointer
    custom_interfaces__msg__MotorState__rosidl_typesupport_introspection_c__fetch_function__MotorState__actual_torque,  // fetch(index, &value) function pointer
    custom_interfaces__msg__MotorState__rosidl_typesupport_introspection_c__assign_function__MotorState__actual_torque,  // assign(index, value) function pointer
    custom_interfaces__msg__MotorState__rosidl_typesupport_introspection_c__resize_function__MotorState__actual_torque  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers custom_interfaces__msg__MotorState__rosidl_typesupport_introspection_c__MotorState_message_members = {
  "custom_interfaces__msg",  // message namespace
  "MotorState",  // message name
  5,  // number of fields
  sizeof(custom_interfaces__msg__MotorState),
  custom_interfaces__msg__MotorState__rosidl_typesupport_introspection_c__MotorState_message_member_array,  // message members
  custom_interfaces__msg__MotorState__rosidl_typesupport_introspection_c__MotorState_init_function,  // function to initialize message memory (memory has to be allocated)
  custom_interfaces__msg__MotorState__rosidl_typesupport_introspection_c__MotorState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t custom_interfaces__msg__MotorState__rosidl_typesupport_introspection_c__MotorState_message_type_support_handle = {
  0,
  &custom_interfaces__msg__MotorState__rosidl_typesupport_introspection_c__MotorState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_custom_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interfaces, msg, MotorState)() {
  custom_interfaces__msg__MotorState__rosidl_typesupport_introspection_c__MotorState_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!custom_interfaces__msg__MotorState__rosidl_typesupport_introspection_c__MotorState_message_type_support_handle.typesupport_identifier) {
    custom_interfaces__msg__MotorState__rosidl_typesupport_introspection_c__MotorState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &custom_interfaces__msg__MotorState__rosidl_typesupport_introspection_c__MotorState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
