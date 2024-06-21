import rclpy
import os
import math
from sensor_msgs.msg import Joy, NavSatFix
from geometry_msgs.msg import Twist, PoseWithCovarianceStamped
from std_msgs.msg import Bool
from std_srvs.srv import Trigger, SetBool
from septentrio_gnss_driver.msg import AttEuler
from rclpy.node import Node
from loki_msgs.srv import HomeS
import numpy

class WaypointNode(Node):
    def __init__(self):
        super().__init__('waypoint_node')
        self.get_logger().info("started Waypoint Node")

        self.axis_map = {}
        self.button_map = {}
        self.custom_trigger_map = {}
        self.buttons = []
        self.axes = []
        self.swarm_communication = False
        self.swarm_on = False
        self.secondary_communication = False 
        self.secondary_on = False
        self.correct_heading = False
        self.heading = ''
        self.lookupParameters()
        self.get_logger().info("Parameters loaded for waypoint")
    
        
        #SUBSCRIBERS
        self.pose_sub = self.create_subscription(PoseWithCovarianceStamped, 'pose', self.pose_callback, 1)
        self.heading_sub = self.create_subscription(AttEuler, 'atteuler', self.heading_callback, 1)

        #PUBLISHERS
        self.twist_pub = self.create_publisher(Twist, 'nav_vel', 1)


        #Initializing Variables
        self.m_pi = math.pi
        self.Mode_Forward = 0
        self.Mode_Left = 1
        self.Mode_Turning = 2
        # self.Mode_omni = 3

        self.previous_drive_mode = self.Mode_Forward
        self.previous_non_turn_mode = self.Mode_Forward
        self.turning_buttons_initiated = False
        self.Default_Turning_Calc = 1.0

        self.ang_max = self.m_pi/2
        self.ang_min = 0.00 
        self.deadzone = 0.2
        self.turning_limit = 0.8
        

        self.a = (self.ang_max - self.ang_min) / (1 - self.deadzone)
        self.b = self.ang_min - self.deadzone * self.a

    def heading_callback(self, heading):
        wz = 0.0
        if -95.0 < heading.heading < -85.0:
            self.correct_heading = True
            self.heading = heading.heading
            wz = 0.0
        
            
        else:
            if self.correct_heading is False:
                wz = 0.05
                self.correct_heading = False
                self.heading = heading.heading

                twist_msg = Twist()
                twist_msg.linear.x = 0.0
                twist_msg.linear.y = 0.0
                twist_msg.linear.z = 0.0
                twist_msg.angular.x = 0.0
                twist_msg.angular.y = 0.0
                twist_msg.angular.z = wz
                self.twist_pub.publish(twist_msg)
            

    def lookupParameters(self):

        self.get_logger().info("Looking up Parameters")
        
        self.declare_parameter('destinationx', rclpy.Parameter.Type.DOUBLE)
        self.declare_parameter('destinationy', rclpy.Parameter.Type.DOUBLE)
        self.declare_parameter('destinationh', rclpy.Parameter.Type.DOUBLE)

        self.dest_x = self.get_parameter('destinationx').value
        self.dest_y = self.get_parameter('destinationy').value
        self.dest_h = self.get_parameter('destinationh').value
        self.get_logger().info(f"{self.dest_h}")
        return True
          
    
    def pose_callback(self, pose):
        vx = 0.0
        vy = 0.0
        self.get_logger().info(f"{pose.pose.pose.position}")
        if self.correct_heading: 
            if (self.dest_x - 0.001 <  pose.pose.pose.position.x < self.dest_x + 0.01) and (self.dest_y - 0.000010 < pose.pose.pose.position.y < self.dest_y + 0.000010):
                self.get_logger().info("Destination Complete")
                vx = 0.0
                vy = 0.0
                rclpy.shutdown
            
            else:
                if not (self.dest_y - 0.000010 <  pose.pose.pose.position.y < self.dest_y + 0.000010):
                    if -90 - 10 <  self.heading < -90+10:
                        vx = 0.25
                        vy = 0.0
                    elif (90 - 10 < self.heading < 90 + 10) or (-270-10 <= self.heading <= -270 + 10):
                        vx = -0.05
                        vy = 0.0
                    elif -180 - 5 < self.heading < -180 + 5:
                        vy = -0.05
                        vx = 0.0
                    else :
                        vy = 0.05
                        vx = 0.0
        
            twist_msg = Twist()

            twist_msg.linear.x = vx
            twist_msg.linear.y = vy
            twist_msg.linear.z = 0.0
        
            twist_msg.angular.x = 0.0
            twist_msg.angular.y = 0.0
            twist_msg.angular.z = 0.0
        # self.get_logger().info("vx{}, vy{}, wz{}".format(vx, vy, wz)
            self.twist_pub.publish(twist_msg)
    



        
def main(args=None):
    rclpy.init(args=args)
    node = WaypointNode()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()