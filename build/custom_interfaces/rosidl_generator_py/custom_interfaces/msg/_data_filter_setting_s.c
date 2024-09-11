// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from custom_interfaces:msg/DataFilterSetting.idl
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
#include "custom_interfaces/msg/detail/data_filter_setting__struct.h"
#include "custom_interfaces/msg/detail/data_filter_setting__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool custom_interfaces__msg__data_filter_setting__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("custom_interfaces.msg._data_filter_setting.DataFilterSetting", full_classname_dest, 60) == 0);
  }
  custom_interfaces__msg__DataFilterSetting * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // set_lpf
    PyObject * field = PyObject_GetAttrString(_pymsg, "set_lpf");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->set_lpf = (Py_True == field);
    Py_DECREF(field);
  }
  {  // set_maf
    PyObject * field = PyObject_GetAttrString(_pymsg, "set_maf");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->set_maf = (Py_True == field);
    Py_DECREF(field);
  }
  {  // lpf_weight
    PyObject * field = PyObject_GetAttrString(_pymsg, "lpf_weight");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->lpf_weight = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // maf_buffer_size
    PyObject * field = PyObject_GetAttrString(_pymsg, "maf_buffer_size");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->maf_buffer_size = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * custom_interfaces__msg__data_filter_setting__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of DataFilterSetting */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("custom_interfaces.msg._data_filter_setting");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "DataFilterSetting");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  custom_interfaces__msg__DataFilterSetting * ros_message = (custom_interfaces__msg__DataFilterSetting *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // set_lpf
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->set_lpf ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "set_lpf", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // set_maf
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->set_maf ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "set_maf", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lpf_weight
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->lpf_weight);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lpf_weight", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // maf_buffer_size
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->maf_buffer_size);
    {
      int rc = PyObject_SetAttrString(_pymessage, "maf_buffer_size", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
