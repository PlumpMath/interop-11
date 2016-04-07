# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from fcu_common/MR_Controller_Commands.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import geometry_msgs.msg
import std_msgs.msg

class MR_Controller_Commands(genpy.Message):
  _md5sum = "11c19eeab1f78e012f469cf56504e52c"
  _type = "fcu_common/MR_Controller_Commands"
  _has_header = True #flag to mark the presence of a Header object
  _full_text = """# Controller commands to the controller of a multirotor

Header header
geometry_msgs/Vector3 acceleration # commanded acceleration
geometry_msgs/Vector3 velocity # commanded velocity
geometry_msgs/Vector3 position # commanded position
geometry_msgs/Vector3 alpha # commanded angular acceleration
geometry_msgs/Vector3 omega # commanded angular velocity
geometry_msgs/Vector3 theta # commanded angle
float64[4] aux		# Optional auxiliary commands

bool position_valid
bool velocity_valid
bool acceleration_valid

================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
# 0: no frame
# 1: global frame
string frame_id

================================================================================
MSG: geometry_msgs/Vector3
# This represents a vector in free space. 

float64 x
float64 y
float64 z
"""
  __slots__ = ['header','acceleration','velocity','position','alpha','omega','theta','aux','position_valid','velocity_valid','acceleration_valid']
  _slot_types = ['std_msgs/Header','geometry_msgs/Vector3','geometry_msgs/Vector3','geometry_msgs/Vector3','geometry_msgs/Vector3','geometry_msgs/Vector3','geometry_msgs/Vector3','float64[4]','bool','bool','bool']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       header,acceleration,velocity,position,alpha,omega,theta,aux,position_valid,velocity_valid,acceleration_valid

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(MR_Controller_Commands, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.acceleration is None:
        self.acceleration = geometry_msgs.msg.Vector3()
      if self.velocity is None:
        self.velocity = geometry_msgs.msg.Vector3()
      if self.position is None:
        self.position = geometry_msgs.msg.Vector3()
      if self.alpha is None:
        self.alpha = geometry_msgs.msg.Vector3()
      if self.omega is None:
        self.omega = geometry_msgs.msg.Vector3()
      if self.theta is None:
        self.theta = geometry_msgs.msg.Vector3()
      if self.aux is None:
        self.aux = [0.,0.,0.,0.]
      if self.position_valid is None:
        self.position_valid = False
      if self.velocity_valid is None:
        self.velocity_valid = False
      if self.acceleration_valid is None:
        self.acceleration_valid = False
    else:
      self.header = std_msgs.msg.Header()
      self.acceleration = geometry_msgs.msg.Vector3()
      self.velocity = geometry_msgs.msg.Vector3()
      self.position = geometry_msgs.msg.Vector3()
      self.alpha = geometry_msgs.msg.Vector3()
      self.omega = geometry_msgs.msg.Vector3()
      self.theta = geometry_msgs.msg.Vector3()
      self.aux = [0.,0.,0.,0.]
      self.position_valid = False
      self.velocity_valid = False
      self.acceleration_valid = False

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_struct_3I.pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      if python3:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_struct_18d.pack(_x.acceleration.x, _x.acceleration.y, _x.acceleration.z, _x.velocity.x, _x.velocity.y, _x.velocity.z, _x.position.x, _x.position.y, _x.position.z, _x.alpha.x, _x.alpha.y, _x.alpha.z, _x.omega.x, _x.omega.y, _x.omega.z, _x.theta.x, _x.theta.y, _x.theta.z))
      buff.write(_struct_4d.pack(*self.aux))
      _x = self
      buff.write(_struct_3B.pack(_x.position_valid, _x.velocity_valid, _x.acceleration_valid))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(_x))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(_x))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.acceleration is None:
        self.acceleration = geometry_msgs.msg.Vector3()
      if self.velocity is None:
        self.velocity = geometry_msgs.msg.Vector3()
      if self.position is None:
        self.position = geometry_msgs.msg.Vector3()
      if self.alpha is None:
        self.alpha = geometry_msgs.msg.Vector3()
      if self.omega is None:
        self.omega = geometry_msgs.msg.Vector3()
      if self.theta is None:
        self.theta = geometry_msgs.msg.Vector3()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _struct_3I.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8')
      else:
        self.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 144
      (_x.acceleration.x, _x.acceleration.y, _x.acceleration.z, _x.velocity.x, _x.velocity.y, _x.velocity.z, _x.position.x, _x.position.y, _x.position.z, _x.alpha.x, _x.alpha.y, _x.alpha.z, _x.omega.x, _x.omega.y, _x.omega.z, _x.theta.x, _x.theta.y, _x.theta.z,) = _struct_18d.unpack(str[start:end])
      start = end
      end += 32
      self.aux = _struct_4d.unpack(str[start:end])
      _x = self
      start = end
      end += 3
      (_x.position_valid, _x.velocity_valid, _x.acceleration_valid,) = _struct_3B.unpack(str[start:end])
      self.position_valid = bool(self.position_valid)
      self.velocity_valid = bool(self.velocity_valid)
      self.acceleration_valid = bool(self.acceleration_valid)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_struct_3I.pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      if python3:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_struct_18d.pack(_x.acceleration.x, _x.acceleration.y, _x.acceleration.z, _x.velocity.x, _x.velocity.y, _x.velocity.z, _x.position.x, _x.position.y, _x.position.z, _x.alpha.x, _x.alpha.y, _x.alpha.z, _x.omega.x, _x.omega.y, _x.omega.z, _x.theta.x, _x.theta.y, _x.theta.z))
      buff.write(self.aux.tostring())
      _x = self
      buff.write(_struct_3B.pack(_x.position_valid, _x.velocity_valid, _x.acceleration_valid))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(_x))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(_x))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.acceleration is None:
        self.acceleration = geometry_msgs.msg.Vector3()
      if self.velocity is None:
        self.velocity = geometry_msgs.msg.Vector3()
      if self.position is None:
        self.position = geometry_msgs.msg.Vector3()
      if self.alpha is None:
        self.alpha = geometry_msgs.msg.Vector3()
      if self.omega is None:
        self.omega = geometry_msgs.msg.Vector3()
      if self.theta is None:
        self.theta = geometry_msgs.msg.Vector3()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _struct_3I.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8')
      else:
        self.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 144
      (_x.acceleration.x, _x.acceleration.y, _x.acceleration.z, _x.velocity.x, _x.velocity.y, _x.velocity.z, _x.position.x, _x.position.y, _x.position.z, _x.alpha.x, _x.alpha.y, _x.alpha.z, _x.omega.x, _x.omega.y, _x.omega.z, _x.theta.x, _x.theta.y, _x.theta.z,) = _struct_18d.unpack(str[start:end])
      start = end
      end += 32
      self.aux = numpy.frombuffer(str[start:end], dtype=numpy.float64, count=4)
      _x = self
      start = end
      end += 3
      (_x.position_valid, _x.velocity_valid, _x.acceleration_valid,) = _struct_3B.unpack(str[start:end])
      self.position_valid = bool(self.position_valid)
      self.velocity_valid = bool(self.velocity_valid)
      self.acceleration_valid = bool(self.acceleration_valid)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_3B = struct.Struct("<3B")
_struct_3I = struct.Struct("<3I")
_struct_4d = struct.Struct("<4d")
_struct_18d = struct.Struct("<18d")
