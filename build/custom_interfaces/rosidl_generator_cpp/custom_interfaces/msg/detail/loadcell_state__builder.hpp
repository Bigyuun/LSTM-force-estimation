// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_interfaces:msg/LoadcellState.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__MSG__DETAIL__LOADCELL_STATE__BUILDER_HPP_
#define CUSTOM_INTERFACES__MSG__DETAIL__LOADCELL_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_interfaces/msg/detail/loadcell_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_interfaces
{

namespace msg
{

namespace builder
{

class Init_LoadcellState_output_voltage
{
public:
  explicit Init_LoadcellState_output_voltage(::custom_interfaces::msg::LoadcellState & msg)
  : msg_(msg)
  {}
  ::custom_interfaces::msg::LoadcellState output_voltage(::custom_interfaces::msg::LoadcellState::_output_voltage_type arg)
  {
    msg_.output_voltage = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::msg::LoadcellState msg_;
};

class Init_LoadcellState_stress
{
public:
  explicit Init_LoadcellState_stress(::custom_interfaces::msg::LoadcellState & msg)
  : msg_(msg)
  {}
  Init_LoadcellState_output_voltage stress(::custom_interfaces::msg::LoadcellState::_stress_type arg)
  {
    msg_.stress = std::move(arg);
    return Init_LoadcellState_output_voltage(msg_);
  }

private:
  ::custom_interfaces::msg::LoadcellState msg_;
};

class Init_LoadcellState_header
{
public:
  Init_LoadcellState_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LoadcellState_stress header(::custom_interfaces::msg::LoadcellState::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_LoadcellState_stress(msg_);
  }

private:
  ::custom_interfaces::msg::LoadcellState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::msg::LoadcellState>()
{
  return custom_interfaces::msg::builder::Init_LoadcellState_header();
}

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__LOADCELL_STATE__BUILDER_HPP_
