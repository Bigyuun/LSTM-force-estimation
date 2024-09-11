// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from custom_interfaces:msg/MotorCommandCSV.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "custom_interfaces/msg/detail/motor_command_csv__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace custom_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void MotorCommandCSV_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) custom_interfaces::msg::MotorCommandCSV(_init);
}

void MotorCommandCSV_fini_function(void * message_memory)
{
  auto typed_message = static_cast<custom_interfaces::msg::MotorCommandCSV *>(message_memory);
  typed_message->~MotorCommandCSV();
}

size_t size_function__MotorCommandCSV__target_val(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MotorCommandCSV__target_val(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__MotorCommandCSV__target_val(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__MotorCommandCSV__target_val(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int32_t *>(
    get_const_function__MotorCommandCSV__target_val(untyped_member, index));
  auto & value = *reinterpret_cast<int32_t *>(untyped_value);
  value = item;
}

void assign_function__MotorCommandCSV__target_val(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int32_t *>(
    get_function__MotorCommandCSV__target_val(untyped_member, index));
  const auto & value = *reinterpret_cast<const int32_t *>(untyped_value);
  item = value;
}

void resize_function__MotorCommandCSV__target_val(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MotorCommandCSV_message_member_array[2] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_interfaces::msg::MotorCommandCSV, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "target_val",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_interfaces::msg::MotorCommandCSV, target_val),  // bytes offset in struct
    nullptr,  // default value
    size_function__MotorCommandCSV__target_val,  // size() function pointer
    get_const_function__MotorCommandCSV__target_val,  // get_const(index) function pointer
    get_function__MotorCommandCSV__target_val,  // get(index) function pointer
    fetch_function__MotorCommandCSV__target_val,  // fetch(index, &value) function pointer
    assign_function__MotorCommandCSV__target_val,  // assign(index, value) function pointer
    resize_function__MotorCommandCSV__target_val  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MotorCommandCSV_message_members = {
  "custom_interfaces::msg",  // message namespace
  "MotorCommandCSV",  // message name
  2,  // number of fields
  sizeof(custom_interfaces::msg::MotorCommandCSV),
  MotorCommandCSV_message_member_array,  // message members
  MotorCommandCSV_init_function,  // function to initialize message memory (memory has to be allocated)
  MotorCommandCSV_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MotorCommandCSV_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MotorCommandCSV_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace custom_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<custom_interfaces::msg::MotorCommandCSV>()
{
  return &::custom_interfaces::msg::rosidl_typesupport_introspection_cpp::MotorCommandCSV_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, custom_interfaces, msg, MotorCommandCSV)() {
  return &::custom_interfaces::msg::rosidl_typesupport_introspection_cpp::MotorCommandCSV_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
