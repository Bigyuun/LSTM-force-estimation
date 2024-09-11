# generated from rosidl_generator_py/resource/_idl.py.em
# with input from custom_interfaces:srv/MoveMotorDirect.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MoveMotorDirect_Request(type):
    """Metaclass of message 'MoveMotorDirect_Request'."""

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
                'custom_interfaces.srv.MoveMotorDirect_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__move_motor_direct__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__move_motor_direct__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__move_motor_direct__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__move_motor_direct__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__move_motor_direct__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MoveMotorDirect_Request(metaclass=Metaclass_MoveMotorDirect_Request):
    """Message class 'MoveMotorDirect_Request'."""

    __slots__ = [
        '_index_motor',
        '_target_position',
        '_target_velocity_profile',
    ]

    _fields_and_field_types = {
        'index_motor': 'int32',
        'target_position': 'int32',
        'target_velocity_profile': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.index_motor = kwargs.get('index_motor', int())
        self.target_position = kwargs.get('target_position', int())
        self.target_velocity_profile = kwargs.get('target_velocity_profile', int())

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
        if self.index_motor != other.index_motor:
            return False
        if self.target_position != other.target_position:
            return False
        if self.target_velocity_profile != other.target_velocity_profile:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def index_motor(self):
        """Message field 'index_motor'."""
        return self._index_motor

    @index_motor.setter
    def index_motor(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'index_motor' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'index_motor' field must be an integer in [-2147483648, 2147483647]"
        self._index_motor = value

    @builtins.property
    def target_position(self):
        """Message field 'target_position'."""
        return self._target_position

    @target_position.setter
    def target_position(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'target_position' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'target_position' field must be an integer in [-2147483648, 2147483647]"
        self._target_position = value

    @builtins.property
    def target_velocity_profile(self):
        """Message field 'target_velocity_profile'."""
        return self._target_velocity_profile

    @target_velocity_profile.setter
    def target_velocity_profile(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'target_velocity_profile' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'target_velocity_profile' field must be an integer in [-2147483648, 2147483647]"
        self._target_velocity_profile = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_MoveMotorDirect_Response(type):
    """Metaclass of message 'MoveMotorDirect_Response'."""

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
                'custom_interfaces.srv.MoveMotorDirect_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__move_motor_direct__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__move_motor_direct__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__move_motor_direct__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__move_motor_direct__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__move_motor_direct__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MoveMotorDirect_Response(metaclass=Metaclass_MoveMotorDirect_Response):
    """Message class 'MoveMotorDirect_Response'."""

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


class Metaclass_MoveMotorDirect(type):
    """Metaclass of service 'MoveMotorDirect'."""

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
                'custom_interfaces.srv.MoveMotorDirect')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__move_motor_direct

            from custom_interfaces.srv import _move_motor_direct
            if _move_motor_direct.Metaclass_MoveMotorDirect_Request._TYPE_SUPPORT is None:
                _move_motor_direct.Metaclass_MoveMotorDirect_Request.__import_type_support__()
            if _move_motor_direct.Metaclass_MoveMotorDirect_Response._TYPE_SUPPORT is None:
                _move_motor_direct.Metaclass_MoveMotorDirect_Response.__import_type_support__()


class MoveMotorDirect(metaclass=Metaclass_MoveMotorDirect):
    from custom_interfaces.srv._move_motor_direct import MoveMotorDirect_Request as Request
    from custom_interfaces.srv._move_motor_direct import MoveMotorDirect_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
