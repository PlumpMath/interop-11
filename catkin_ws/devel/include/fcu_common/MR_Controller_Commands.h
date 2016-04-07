// Generated by gencpp from file fcu_common/MR_Controller_Commands.msg
// DO NOT EDIT!


#ifndef FCU_COMMON_MESSAGE_MR_CONTROLLER_COMMANDS_H
#define FCU_COMMON_MESSAGE_MR_CONTROLLER_COMMANDS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <geometry_msgs/Vector3.h>
#include <geometry_msgs/Vector3.h>
#include <geometry_msgs/Vector3.h>
#include <geometry_msgs/Vector3.h>
#include <geometry_msgs/Vector3.h>
#include <geometry_msgs/Vector3.h>

namespace fcu_common
{
template <class ContainerAllocator>
struct MR_Controller_Commands_
{
  typedef MR_Controller_Commands_<ContainerAllocator> Type;

  MR_Controller_Commands_()
    : header()
    , acceleration()
    , velocity()
    , position()
    , alpha()
    , omega()
    , theta()
    , aux()
    , position_valid(false)
    , velocity_valid(false)
    , acceleration_valid(false)  {
      aux.assign(0.0);
  }
  MR_Controller_Commands_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , acceleration(_alloc)
    , velocity(_alloc)
    , position(_alloc)
    , alpha(_alloc)
    , omega(_alloc)
    , theta(_alloc)
    , aux()
    , position_valid(false)
    , velocity_valid(false)
    , acceleration_valid(false)  {
      aux.assign(0.0);
  }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _acceleration_type;
  _acceleration_type acceleration;

   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _velocity_type;
  _velocity_type velocity;

   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _position_type;
  _position_type position;

   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _alpha_type;
  _alpha_type alpha;

   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _omega_type;
  _omega_type omega;

   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _theta_type;
  _theta_type theta;

   typedef boost::array<double, 4>  _aux_type;
  _aux_type aux;

   typedef uint8_t _position_valid_type;
  _position_valid_type position_valid;

   typedef uint8_t _velocity_valid_type;
  _velocity_valid_type velocity_valid;

   typedef uint8_t _acceleration_valid_type;
  _acceleration_valid_type acceleration_valid;




  typedef boost::shared_ptr< ::fcu_common::MR_Controller_Commands_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::fcu_common::MR_Controller_Commands_<ContainerAllocator> const> ConstPtr;

}; // struct MR_Controller_Commands_

typedef ::fcu_common::MR_Controller_Commands_<std::allocator<void> > MR_Controller_Commands;

typedef boost::shared_ptr< ::fcu_common::MR_Controller_Commands > MR_Controller_CommandsPtr;
typedef boost::shared_ptr< ::fcu_common::MR_Controller_Commands const> MR_Controller_CommandsConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::fcu_common::MR_Controller_Commands_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::fcu_common::MR_Controller_Commands_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace fcu_common

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'fcu_common': ['/home/jeff/Desktop/auvsi-client/catkin_ws/src/fcu_common/msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::fcu_common::MR_Controller_Commands_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::fcu_common::MR_Controller_Commands_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::fcu_common::MR_Controller_Commands_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::fcu_common::MR_Controller_Commands_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::fcu_common::MR_Controller_Commands_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::fcu_common::MR_Controller_Commands_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::fcu_common::MR_Controller_Commands_<ContainerAllocator> >
{
  static const char* value()
  {
    return "11c19eeab1f78e012f469cf56504e52c";
  }

  static const char* value(const ::fcu_common::MR_Controller_Commands_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x11c19eeab1f78e01ULL;
  static const uint64_t static_value2 = 0x2f469cf56504e52cULL;
};

template<class ContainerAllocator>
struct DataType< ::fcu_common::MR_Controller_Commands_<ContainerAllocator> >
{
  static const char* value()
  {
    return "fcu_common/MR_Controller_Commands";
  }

  static const char* value(const ::fcu_common::MR_Controller_Commands_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::fcu_common::MR_Controller_Commands_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Controller commands to the controller of a multirotor\n\
\n\
Header header\n\
geometry_msgs/Vector3 acceleration # commanded acceleration\n\
geometry_msgs/Vector3 velocity # commanded velocity\n\
geometry_msgs/Vector3 position # commanded position\n\
geometry_msgs/Vector3 alpha # commanded angular acceleration\n\
geometry_msgs/Vector3 omega # commanded angular velocity\n\
geometry_msgs/Vector3 theta # commanded angle\n\
float64[4] aux		# Optional auxiliary commands\n\
\n\
bool position_valid\n\
bool velocity_valid\n\
bool acceleration_valid\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Vector3\n\
# This represents a vector in free space. \n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
";
  }

  static const char* value(const ::fcu_common::MR_Controller_Commands_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::fcu_common::MR_Controller_Commands_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.acceleration);
      stream.next(m.velocity);
      stream.next(m.position);
      stream.next(m.alpha);
      stream.next(m.omega);
      stream.next(m.theta);
      stream.next(m.aux);
      stream.next(m.position_valid);
      stream.next(m.velocity_valid);
      stream.next(m.acceleration_valid);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct MR_Controller_Commands_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::fcu_common::MR_Controller_Commands_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::fcu_common::MR_Controller_Commands_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "acceleration: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.acceleration);
    s << indent << "velocity: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.velocity);
    s << indent << "position: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.position);
    s << indent << "alpha: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.alpha);
    s << indent << "omega: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.omega);
    s << indent << "theta: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.theta);
    s << indent << "aux[]" << std::endl;
    for (size_t i = 0; i < v.aux.size(); ++i)
    {
      s << indent << "  aux[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.aux[i]);
    }
    s << indent << "position_valid: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.position_valid);
    s << indent << "velocity_valid: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.velocity_valid);
    s << indent << "acceleration_valid: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.acceleration_valid);
  }
};

} // namespace message_operations
} // namespace ros

#endif // FCU_COMMON_MESSAGE_MR_CONTROLLER_COMMANDS_H
