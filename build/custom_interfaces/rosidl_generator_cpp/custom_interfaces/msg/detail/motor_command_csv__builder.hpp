// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_interfaces:msg/MotorCommandCSV.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__MSG__DETAIL__MOTOR_COMMAND_CSV__BUILDER_HPP_
#define CUSTOM_INTERFACES__MSG__DETAIL__MOTOR_COMMAND_CSV__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_interfaces/msg/detail/motor_command_csv__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_interfaces
{

namespace msg
{

namespace builder
{

class Init_MotorCommandCSV_target_val
{
public:
  explicit Init_MotorCommandCSV_target_val(::custom_interfaces::msg::MotorCommandCSV & msg)
  : msg_(msg)
  {}
  ::custom_interfaces::msg::MotorCommandCSV target_val(::custom_interfaces::msg::MotorCommandCSV::_target_val_type arg)
  {
    msg_.target_val = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::msg::MotorCommandCSV msg_;
};

class Init_MotorCommandCSV_header
{
public:
  Init_MotorCommandCSV_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorCommandCSV_target_val header(::custom_interfaces::msg::MotorCommandCSV::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_MotorCommandCSV_target_val(msg_);
  }

private:
  ::custom_interfaces::msg::MotorCommandCSV msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::msg::MotorCommandCSV>()
{
  return custom_interfaces::msg::builder::Init_MotorCommandCSV_header();
}

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__MOTOR_COMMAND_CSV__BUILDER_HPP_
