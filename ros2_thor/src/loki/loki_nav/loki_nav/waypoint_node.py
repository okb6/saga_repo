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
import yaml
import numpy
from os import sys
from geographic_msgs.msg import GeoPose

class WaypointNode(Node):
    def __init__(self, wps_file_path):
        super().__init__('waypoint_node')
        self.get_logger().info("started Waypoint Node")

        with open(wps_file_path, 'r') as wps_file:
            self.wps_dict = yaml.safe_load(wps_file)

        self.current_attitude = 0.0
        self.current_position = [0.0, 0.0]
        #SUBSCRIBERS
        self.gps_subscription = self.create_subscription(
            NavSatFix,
            '/gps/fix',
            self.gps_callback,
            10)
        self.subscription_att = self.create_subscription(
            AttEuler,
            '/atteuler',
            self.att_callback,
            10)

        self.twist_pub = self.create_publisher(Twist, 'cmd_vel_nav', 1)
        self.previous_time = None
        self.declare_parameter('desired_speed', 0.5)
        self.desired_speed = self.get_parameter('desired_speed').get_parameter_value().double_value

        self.e_theta = 0.0

        for wp in self.wps_dict["waypoints"]:
            self.get_wps(wp)
            while not self.obtained_goal():
                self.calculate_velocity()
                rclpy.spin_once(self)
                

    def get_wps(self, wp):
        """
        Get an array of geographic_msgs/msg/GeoPose objects from the yaml file
        """
        latitude, longitude, yaw = wp["latitude"], wp["longitude"], wp["yaw"]
        self.get_goal(latitude, longitude, yaw)


    def get_goal(self, latitude, longitude, yaw):
        self.goal_long = longitude
        self.goal_lat = latitude
        self.goal_yaw = yaw
        self.get_logger().info(f"Setting Waypoint {self.goal_long} , {self.goal_lat} , {self.goal_yaw}")

        

    def gps_callback(self, msg):
        self.current_position[0] = msg.longitude
        self.current_position[1] = msg.latitude


    def att_callback(self, msg):
        self.current_attitude = msg.heading

    def calculate_velocity(self):

        if (self.current_attitude != 0.0 and self.current_position is not [0.0, 0.0]):
            self.e_theta = math.radians(self.goal_yaw - self.current_attitude)
            self.e_theta = (self.e_theta + math.pi) % (2 * math.pi) - math.pi
            wz = 1 * self.e_theta

            vx = 0.5 * math.cos(self.e_theta)
            

        # Create and publish the twist message
            twist_msg = Twist()

            twist_msg.linear.x = vx
            twist_msg.linear.y = 0.0
            twist_msg.linear.z = 0.0
            
            twist_msg.angular.x = 0.0
            twist_msg.angular.y = 0.0
            twist_msg.angular.z = wz

            self.twist_pub.publish(twist_msg)
        else:
            
            
            self.get_logger().info(f"{self.current_attitude}")



    def obtained_goal(self):
        distance_to_goal = math.sqrt((self.goal_long - self.current_position[0]) ** 2 + (self.goal_lat - self.current_position[1]) ** 2)
        if distance_to_goal < 0.00002 and abs(self.e_theta) < math.radians(0.1):
            self.get_logger().info("Goal reached")
            return True

        return False

    
    def latLonYaw2Geopose(self,latitude: float, longitude: float, yaw: float = 0.0) -> GeoPose:
        """
        Creates a geographic_msgs/msg/GeoPose object from latitude, longitude and yaw
        """
        geopose = GeoPose()

        geopose.position.latitude = latitude
        geopose.position.longitude = longitude
        geopose.orientation = yaw
        return geopose

            
    



        
def main(args=None):
    yaml_file_path = sys.argv[1]
    rclpy.init(args=args)
    node = WaypointNode(yaml_file_path)
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()