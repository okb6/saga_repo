# generated from rosidl_generator_py/resource/_idl.py.em
# with input from loki_msgs:srv/SimDrive.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SimDrive_Request(type):
    """Metaclass of message 'SimDrive_Request'."""

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
                'loki_msgs.srv.SimDrive_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__sim_drive__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__sim_drive__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__sim_drive__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__sim_drive__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__sim_drive__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SimDrive_Request(metaclass=Metaclass_SimDrive_Request):
    """Message class 'SimDrive_Request'."""

    __slots__ = [
        '_commands',
    ]

    _fields_and_field_types = {
        'commands': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.commands = kwargs.get('commands', int())

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
        if self.commands != other.commands:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def commands(self):
        """Message field 'commands'."""
        return self._commands

    @commands.setter
    def commands(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'commands' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'commands' field must be an integer in [-2147483648, 2147483647]"
        self._commands = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_SimDrive_Response(type):
    """Metaclass of message 'SimDrive_Response'."""

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
                'loki_msgs.srv.SimDrive_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__sim_drive__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__sim_drive__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__sim_drive__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__sim_drive__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__sim_drive__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SimDrive_Response(metaclass=Metaclass_SimDrive_Response):
    """Message class 'SimDrive_Response'."""

    __slots__ = [
    ]

    _fields_and_field_types = {
    }

    SLOT_TYPES = (
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))

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
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)


class Metaclass_SimDrive(type):
    """Metaclass of service 'SimDrive'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('loki_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'loki_msgs.srv.SimDrive')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__sim_drive

            from loki_msgs.srv import _sim_drive
            if _sim_drive.Metaclass_SimDrive_Request._TYPE_SUPPORT is None:
                _sim_drive.Metaclass_SimDrive_Request.__import_type_support__()
            if _sim_drive.Metaclass_SimDrive_Response._TYPE_SUPPORT is None:
                _sim_drive.Metaclass_SimDrive_Response.__import_type_support__()


class SimDrive(metaclass=Metaclass_SimDrive):
    from loki_msgs.srv._sim_drive import SimDrive_Request as Request
    from loki_msgs.srv._sim_drive import SimDrive_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
