// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from custom_interfaces:srv/MoveToolAngle.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "custom_interfaces/srv/detail/move_tool_angle__struct.h"
#include "custom_interfaces/srv/detail/move_tool_angle__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool custom_interfaces__srv__move_tool_angle__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[61];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("custom_interfaces.srv._move_tool_angle.MoveToolAngle_Request", full_classname_dest, 60) == 0);
  }
  custom_interfaces__srv__MoveToolAngle_Request * ros_message = _ros_message;
  {  // tiltangle
    PyObject * field = PyObject_GetAttrString(_pymsg, "tiltangle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->tiltangle = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // panangle
    PyObject * field = PyObject_GetAttrString(_pymsg, "panangle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->panangle = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // gripangle
    PyObject * field = PyObject_GetAttrString(_pymsg, "gripangle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->gripangle = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "mode");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mode = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * custom_interfaces__srv__move_tool_angle__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MoveToolAngle_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("custom_interfaces.srv._move_tool_angle");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MoveToolAngle_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  custom_interfaces__srv__MoveToolAngle_Request * ros_message = (custom_interfaces__srv__MoveToolAngle_Request *)raw_ros_message;
  {  // tiltangle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->tiltangle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tiltangle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // panangle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->panangle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "panangle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gripangle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->gripangle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gripangle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mode
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->mode);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "custom_interfaces/srv/detail/move_tool_angle__struct.h"
// already included above
// #include "custom_interfaces/srv/detail/move_tool_angle__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool custom_interfaces__srv__move_tool_angle__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[62];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("custom_interfaces.srv._move_tool_angle.MoveToolAngle_Response", full_classname_dest, 61) == 0);
  }
  custom_interfaces__srv__MoveToolAngle_Response * ros_message = _ros_message;
  {  // success
    PyObject * field = PyObject_GetAttrString(_pymsg, "success");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->success = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * custom_interfaces__srv__move_tool_angle__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MoveToolAngle_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("custom_interfaces.srv._move_tool_angle");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MoveToolAngle_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  custom_interfaces__srv__MoveToolAngle_Response * ros_message = (custom_interfaces__srv__MoveToolAngle_Response *)raw_ros_message;
  {  // success
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->success ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "success", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
