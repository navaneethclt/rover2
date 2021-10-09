#pragma once

#include <ros/ros.h>
#include <sensor_msgs/LaserScan.h>
#include <string.h>
#include <sensor_msgs/PointCloud2.h>
#include <std_msgs/Float64.h>
#include <geometry_msgs/Twist.h>
namespace highlevel_controller {

/**
 * Class containing the Highlevel Controller
 */
class HighlevelController {
 public:
  /** Constructor */
  HighlevelController(ros::NodeHandle& nodeHandle);

  /** Destructor */
  virtual ~HighlevelController();

 private:
  bool readParameters();
  void scanCallback(const sensor_msgs::LaserScan::ConstPtr& msg);
  void EulerPosCallback(const geometry_msgs::Twist& msg);
  /*bonus task solution */
  void pointcloudCallback(const sensor_msgs::PointCloud2 &msg);

  ros::NodeHandle nodeHandle_;
  ros::Subscriber scanSubscriber_;
  ros::Subscriber EulerPosSubscriber_;
  ros::Publisher cmdPublisher_;
  std::string scanTopic_;
  int subscriberQueueSize_;
  int count_;
 double xref_; 
 double yawref_;  
 double pos_x;
 double pos_y;
 double pos_z;
 double pos_yaw;
 double pos_pitch;
 double pos_roll;
  /*bonus task solution */
  ros::Subscriber pclSubscriber_;
};

}  
