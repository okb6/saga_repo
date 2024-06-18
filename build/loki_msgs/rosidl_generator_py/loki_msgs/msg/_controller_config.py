# generated from rosidl_generator_py/resource/_idl.py.em
# with input from loki_msgs:msg/ControllerConfig.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ControllerConfig(type):
    """Metaclass of message 'ControllerConfig'."""

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
            module = import_type_support('loki_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'loki_msgs.msg.ControllerConfig')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__controller_config
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__controller_config
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__controller_config
            cls._TYPE_SUPPORT = module.type_support_msg__msg__controller_config
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__controller_config

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ControllerConfig(metaclass=Metaclass_ControllerConfig):
    """Message class 'ControllerConfig'."""

    __slots__ = [
        '_name',
        '_type',
        '_version',
        '_can_id',
        '_drive_direction',
        '_home_speed',
        '_home_count',
    ]

    _fields_and_field_types = {
        'name': 'string',
        'type': 'string',
        'version': 'string',
        'can_id': 'int16',
        'drive_direction': 'int8',
        'home_speed': 'int16',
        'home_count': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.name = kwargs.get('name', str())
        self.type = kwargs.get('type', str())
        self.version = kwargs.get('version', str())
        self.can_id = kwargs.get('can_id', int())
        self.drive_direction = kwargs.get('drive_direction', int())
        self.home_speed = kwargs.get('home_speed', int())
        self.home_count = kwargs.get('home_count', int())

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
        if self.name != other.name:
            return False
        if self.type != other.type:
            return False
        if self.version != other.version:
            return False
        if self.can_id != other.can_id:
            return False
        if self.drive_direction != other.drive_direction:
            return False
        if self.home_speed != other.home_speed:
            return False
        if self.home_count != other.home_count:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def name(self):
        """Message field 'name'."""
        return self._name

    @name.setter
    def name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'name' field must be of type 'str'"
        self._name = value

    @builtins.property  # noqa: A003
    def type(self):  # noqa: A003
        """Message field 'type'."""
        return self._type

    @type.setter  # noqa: A003
    def type(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'type' field must be of type 'str'"
        self._type = value

    @builtins.property
    def version(self):
        """Message field 'version'."""
        return self._version

    @version.setter
    def version(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'version' field must be of type 'str'"
        self._version = value

    @builtins.property
    def can_id(self):
        """Message field 'can_id'."""
        return self._can_id

    @can_id.setter
    def can_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'can_id' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'can_id' field must be an integer in [-32768, 32767]"
        self._can_id = value

    @builtins.property
    def drive_direction(self):
        """Message field 'drive_direction'."""
        return self._drive_direction

    @drive_direction.setter
    def drive_direction(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'drive_direction' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'drive_direction' field must be an integer in [-128, 127]"
        self._drive_direction = value

    @builtins.property
    def home_speed(self):
        """Message field 'home_speed'."""
        return self._home_speed

    @home_speed.setter
    def home_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'home_speed' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'home_speed' field must be an integer in [-32768, 32767]"
        self._home_speed = value

    @builtins.property
    def home_count(self):
        """Message field 'home_count'."""
        return self._home_count

    @home_count.setter
    def home_count(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'home_count' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'home_count' field must be an integer in [-2147483648, 2147483647]"
        self._home_count = value
