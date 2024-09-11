// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from custom_interfaces:msg/MotorState.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__MSG__DETAIL__MOTOR_STATE__FUNCTIONS_H_
#define CUSTOM_INTERFACES__MSG__DETAIL__MOTOR_STATE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "custom_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "custom_interfaces/msg/detail/motor_state__struct.h"

/// Initialize msg/MotorState message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * custom_interfaces__msg__MotorState
 * )) before or use
 * custom_interfaces__msg__MotorState__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_interfaces
bool
custom_interfaces__msg__MotorState__init(custom_interfaces__msg__MotorState * msg);

/// Finalize msg/MotorState message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_interfaces
void
custom_interfaces__msg__MotorState__fini(custom_interfaces__msg__MotorState * msg);

/// Create msg/MotorState message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * custom_interfaces__msg__MotorState__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_interfaces
custom_interfaces__msg__MotorState *
custom_interfaces__msg__MotorState__create();

/// Destroy msg/MotorState message.
/**
 * It calls
 * custom_interfaces__msg__MotorState__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_interfaces
void
custom_interfaces__msg__MotorState__destroy(custom_interfaces__msg__MotorState * msg);

/// Check for msg/MotorState message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_interfaces
bool
custom_interfaces__msg__MotorState__are_equal(const custom_interfaces__msg__MotorState * lhs, const custom_interfaces__msg__MotorState * rhs);

/// Copy a msg/MotorState message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_interfaces
bool
custom_interfaces__msg__MotorState__copy(
  const custom_interfaces__msg__MotorState * input,
  custom_interfaces__msg__MotorState * output);

/// Initialize array of msg/MotorState messages.
/**
 * It allocates the memory for the number of elements and calls
 * custom_interfaces__msg__MotorState__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_interfaces
bool
custom_interfaces__msg__MotorState__Sequence__init(custom_interfaces__msg__MotorState__Sequence * array, size_t size);

/// Finalize array of msg/MotorState messages.
/**
 * It calls
 * custom_interfaces__msg__MotorState__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_interfaces
void
custom_interfaces__msg__MotorState__Sequence__fini(custom_interfaces__msg__MotorState__Sequence * array);

/// Create array of msg/MotorState messages.
/**
 * It allocates the memory for the array and calls
 * custom_interfaces__msg__MotorState__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_interfaces
custom_interfaces__msg__MotorState__Sequence *
custom_interfaces__msg__MotorState__Sequence__create(size_t size);

/// Destroy array of msg/MotorState messages.
/**
 * It calls
 * custom_interfaces__msg__MotorState__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_interfaces
void
custom_interfaces__msg__MotorState__Sequence__destroy(custom_interfaces__msg__MotorState__Sequence * array);

/// Check for msg/MotorState message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_interfaces
bool
custom_interfaces__msg__MotorState__Sequence__are_equal(const custom_interfaces__msg__MotorState__Sequence * lhs, const custom_interfaces__msg__MotorState__Sequence * rhs);

/// Copy an array of msg/MotorState messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_interfaces
bool
custom_interfaces__msg__MotorState__Sequence__copy(
  const custom_interfaces__msg__MotorState__Sequence * input,
  custom_interfaces__msg__MotorState__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__MOTOR_STATE__FUNCTIONS_H_
