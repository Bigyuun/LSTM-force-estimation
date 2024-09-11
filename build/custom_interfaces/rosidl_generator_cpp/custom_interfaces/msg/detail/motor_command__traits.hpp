// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from custom_interfaces:msg/MotorCommand.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__MSG__DETAIL__MOTOR_COMMAND__TRAITS_HPP_
#define CUSTOM_INTERFACES__MSG__DETAIL__MOTOR_COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "custom_interfaces/msg/detail/motor_command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace custom_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const MotorCommand & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: target_position
  {
    if (msg.target_position.size() == 0) {
      out << "target_position: []";
    } else {
      out << "target_position: [";
      size_t pending_items = msg.target_position.size();
      for (auto item : msg.target_position) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: target_velocity_profile
  {
    if (msg.target_velocity_profile.size() == 0) {
      out << "target_velocity_profile: []";
    } else {
      out << "target_velocity_profile: [";
      size_t pending_items = msg.target_velocity_profile.size();
      for (auto item : msg.target_velocity_profile) {
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
  const MotorCommand & msg,
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

  // member: target_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.target_position.size() == 0) {
      out << "target_position: []\n";
    } else {
      out << "target_position:\n";
      for (auto item : msg.target_position) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: target_velocity_profile
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.target_velocity_profile.size() == 0) {
      out << "target_velocity_profile: []\n";
    } else {
      out << "target_velocity_profile:\n";
      for (auto item : msg.target_velocity_profile) {
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

inline std::string to_yaml(const MotorCommand & msg, bool use_flow_style = false)
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
  const custom_interfaces::msg::MotorCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  custom_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use custom_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const custom_interfaces::msg::MotorCommand & msg)
{
  return custom_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<custom_interfaces::msg::MotorCommand>()
{
  return "custom_interfaces::msg::MotorCommand";
}

template<>
inline const char * name<custom_interfaces::msg::MotorCommand>()
{
  return "custom_interfaces/msg/MotorCommand";
}

template<>
struct has_fixed_size<custom_interfaces::msg::MotorCommand>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<custom_interfaces::msg::MotorCommand>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<custom_interfaces::msg::MotorCommand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__MOTOR_COMMAND__TRAITS_HPP_
