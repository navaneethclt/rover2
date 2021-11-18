#include <cmath>
#include <algorithm>
#include <highlevel_controller/HighlevelController.hpp>
#include <geometry_msgs/Twist.h>
#include <iostream>
#include<chrono>  
namespace highlevel_controller {

HighlevelController::HighlevelController(ros::NodeHandle &nodeHandle) :
		nodeHandle_(nodeHandle), subscriberQueueSize_(1),xref_(0.0), scanTopic_("/scan"),count_(1),time_start(std::chrono::high_resolution_clock::now()),prev_ms(0),prev_error(0),I_term(0){
	
	scanSubscriber_ = nodeHandle_.subscribe(scanTopic_, subscriberQueueSize_,
			&HighlevelController::scanCallback, this);
	EulerPosSubscriber_ = nodeHandle_.subscribe("/pos_calc", subscriberQueueSize_,
			&HighlevelController::EulerPosCallback, this);
	cmdPublisher_ = nodeHandle_.advertise<geometry_msgs::Twist>("/cmd_vel/managed",10);
	
}

HighlevelController::~HighlevelController() {
}

void HighlevelController::EulerPosCallback(const geometry_msgs::Twist& msg){
this->pos_x = msg.linear.x/.5357;
this->pos_y = msg.linear.y;
this->pos_z = msg.linear.z;
this->pos_yaw = msg.angular.z;
this->pos_pitch = msg.angular.x;
this->pos_roll = msg.angular.y;
}

double HighlevelController::PID(double Kp, double Ki, double Kd, double error, double prev_error,double dt,double upper_limit)
{
this->I_term += Ki*error*dt;
double D_term = (error - prev_error)/dt;
double P_term = error*dt;
double output = this->I_term + D_term + P_term;
if(abs(output)>upper_limit) {
output = abs(output)*upper_limit/output;
this->I_term = 0;}
std::cout<<output<<" "<<this->pos_yaw<<" "<<P_term<<" "<<this->I_term<<" "<<D_term<<'\n';
return output;
}


void HighlevelController::scanCallback(
		const sensor_msgs::LaserScan::ConstPtr &msg) {
	double min = msg->range_max;
	for (int i = 0; i < msg->ranges.size(); ++i) {
		if (msg->ranges[i] < min)
			min = msg->ranges[i];
	}

       auto elapsed = std::chrono::high_resolution_clock::now() - time_start;
       long long microseconds =      std::chrono::duration_cast<std::chrono::microseconds>(elapsed).count();
       double dt = (microseconds - prev_ms)*1e-6 ;
       prev_ms = microseconds;
        // std::cout<<min<<'\n';
        double ang = 1.32;
        double linear_vel = 0.2;
        
        geometry_msgs::Twist cmdmsg;
        if(this->count_==0 && min >.5 && (abs(this->pos_x-2.0)>0.01))
        {
        double error = 2.0 - this->pos_x;
        double output = HighlevelController::PID(0.5,0.4,0.01,error,this->prev_error,dt,0.2);
        this->prev_error = error;
        cmdmsg.linear.x = output;
        cmdmsg.angular.z = 0.0;}
        
        if(this->count_==0 && min<.5)
        {cmdmsg.linear.x = 0.0;
        cmdmsg.angular.z = 0.0;
        this->count_ = this->count_+ 1;
        this->yawref_ =this->pos_yaw;
        }
        
         if(this->count_==1 && (abs(this->pos_yaw-ang)>0.001))
        {
         double error = ang - this->pos_yaw;
         double output = HighlevelController::PID(0.2,0.1,0.01,error,this->prev_error,dt,0.2);
         this->prev_error = error;
         cmdmsg.linear.x = 0.0;
         cmdmsg.angular.z = output;

        //cmdmsg.angular.z =0.4*(ang-this->pos_yaw)/abs(ang-this->pos_yaw);
        
        }
        /*
        if(this->count_==1 && (abs(this->pos_yaw-ang)<0.001))
        {cmdmsg.linear.x = 0.0;
        cmdmsg.angular.z = 0.0;
        this->count_ = this->count_+ 1;
        }
        
        if(this->count_==2 && (abs(this->pos_y-0.3)>0.010))
        {
       if(pos_y>0.5){ cmdmsg.linear.x = 0.05; }
       else{       cmdmsg.linear.x = 0.05;}

        cmdmsg.angular.z = 0.0;
        }
        
        if(this->count_==2 && (abs(this->pos_y-0.3)<0.01))
        {cmdmsg.linear.x = 0.0;
        cmdmsg.angular.z = 0.0;
        this->xref_ = pos_x;
        this->count_ = this->count_+ 1;
        this->yawref_ =this->pos_yaw;
        }
        
        if(this->count_==3 && (abs(this->pos_yaw-0)>0.001))
        {cmdmsg.linear.x = 0.0;
        cmdmsg.angular.z = 0.4*(0-this->pos_yaw)/abs(this->pos_yaw-0);
        
        }
        
        if(this->count_==3 && (abs(this->pos_yaw-0)<0.001))
        {cmdmsg.linear.x = 0.0;
        cmdmsg.angular.z = 0.0;
        this->count_ = this->count_+ 1;
        }
        
        if(this->count_==4 && (abs(this->pos_x-this->xref_-1.0)>0.01) )
        {cmdmsg.linear.x = linear_vel;;
        cmdmsg.angular.z = 0;
        
        }
 if(this->count_==4 && (abs(this->pos_x-this->xref_-1.0)<0.01) )
        {cmdmsg.linear.x = 0;
        cmdmsg.angular.z = 0;
        this->count_ = this->count_+ 1;
        this->yawref_ =this->pos_yaw;
 
        std::cout<<this->pos_yaw<<'\n';

        }
 if(this->count_==5 && (abs(this->pos_yaw+ang)>0.01))
        {cmdmsg.linear.x = 0.0;
        cmdmsg.angular.z = 0.4*(-ang-this->pos_yaw)/abs(-ang-this->pos_yaw);
     //   std::cout<<this->pos_yaw<<'\n';
}

if(this->count_==5 && (abs(this->pos_yaw+ang)<0.01))
        {cmdmsg.linear.x = 0.0;
        cmdmsg.angular.z = 0.0;
        this->count_ = this->count_+ 1;
        }
 if(this->count_==6 && (abs(this->pos_y-0.0)>0.01))
        {cmdmsg.linear.x = 0.05;
        cmdmsg.angular.z = 0.0;
        }
 if(this->count_==6 && (abs(this->pos_y-0.0)<0.01))
        {cmdmsg.linear.x = 0.0;
        cmdmsg.angular.z = 0.0;
        this->count_ = this->count_+ 1;
        this->yawref_ = this->pos_yaw;
        std::cout<<this->pos_yaw<<'\n';

        }
 if(this->count_==7 && (abs(this->pos_yaw-0)>0.01))
        {cmdmsg.linear.x = 0.0;
        cmdmsg.angular.z = 0.4*(0-this->pos_yaw)/abs(0-this->pos_yaw);
       // std::cout<<"here";
        }
        
        if(this->count_==7 && (abs(this->pos_yaw-0)<0.01))
        {cmdmsg.linear.x = 0.0;
        cmdmsg.angular.z = 0.0;
        this->count_ = 1000;
         std::cout<<this->pos_yaw;
        } */
        
       // std::cout<<pos_x<<','<<pos_y<<','<<pos_yaw<<"\n";
        cmdPublisher_.publish(cmdmsg);
        
        //this->count_ = this->count_+ 1;
        //std::cout<< this->count_<<std::endl;
        //ROS_INFO_STREAM_THROTTLE(2.0,"Count: " << this->count_);
	//ROS_INFO_STREAM_THROTTLE(2.0,"Minimum Range: " << min);
	
	
}

}  // namespace smb_highlevel_controller


