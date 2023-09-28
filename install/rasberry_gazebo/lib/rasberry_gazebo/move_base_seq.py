#!/usr/bin/env python3
# license removed for brevity
import rclpy
from rclpy.action import ActionClient
from move_base_msgs.action import MoveBase
from geometry_msgs.msg import Pose, Point, Quaternion
from tf2_ros import TransformListener, TransformStamped
from tf2_ros import TransformException
import math

class MoveBaseSeq:

    def __init__(self):
        rclpy.init()

        self.node = rclpy.create_node('move_base_sequence')

        points_seq = self.node.get_parameter('move_base_seq/p_seq').get_parameter_value().integer_array_value
        yaweulerangles_seq = self.node.get_parameter('move_base_seq/yea_seq').get_parameter_value().double_array_value

        quat_seq = list()
        self.pose_seq = list()
        self.goal_cnt = 0

        tf_buffer = rclpy.get_global_executor().create_buffer()
        self.tf_listener = TransformListener(tf_buffer)

        for yawangle in yaweulerangles_seq:
            quat_seq.append(Quaternion(*quaternion_from_euler(0, 0, yawangle*math.pi/180, axes='sxyz')))

        n = 3
        points = [points_seq[i:i+n] for i in range(0, len(points_seq), n)]

        for point in points:
            self.pose_seq.append(Pose(position=Point(*point), orientation=quat_seq[n-3]))
            n += 1

        self.client = ActionClient(self.node, MoveBase, '/actor00/move_base')
        self.node.get_logger().info("Waiting for move_base action server...")

        self.client.wait_for_server()

        self.node.get_logger().info("Connected to move base server")
        self.node.get_logger().info("Starting goals achievements ...")

        self.movebase_client()

    def active_cb(self):
        self.node.get_logger().info("Goal pose " + str(self.goal_cnt+1) + " is now being processed by the Action Server...")

    def feedback_cb(self, feedback):
        self.node.get_logger().info("Feedback for goal pose " + str(self.goal_cnt+1) + " received")

    def done_cb(self, future):
        status = future.result().status

        if status == GoalStatus.STATUS_ACCEPTED:
            self.node.get_logger().info("Goal pose " + str(self.goal_cnt) + " received a cancel request after it started executing, completed execution!")

        if status == GoalStatus.STATUS_SUCCEEDED:
            self.node.get_logger().info("Goal pose " + str(self.goal_cnt) + " reached")
            if self.goal_cnt < len(self.pose_seq):
                next_goal = MoveBase.Goal()
                next_goal.target_pose.header.frame_id = "map"
                next_goal.target_pose.header.stamp = self.node.get_clock().now().to_msg()
                next_goal.target_pose.pose = self.pose_seq[self.goal_cnt]

                self.node.get_logger().info("Sending goal pose " + str(self.goal_cnt+1) + " to Action Server")
                self.node.get_logger().info(str(self.pose_seq[self.goal_cnt]))

                self.goal_cnt += 1
                self.client.send_goal_async(next_goal).add_done_callback(self.done_cb)
            else:
                self.node.get_logger().info("Final goal pose reached!")
                self.node.get_logger().info("Shutting down!")
                rclpy.shutdown()

    def movebase_client(self):
        goal = MoveBase.Goal()
        goal.target_pose.header.frame_id = "map"
        goal.target_pose.header.stamp = self.node.get_clock().now().to_msg()
        goal.target_pose.pose = self.pose_seq[self.goal_cnt]

        self.node.get_logger().info("Sending goal pose " + str(self.goal_cnt+1) + " to Action Server")
        self.node.get_logger().info(str(self.pose_seq[self.goal_cnt]))

        self.goal_cnt += 1
        self.client.send_goal_async(goal).add_done_callback(self.done_cb)

        try:
            rclpy.spin_until_future_complete(self.node, self.client.future)
        except KeyboardInterrupt:
            self.node.get_logger().info("KeyboardInterrupt, shutting down!")

if __name__ == '__main__':
    try:
        MoveBaseSeq()
    except Exception as e:
        print("Error:", e)
