// Generated by gencpp from file fcu_common/FW_Controller_Commands.msg
// DO NOT EDIT!


#ifndef FCU_COMMON_MESSAGE_FW_CONTROLLER_COMMANDS_H
#define FCU_COMMON_MESSAGE_FW_CONTROLLER_COMMANDS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace fcu_common
{
template <class ContainerAllocator>
struct FW_Controller_Commands_
{
  typedef FW_Controller_Commands_<ContainerAllocator> Type;

  FW_Controller_Commands_()
    : Va_c(0.0)
    , h_c(0.0)
    , chi_c(0.0)
    , aux()
    , aux_valid(false)  {
      aux.assign(0.0);
  }
  FW_Controller_Commands_(const ContainerAllocator& _alloc)
    : Va_c(0.0)
    , h_c(0.0)
    , chi_c(0.0)
    , aux()
    , aux_valid(false)  {
      aux.assign(0.0);
  }



   typedef float _Va_c_type;
  _Va_c_type Va_c;

   typedef float _h_c_type;
  _h_c_type h_c;

   typedef float _chi_c_type;
  _chi_c_type chi_c;

   typedef boost::array<float, 4>  _aux_type;
  _aux_type aux;

   typedef uint8_t _aux_valid_type;
  _aux_valid_type aux_valid;




  typedef boost::shared_ptr< ::fcu_common::FW_Controller_Commands_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::fcu_common::FW_Controller_Commands_<ContainerAllocator> const> ConstPtr;

}; // struct FW_Controller_Commands_

typedef ::fcu_common::FW_Controller_Commands_<std::allocator<void> > FW_Controller_Commands;

typedef boost::shared_ptr< ::fcu_common::FW_Controller_Commands > FW_Controller_CommandsPtr;
typedef boost::shared_ptr< ::fcu_common::FW_Controller_Commands const> FW_Controller_CommandsConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::fcu_common::FW_Controller_Commands_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::fcu_common::FW_Controller_Commands_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace fcu_common

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'fcu_common': ['/home/jeff/Desktop/auvsi-client/catkin_ws/src/fcu_common/msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::fcu_common::FW_Controller_Commands_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::fcu_common::FW_Controller_Commands_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::fcu_common::FW_Controller_Commands_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::fcu_common::FW_Controller_Commands_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::fcu_common::FW_Controller_Commands_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::fcu_common::FW_Controller_Commands_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::fcu_common::FW_Controller_Commands_<ContainerAllocator> >
{
  static const char* value()
  {
    return "866a52e318b720616a6342f870a0e13f";
  }

  static const char* value(const ::fcu_common::FW_Controller_Commands_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x866a52e318b72061ULL;
  static const uint64_t static_value2 = 0x6a6342f870a0e13fULL;
};

template<class ContainerAllocator>
struct DataType< ::fcu_common::FW_Controller_Commands_<ContainerAllocator> >
{
  static const char* value()
  {
    return "fcu_common/FW_Controller_Commands";
  }

  static const char* value(const ::fcu_common::FW_Controller_Commands_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::fcu_common::FW_Controller_Commands_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Controller commands output from the path follower, input to autopilot controller\n\
\n\
# @warning Va_c, h_c and chi_c have always to be valid, the aux array is optional\n\
float32 Va_c		# Commanded airspeed (m/s)\n\
float32 h_c		# Commanded altitude (m)\n\
float32 chi_c		# Commanded course (rad)\n\
float32[4] aux		# Optional auxiliary commands\n\
bool aux_valid		# Auxiliary commands valid\n\
";
  }

  static const char* value(const ::fcu_common::FW_Controller_Commands_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::fcu_common::FW_Controller_Commands_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.Va_c);
      stream.next(m.h_c);
      stream.next(m.chi_c);
      stream.next(m.aux);
      stream.next(m.aux_valid);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct FW_Controller_Commands_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::fcu_common::FW_Controller_Commands_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::fcu_common::FW_Controller_Commands_<ContainerAllocator>& v)
  {
    s << indent << "Va_c: ";
    Printer<float>::stream(s, indent + "  ", v.Va_c);
    s << indent << "h_c: ";
    Printer<float>::stream(s, indent + "  ", v.h_c);
    s << indent << "chi_c: ";
    Printer<float>::stream(s, indent + "  ", v.chi_c);
    s << indent << "aux[]" << std::endl;
    for (size_t i = 0; i < v.aux.size(); ++i)
    {
      s << indent << "  aux[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.aux[i]);
    }
    s << indent << "aux_valid: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.aux_valid);
  }
};

} // namespace message_operations
} // namespace ros

#endif // FCU_COMMON_MESSAGE_FW_CONTROLLER_COMMANDS_H
