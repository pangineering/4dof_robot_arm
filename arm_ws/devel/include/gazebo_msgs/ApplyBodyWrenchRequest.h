// Generated by gencpp from file gazebo_msgs/ApplyBodyWrenchRequest.msg
// DO NOT EDIT!


#ifndef GAZEBO_MSGS_MESSAGE_APPLYBODYWRENCHREQUEST_H
#define GAZEBO_MSGS_MESSAGE_APPLYBODYWRENCHREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Point.h>
#include <geometry_msgs/Wrench.h>

namespace gazebo_msgs
{
template <class ContainerAllocator>
struct ApplyBodyWrenchRequest_
{
  typedef ApplyBodyWrenchRequest_<ContainerAllocator> Type;

  ApplyBodyWrenchRequest_()
    : body_name()
    , reference_frame()
    , reference_point()
    , wrench()
    , start_time()
    , duration()  {
    }
  ApplyBodyWrenchRequest_(const ContainerAllocator& _alloc)
    : body_name(_alloc)
    , reference_frame(_alloc)
    , reference_point(_alloc)
    , wrench(_alloc)
    , start_time()
    , duration()  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _body_name_type;
  _body_name_type body_name;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _reference_frame_type;
  _reference_frame_type reference_frame;

   typedef  ::geometry_msgs::Point_<ContainerAllocator>  _reference_point_type;
  _reference_point_type reference_point;

   typedef  ::geometry_msgs::Wrench_<ContainerAllocator>  _wrench_type;
  _wrench_type wrench;

   typedef ros::Time _start_time_type;
  _start_time_type start_time;

   typedef ros::Duration _duration_type;
  _duration_type duration;





  typedef boost::shared_ptr< ::gazebo_msgs::ApplyBodyWrenchRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::gazebo_msgs::ApplyBodyWrenchRequest_<ContainerAllocator> const> ConstPtr;

}; // struct ApplyBodyWrenchRequest_

typedef ::gazebo_msgs::ApplyBodyWrenchRequest_<std::allocator<void> > ApplyBodyWrenchRequest;

typedef boost::shared_ptr< ::gazebo_msgs::ApplyBodyWrenchRequest > ApplyBodyWrenchRequestPtr;
typedef boost::shared_ptr< ::gazebo_msgs::ApplyBodyWrenchRequest const> ApplyBodyWrenchRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::gazebo_msgs::ApplyBodyWrenchRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::gazebo_msgs::ApplyBodyWrenchRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::gazebo_msgs::ApplyBodyWrenchRequest_<ContainerAllocator1> & lhs, const ::gazebo_msgs::ApplyBodyWrenchRequest_<ContainerAllocator2> & rhs)
{
  return lhs.body_name == rhs.body_name &&
    lhs.reference_frame == rhs.reference_frame &&
    lhs.reference_point == rhs.reference_point &&
    lhs.wrench == rhs.wrench &&
    lhs.start_time == rhs.start_time &&
    lhs.duration == rhs.duration;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::gazebo_msgs::ApplyBodyWrenchRequest_<ContainerAllocator1> & lhs, const ::gazebo_msgs::ApplyBodyWrenchRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace gazebo_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::gazebo_msgs::ApplyBodyWrenchRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::gazebo_msgs::ApplyBodyWrenchRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::gazebo_msgs::ApplyBodyWrenchRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::gazebo_msgs::ApplyBodyWrenchRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::gazebo_msgs::ApplyBodyWrenchRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::gazebo_msgs::ApplyBodyWrenchRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::gazebo_msgs::ApplyBodyWrenchRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e37e6adf97eba5095baa77dffb71e5bd";
  }

  static const char* value(const ::gazebo_msgs::ApplyBodyWrenchRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe37e6adf97eba509ULL;
  static const uint64_t static_value2 = 0x5baa77dffb71e5bdULL;
};

template<class ContainerAllocator>
struct DataType< ::gazebo_msgs::ApplyBodyWrenchRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "gazebo_msgs/ApplyBodyWrenchRequest";
  }

  static const char* value(const ::gazebo_msgs::ApplyBodyWrenchRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::gazebo_msgs::ApplyBodyWrenchRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Apply Wrench to Gazebo Body.\n"
"# via the callback mechanism\n"
"# all Gazebo operations are made in world frame\n"
"string body_name                          # Gazebo body to apply wrench (linear force and torque)\n"
"                                          # wrench is applied in the gazebo world by default\n"
"                                          # body names are prefixed by model name, e.g. pr2::base_link\n"
"string reference_frame                    # wrench is defined in the reference frame of this entity\n"
"                                          # use inertial frame if left empty\n"
"                                          # frame names are bodies prefixed by model name, e.g. pr2::base_link\n"
"geometry_msgs/Point  reference_point      # wrench is defined at this location in the reference frame\n"
"geometry_msgs/Wrench wrench               # wrench applied to the origin of the body\n"
"time start_time                           # (optional) wrench application start time (seconds)\n"
"                                          # if start_time is not specified, or\n"
"                                          # start_time < current time, start as soon as possible\n"
"duration duration                         # optional duration of wrench application time (seconds)\n"
"                                          # if duration < 0, apply wrench continuously without end\n"
"                                          # if duration = 0, do nothing\n"
"                                          # if duration < step size, apply wrench\n"
"                                          # for one step size\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Wrench\n"
"# This represents force in free space, separated into\n"
"# its linear and angular parts.\n"
"Vector3  force\n"
"Vector3  torque\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Vector3\n"
"# This represents a vector in free space. \n"
"# It is only meant to represent a direction. Therefore, it does not\n"
"# make sense to apply a translation to it (e.g., when applying a \n"
"# generic rigid transformation to a Vector3, tf2 will only apply the\n"
"# rotation). If you want your data to be translatable too, use the\n"
"# geometry_msgs/Point message instead.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
;
  }

  static const char* value(const ::gazebo_msgs::ApplyBodyWrenchRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::gazebo_msgs::ApplyBodyWrenchRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.body_name);
      stream.next(m.reference_frame);
      stream.next(m.reference_point);
      stream.next(m.wrench);
      stream.next(m.start_time);
      stream.next(m.duration);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ApplyBodyWrenchRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::gazebo_msgs::ApplyBodyWrenchRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::gazebo_msgs::ApplyBodyWrenchRequest_<ContainerAllocator>& v)
  {
    s << indent << "body_name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.body_name);
    s << indent << "reference_frame: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.reference_frame);
    s << indent << "reference_point: ";
    s << std::endl;
    Printer< ::geometry_msgs::Point_<ContainerAllocator> >::stream(s, indent + "  ", v.reference_point);
    s << indent << "wrench: ";
    s << std::endl;
    Printer< ::geometry_msgs::Wrench_<ContainerAllocator> >::stream(s, indent + "  ", v.wrench);
    s << indent << "start_time: ";
    Printer<ros::Time>::stream(s, indent + "  ", v.start_time);
    s << indent << "duration: ";
    Printer<ros::Duration>::stream(s, indent + "  ", v.duration);
  }
};

} // namespace message_operations
} // namespace ros

#endif // GAZEBO_MSGS_MESSAGE_APPLYBODYWRENCHREQUEST_H
