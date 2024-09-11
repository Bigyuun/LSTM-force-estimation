# generated from rosidl_generator_py/resource/_idl.py.em
# with input from custom_interfaces:msg/MotorState.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'actual_position'
# Member 'actual_velocity'
# Member 'actual_acceleration'
# Member 'actual_torque'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MotorState(type):
    """Metaclass of message 'MotorState'."""

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
                'custom_interfaces.msg.MotorState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__motor_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__motor_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__motor_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__motor_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__motor_state

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MotorState(metaclass=Metaclass_MotorState):
    """Message class 'MotorState'."""

    __slots__ = [
        '_header',
        '_actual_position',
        '_actual_velocity',
        '_actual_acceleration',
        '_actual_torque',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'actual_position': 'sequence<int32>',
        'actual_velocity': 'sequence<int32>',
        'actual_acceleration': 'sequence<int32>',
        'actual_torque': 'sequence<int32>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.actual_position = array.array('i', kwargs.get('actual_position', []))
        self.actual_velocity = array.array('i', kwargs.get('actual_velocity', []))
        self.actual_acceleration = array.array('i', kwargs.get('actual_acceleration', []))
        self.actual_torque = array.array('i', kwargs.get('actual_torque', []))

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
        if self.header != other.header:
            return False
        if self.actual_position != other.actual_position:
            return False
        if self.actual_velocity != other.actual_velocity:
            return False
        if self.actual_acceleration != other.actual_acceleration:
            return False
        if self.actual_torque != other.actual_torque:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def actual_position(self):
        """Message field 'actual_position'."""
        return self._actual_position

    @actual_position.setter
    def actual_position(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'i', \
                "The 'actual_position' array.array() must have the type code of 'i'"
            self._actual_position = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'actual_position' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._actual_position = array.array('i', value)

    @builtins.property
    def actual_velocity(self):
        """Message field 'actual_velocity'."""
        return self._actual_velocity

    @actual_velocity.setter
    def actual_velocity(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'i', \
                "The 'actual_velocity' array.array() must have the type code of 'i'"
            self._actual_velocity = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'actual_velocity' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._actual_velocity = array.array('i', value)

    @builtins.property
    def actual_acceleration(self):
        """Message field 'actual_acceleration'."""
        return self._actual_acceleration

    @actual_acceleration.setter
    def actual_acceleration(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'i', \
                "The 'actual_acceleration' array.array() must have the type code of 'i'"
            self._actual_acceleration = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'actual_acceleration' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._actual_acceleration = array.array('i', value)

    @builtins.property
    def actual_torque(self):
        """Message field 'actual_torque'."""
        return self._actual_torque

    @actual_torque.setter
    def actual_torque(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'i', \
                "The 'actual_torque' array.array() must have the type code of 'i'"
            self._actual_torque = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'actual_torque' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._actual_torque = array.array('i', value)
