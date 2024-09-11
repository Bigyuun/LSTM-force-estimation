// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from custom_interfaces:msg/LoadcellState.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__MSG__DETAIL__LOADCELL_STATE__TRAITS_HPP_
#define CUSTOM_INTERFACES__MSG__DETAIL__LOADCELL_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "custom_interfaces/msg/detail/loadcell_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace custom_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const LoadcellState & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: stress
  {
    if (msg.stress.size() == 0) {
      out << "stress: []";
    } else {
      out << "stress: [";
      size_t pending_items = msg.stress.size();
      for (auto item : msg.stress) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: output_voltage
  {
    if (msg.output_voltage.size() == 0) {
      out << "output_voltage: []";
    } else {
      out << "output_voltage: [";
      size_t pending_items = msg.output_voltage.size();
      for (auto item : msg.output_voltage) {
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
  const LoadcellState & msg,
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

  // member: stress
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.stress.size() == 0) {
      out << "stress: []\n";
    } else {
      out << "stress:\n";
      for (auto item : msg.stress) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: output_voltage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.output_voltage.size() == 0) {
      out << "output_voltage: []\n";
    } else {
      out << "output_voltage:\n";
      for (auto item : msg.output_voltage) {
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

inline std::string to_yaml(const LoadcellState & msg, bool use_flow_style = false)
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
  const custom_interfaces::msg::LoadcellState & msg,
  std::ostream & out, size_t indentation = 0)
{
  custom_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use custom_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const custom_interfaces::msg::LoadcellState & msg)
{
  return custom_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<custom_interfaces::msg::LoadcellState>()
{
  return "custom_interfaces::msg::LoadcellState";
}

template<>
inline const char * name<custom_interfaces::msg::LoadcellState>()
{
  return "custom_interfaces/msg/LoadcellState";
}

template<>
struct has_fixed_size<custom_interfaces::msg::LoadcellState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<custom_interfaces::msg::LoadcellState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<custom_interfaces::msg::LoadcellState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__LOADCELL_STATE__TRAITS_HPP_
