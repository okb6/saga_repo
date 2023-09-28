# generated from rosidl_generator_py/resource/_idl.py.em
# with input from loki_msgs:srv/InitPltf.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_InitPltf_Request(type):
    """Metaclass of message 'InitPltf_Request'."""

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
                'loki_msgs.srv.InitPltf_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__init_pltf__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__init_pltf__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__init_pltf__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__init_pltf__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__init_pltf__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class InitPltf_Request(metaclass=Metaclass_InitPltf_Request):
    """Message class 'InitPltf_Request'."""

    __slots__ = [
        '_can_interface_type',
        '_can_interface_name',
    ]

    _fields_and_field_types = {
        'can_interface_type': 'int32',
        'can_interface_name': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.can_interface_type = kwargs.get('can_interface_type', int())
        self.can_interface_name = kwargs.get('can_interface_name', str())

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
        if self.can_interface_type != other.can_interface_type:
            return False
        if self.can_interface_name != other.can_interface_name:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def can_interface_type(self):
        """Message field 'can_interface_type'."""
        return self._can_interface_type

    @can_interface_type.setter
    def can_interface_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'can_interface_type' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'can_interface_type' field must be an integer in [-2147483648, 2147483647]"
        self._can_interface_type = value

    @builtins.property
    def can_interface_name(self):
        """Message field 'can_interface_name'."""
        return self._can_interface_name

    @can_interface_name.setter
    def can_interface_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'can_interface_name' field must be of type 'str'"
        self._can_interface_name = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_InitPltf_Response(type):
    """Metaclass of message 'InitPltf_Response'."""

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
                'loki_msgs.srv.InitPltf_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__init_pltf__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__init_pltf__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__init_pltf__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__init_pltf__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__init_pltf__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class InitPltf_Response(metaclass=Metaclass_InitPltf_Response):
    """Message class 'InitPltf_Response'."""

    __slots__ = [
        '_initpltf',
    ]

    _fields_and_field_types = {
        'initpltf': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.initpltf = kwargs.get('initpltf', bool())

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
        if self.initpltf != other.initpltf:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def initpltf(self):
        """Message field 'initpltf'."""
        return self._initpltf

    @initpltf.setter
    def initpltf(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'initpltf' field must be of type 'bool'"
        self._initpltf = value


class Metaclass_InitPltf(type):
    """Metaclass of service 'InitPltf'."""

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
                'loki_msgs.srv.InitPltf')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__init_pltf

            from loki_msgs.srv import _init_pltf
            if _init_pltf.Metaclass_InitPltf_Request._TYPE_SUPPORT is None:
                _init_pltf.Metaclass_InitPltf_Request.__import_type_support__()
            if _init_pltf.Metaclass_InitPltf_Response._TYPE_SUPPORT is None:
                _init_pltf.Metaclass_InitPltf_Response.__import_type_support__()


class InitPltf(metaclass=Metaclass_InitPltf):
    from loki_msgs.srv._init_pltf import InitPltf_Request as Request
    from loki_msgs.srv._init_pltf import InitPltf_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
