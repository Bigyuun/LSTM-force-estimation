# generated from rosidl_generator_py/resource/_idl.py.em
# with input from custom_interfaces:srv/MoveToolAngle.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MoveToolAngle_Request(type):
    """Metaclass of message 'MoveToolAngle_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('custom_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'custom_interfaces.srv.MoveToolAngle_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__move_tool_angle__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__move_tool_angle__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__move_tool_angle__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__move_tool_angle__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__move_tool_angle__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MoveToolAngle_Request(metaclass=Metaclass_MoveToolAngle_Request):
    """Message class 'MoveToolAngle_Request'."""

    __slots__ = [
        '_tiltangle',
        '_panangle',
        '_gripangle',
        '_mode',
    ]

    _fields_and_field_types = {
        'tiltangle': 'double',
        'panangle': 'double',
        'gripangle': 'double',
        'mode': 'int8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.tiltangle = kwargs.get('tiltangle', float())
        self.panangle = kwargs.get('panangle', float())
        self.gripangle = kwargs.get('gripangle', float())
        self.mode = kwargs.get('mode', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.tiltangle != other.tiltangle:
            return False
        if self.panangle != other.panangle:
            return False
        if self.gripangle != other.gripangle:
            return False
        if self.mode != other.mode:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def tiltangle(self):
        """Message field 'tiltangle'."""
        return self._tiltangle

    @tiltangle.setter
    def tiltangle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'tiltangle' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'tiltangle' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._tiltangle = value

    @builtins.property
    def panangle(self):
        """Message field 'panangle'."""
        return self._panangle

    @panangle.setter
    def panangle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'panangle' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'panangle' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._panangle = value

    @builtins.property
    def gripangle(self):
        """Message field 'gripangle'."""
        return self._gripangle

    @gripangle.setter
    def gripangle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'gripangle' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'gripangle' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._gripangle = value

    @builtins.property
    def mode(self):
        """Message field 'mode'."""
        return self._mode

    @mode.setter
    def mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mode' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'mode' field must be an integer in [-128, 127]"
        self._mode = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_MoveToolAngle_Response(type):
    """Metaclass of message 'MoveToolAngle_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('custom_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'custom_interfaces.srv.MoveToolAngle_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__move_tool_angle__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__move_tool_angle__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__move_tool_angle__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__move_tool_angle__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__move_tool_angle__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MoveToolAngle_Response(metaclass=Metaclass_MoveToolAngle_Response):
    """Message class 'MoveToolAngle_Response'."""

    __slots__ = [
        '_success',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.success != other.success:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value


class Metaclass_MoveToolAngle(type):
    """Metaclass of service 'MoveToolAngle'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('custom_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'custom_interfaces.srv.MoveToolAngle')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__move_tool_angle

            from custom_interfaces.srv import _move_tool_angle
            if _move_tool_angle.Metaclass_MoveToolAngle_Request._TYPE_SUPPORT is None:
                _move_tool_angle.Metaclass_MoveToolAngle_Request.__import_type_support__()
            if _move_tool_angle.Metaclass_MoveToolAngle_Response._TYPE_SUPPORT is None:
                _move_tool_angle.Metaclass_MoveToolAngle_Response.__import_type_support__()


class MoveToolAngle(metaclass=Metaclass_MoveToolAngle):
    from custom_interfaces.srv._move_tool_angle import MoveToolAngle_Request as Request
    from custom_interfaces.srv._move_tool_angle import MoveToolAngle_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
