# generated from rosidl_generator_py/resource/_idl.py.em
# with input from loki_msgs:srv/DeviceCmds.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DeviceCmds_Request(type):
    """Metaclass of message 'DeviceCmds_Request'."""

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
                'loki_msgs.srv.DeviceCmds_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__device_cmds__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__device_cmds__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__device_cmds__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__device_cmds__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__device_cmds__request

            from loki_msgs.msg import CANFrame
            if CANFrame.__class__._TYPE_SUPPORT is None:
                CANFrame.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DeviceCmds_Request(metaclass=Metaclass_DeviceCmds_Request):
    """Message class 'DeviceCmds_Request'."""

    __slots__ = [
        '_can_frame',
    ]

    _fields_and_field_types = {
        'can_frame': 'sequence<loki_msgs/CANFrame>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['loki_msgs', 'msg'], 'CANFrame')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.can_frame = kwargs.get('can_frame', [])

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
        if self.can_frame != other.can_frame:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def can_frame(self):
        """Message field 'can_frame'."""
        return self._can_frame

    @can_frame.setter
    def can_frame(self, value):
        if __debug__:
            from loki_msgs.msg import CANFrame
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
                 all(isinstance(v, CANFrame) for v in value) and
                 True), \
                "The 'can_frame' field must be a set or sequence and each value of type 'CANFrame'"
        self._can_frame = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_DeviceCmds_Response(type):
    """Metaclass of message 'DeviceCmds_Response'."""

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
                'loki_msgs.srv.DeviceCmds_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__device_cmds__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__device_cmds__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__device_cmds__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__device_cmds__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__device_cmds__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DeviceCmds_Response(metaclass=Metaclass_DeviceCmds_Response):
    """Message class 'DeviceCmds_Response'."""

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


class Metaclass_DeviceCmds(type):
    """Metaclass of service 'DeviceCmds'."""

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
                'loki_msgs.srv.DeviceCmds')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__device_cmds

            from loki_msgs.srv import _device_cmds
            if _device_cmds.Metaclass_DeviceCmds_Request._TYPE_SUPPORT is None:
                _device_cmds.Metaclass_DeviceCmds_Request.__import_type_support__()
            if _device_cmds.Metaclass_DeviceCmds_Response._TYPE_SUPPORT is None:
                _device_cmds.Metaclass_DeviceCmds_Response.__import_type_support__()


class DeviceCmds(metaclass=Metaclass_DeviceCmds):
    from loki_msgs.srv._device_cmds import DeviceCmds_Request as Request
    from loki_msgs.srv._device_cmds import DeviceCmds_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
