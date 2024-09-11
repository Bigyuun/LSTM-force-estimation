// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from custom_interfaces:msg/MotorCommandCSV.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__MSG__DETAIL__MOTOR_COMMAND_CSV__TRAITS_HPP_
#define CUSTOM_INTERFACES__MSG__DETAIL__MOTOR_COMMAND_CSV__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "custom_interfaces/msg/detail/motor_command_csv__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace custom_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const MotorCommandCSV & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: target_val
  {
    if (msg.target_val.size() == 0) {
      out << "target_val: []";
    } else {
      out << "target_val: [";
      size_t pending_items = msg.target_val.size();
      for (auto item : msg.target_val) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MotorCommandCSV & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: target_val
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.target_val.size() == 0) {
      out << "target_val: []\n";
    } else {
      out << "target_val:\n";
      for (auto item : msg.target_val) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MotorCommandCSV & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace custom_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use custom_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const custom_interfaces::msg::MotorCommandCSV & msg,
  std::ostream & out, size_t indentation = 0)
{
  custom_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use custom_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const custom_interfaces::msg::MotorCommandCSV & msg)
{
  return custom_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<custom_interfaces::msg::MotorCommandCSV>()
{
  return "custom_interfaces::msg::MotorCommandCSV";
}

template<>
inline const char * name<custom_interfaces::msg::MotorCommandCSV>()
{
  return "custom_interfaces/msg/MotorCommandCSV";
}

template<>
struct has_fixed_size<custom_interfaces::msg::MotorCommandCSV>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<custom_interfaces::msg::MotorCommandCSV>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<custom_interfaces::msg::MotorCommandCSV>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__MOTOR_COMMAND_CSV__TRAITS_HPP_
