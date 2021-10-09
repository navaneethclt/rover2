
#include <ros/ros.h>
#include "highlevel_controller/HighlevelController.hpp"

int main(int argc, char** argv) {
  ros::init(argc, argv, "smb_highlevel_controller");
  ros::NodeHandle nodeHandle("~");

  highlevel_controller::HighlevelController HighlevelController(nodeHandle);
  ros::Rate loop_rate(1000);
  while(ros::ok())
  {
  ros::spinOnce();
  loop_rate.sleep();
  }
  return 0;

}
