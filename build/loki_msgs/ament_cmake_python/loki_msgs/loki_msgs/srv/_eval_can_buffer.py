# generated from rosidl_generator_py/resource/_idl.py.em
# with input from loki_msgs:srv/EvalCanBuffer.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_EvalCanBuffer_Request(type):
    """Metaclass of message 'EvalCanBuffer_Request'."""

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
                'loki_msgs.srv.EvalCanBuffer_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__eval_can_buffer__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__eval_can_buffer__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__eval_can_buffer__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__eval_can_buffer__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__eval_can_buffer__request

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


class EvalCanBuffer_Request(metaclass=Metaclass_EvalCanBuffer_Request):
    """Message class 'EvalCanBuffer_Request'."""

    __slots__ = [
        '_can_msgs_base',
        '_can_msgs_device',
    ]

    _fields_and_field_types = {
        'can_msgs_base': 'sequence<loki_msgs/CANFrame>',
        'can_msgs_device': 'sequence<loki_msgs/CANFrame>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['loki_msgs', 'msg'], 'CANFrame')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['loki_msgs', 'msg'], 'CANFrame')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.can_msgs_base = kwargs.get('can_msgs_base', [])
        self.can_msgs_device = kwargs.get('can_msgs_device', [])

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
        if self.can_msgs_base != other.can_msgs_base:
            return False
        if self.can_msgs_device != other.can_msgs_device:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def can_msgs_base(self):
        """Message field 'can_msgs_base'."""
        return self._can_msgs_base

    @can_msgs_base.setter
    def can_msgs_base(self, value):
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
                "The 'can_msgs_base' field must be a set or sequence and each value of type 'CANFrame'"
        self._can_msgs_base = value

    @builtins.property
    def can_msgs_device(self):
        """Message field 'can_msgs_device'."""
        return self._can_msgs_device

    @can_msgs_device.setter
    def can_msgs_device(self, value):
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
                "The 'can_msgs_device' field must be a set or sequence and each value of type 'CANFrame'"
        self._can_msgs_device = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_EvalCanBuffer_Response(type):
    """Metaclass of message 'EvalCanBuffer_Response'."""

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
                'loki_msgs.srv.EvalCanBuffer_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__eval_can_buffer__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__eval_can_buffer__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__eval_can_buffer__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__eval_can_buffer__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__eval_can_buffer__response

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


class EvalCanBuffer_Response(metaclass=Metaclass_EvalCanBuffer_Response):
    """Message class 'EvalCanBuffer_Response'."""

    __slots__ = [
        '_can_msgs_base',
        '_can_msgs_device',
    ]

    _fields_and_field_types = {
        'can_msgs_base': 'sequence<loki_msgs/CANFrame>',
        'can_msgs_device': 'sequence<loki_msgs/CANFrame>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['loki_msgs', 'msg'], 'CANFrame')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['loki_msgs', 'msg'], 'CANFrame')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.can_msgs_base = kwargs.get('can_msgs_base', [])
        self.can_msgs_device = kwargs.get('can_msgs_device', [])

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
        if self.can_msgs_base != other.can_msgs_base:
            return False
        if self.can_msgs_device != other.can_msgs_device:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def can_msgs_base(self):
        """Message field 'can_msgs_base'."""
        return self._can_msgs_base

    @can_msgs_base.setter
    def can_msgs_base(self, value):
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
                "The 'can_msgs_base' field must be a set or sequence and each value of type 'CANFrame'"
        self._can_msgs_base = value

    @builtins.property
    def can_msgs_device(self):
        """Message field 'can_msgs_device'."""
        return self._can_msgs_device

    @can_msgs_device.setter
    def can_msgs_device(self, value):
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
                "The 'can_msgs_device' field must be a set or sequence and each value of type 'CANFrame'"
        self._can_msgs_device = value


class Metaclass_EvalCanBuffer(type):
    """Metaclass of service 'EvalCanBuffer'."""

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
                'loki_msgs.srv.EvalCanBuffer')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__eval_can_buffer

            from loki_msgs.srv import _eval_can_buffer
            if _eval_can_buffer.Metaclass_EvalCanBuffer_Request._TYPE_SUPPORT is None:
                _eval_can_buffer.Metaclass_EvalCanBuffer_Request.__import_type_support__()
            if _eval_can_buffer.Metaclass_EvalCanBuffer_Response._TYPE_SUPPORT is None:
                _eval_can_buffer.Metaclass_EvalCanBuffer_Response.__import_type_support__()


class EvalCanBuffer(metaclass=Metaclass_EvalCanBuffer):
    from loki_msgs.srv._eval_can_buffer import EvalCanBuffer_Request as Request
    from loki_msgs.srv._eval_can_buffer import EvalCanBuffer_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
