#include <cmath>
#include <algorithm>
#include <highlevel_controller/HighlevelController.hpp>
#include <geometry_msgs/Twist.h>
#include <iostream>
namespace highlevel_controller {

HighlevelController::HighlevelController(ros::NodeHandle &nodeHandle) :
		nodeHandle_(nodeHandle), subscriberQueueSize_(1),xref_(0.0), scanTopic_("/scan"),count_(0){
	if (!readParameters()) {
		ROS_ERROR("Could not read parameters.");
		ros::requestShutdown();
	}
	
	scanSubscriber_ = nodeHandle_.subscribe(scanTopic_, subscriberQueueSize_,
			&HighlevelController::scanCallback, this);
	EulerPosSubscriber_ = nodeHandle_.subscribe("/pos_calc", subscriberQueueSize_,
			&HighlevelController::EulerPosCallback, this);
	cmdPublisher_ = nodeHandle_.advertise<geometry_msgs::Twist>("/cmd_vel/managed",10);
	
}

HighlevelController::~HighlevelController() {
}

void HighlevelController::EulerPosCallback(const geometry_msgs::Twist& msg){
this->pos_x = msg.linear.x;
this->pos_y = msg.linear.y;
this->pos_z = msg.linear.z;
this->pos_yaw = msg.angular.z;
this->pos_pitch = msg.angular.x;
this->pos_roll = msg.angular.y;
}

bool HighlevelController::readParameters() {
	bool success = true;
	success &= nodeHandle_.getParam(
			"/highlevel_controller/scan_subscriber_topic_name", scanTopic_);
	success &= nodeHandle_.getParam(
			"/highlevel_controller/scan_subscriber_queue_size",
			subscriberQueueSize_);
	return success;
}



void HighlevelController::scanCallback(
		const sensor_msgs::LaserScan::ConstPtr &msg) {
	double min = msg->range_max;
	for (int i = 0; i < msg->ranges.size(); ++i) {
		if (msg->ranges[i] < min)
			min = msg->ranges[i];
	}
       // std::cout<<min<<'\n';
        double ang = 1.25;
        double linear_vel = 0.2;
        
        geometry_msgs::Twist cmdmsg;
        if(this->count_==0 && min >.5)
        {cmdmsg.linear.x = linear_vel;
        cmdmsg.angular.z = 0.0;}
        
        if(this->count_==0 && min<.5)
        {cmdmsg.linear.x = 0.0;
        cmdmsg.angular.z = 0.0;
        this->count_ = this->count_+ 1;
        this->yawref_ =this->pos_yaw;
        }
        
         if(this->count_==1 && (abs(this->pos_yaw-ang)>0.001))
        {cmdmsg.linear.x = 0.0;
        cmdmsg.angular.z = 0.3*(ang-this->pos_yaw)/abs(this->pos_yaw-ang);
        
        }
        
        if(this->count_==1 && (abs(this->pos_yaw-ang)<0.001))
        {cmdmsg.linear.x = 0.0;
        cmdmsg.angular.z = 0.0;
        this->count_ = this->count_+ 1;
        }
        
        if(this->count_==2 && (abs(this->pos_y-0.3)>0.1))
        {
       if(pos_y>0.5){ cmdmsg.linear.x = 0.05; }
       else{       cmdmsg.linear.x = 0.05;}

        cmdmsg.angular.z = 0.0;
        }
        
        if(this->count_==2 && (abs(this->pos_y-0.3)<0.1))
        {cmdmsg.linear.x = 0.0;
        cmdmsg.angular.z = 0.0;
        this->xref_ = pos_x;
        this->count_ = this->count_+ 1;
        this->yawref_ =this->pos_yaw;
        }
        
        if(this->count_==3 && (abs(this->pos_yaw-0)>0.001))
        {cmdmsg.linear.x = 0.0;
        cmdmsg.angular.z = 0.3*(0-this->pos_yaw)/abs(this->pos_yaw-0);
        
        }
        
        if(this->count_==3 && (abs(this->pos_yaw-0)<0.001))
        {cmdmsg.linear.x = 0.0;
        cmdmsg.angular.z = 0.0;
        this->count_ = this->count_+ 1;
        }
        
        if(this->count_==4 && (abs(this->pos_x-this->xref_-1.0)>0.1) )
        {cmdmsg.linear.x = linear_vel;;
        cmdmsg.angular.z = 0;
        
        }
 if(this->count_==4 && (abs(this->pos_x-this->xref_-1.0)<0.1) )
        {cmdmsg.linear.x = 0;
        cmdmsg.angular.z = 0;
        this->count_ = this->count_+ 1;
        this->yawref_ =this->pos_yaw;
 
        std::cout<<this->pos_yaw<<'\n';

        }
 if(this->count_==5 && (abs(this->pos_yaw+ang)>0.01))
        {cmdmsg.linear.x = 0.0;
        cmdmsg.angular.z = 0.3*(-ang-this->pos_yaw)/abs(-ang-this->pos_yaw);
     //   std::cout<<this->pos_yaw<<'\n';
}

if(this->count_==5 && (abs(this->pos_yaw+ang)<0.01))
        {cmdmsg.linear.x = 0.0;
        cmdmsg.angular.z = 0.0;
        this->count_ = this->count_+ 1;
        }
 if(this->count_==6 && (abs(this->pos_y-0.0)>0.1))
        {cmdmsg.linear.x = 0.05;
        cmdmsg.angular.z = 0.0;
        }
 if(this->count_==6 && (abs(this->pos_y-0.0)<0.1))
        {cmdmsg.linear.x = 0.0;
        cmdmsg.angular.z = 0.0;
        this->count_ = this->count_+ 1;
        this->yawref_ = this->pos_yaw;
        std::cout<<this->pos_yaw<<'\n';

        }
 if(this->count_==7 && (abs(this->pos_yaw-0)>0.01))
        {cmdmsg.linear.x = 0.0;
        cmdmsg.angular.z = 0.3*(0-this->pos_yaw)/abs(0-this->pos_yaw);
       // std::cout<<"here";
        }
        
        if(this->count_==7 && (abs(this->pos_yaw-0)<0.01))
        {cmdmsg.linear.x = 0.0;
        cmdmsg.angular.z = 0.0;
        this->count_ = 1000;
         std::cout<<this->pos_yaw;
        }
        
       // std::cout<<pos_x<<','<<pos_y<<','<<pos_yaw<<"\n";
        cmdPublisher_.publish(cmdmsg);
        
        //this->count_ = this->count_+ 1;
        //std::cout<< this->count_<<std::endl;
        //ROS_INFO_STREAM_THROTTLE(2.0,"Count: " << this->count_);
	//ROS_INFO_STREAM_THROTTLE(2.0,"Minimum Range: " << min);
	
	
}

}  // namespace smb_highlevel_controller


