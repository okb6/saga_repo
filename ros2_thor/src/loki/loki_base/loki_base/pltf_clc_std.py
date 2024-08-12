import rclpy 
from rclpy.time import Time
from geometry_msgs.msg import Quaternion

# from tf_transformations import quaternion_from_euler

# from rclpy.time import seconds
import time
import angles
import math
import random
import numpy

class PltfClcStd:
    
    def initialize(self, BaseDriver, motor_drives):
        self.mode = 'straight'
        self.timer = 25
        self.mpi = math.pi 
        self.turning_angles = []
        self.number_of_drives = 4
        self.robot_x = 0
        self.robot_y = 0
        self.robot_yaw = 0
        self.previous_odom_timestep = BaseDriver.get_clock().now()

        if self.setParams(self, motor_drives):
            return True

    
    
    def setParams(self, motor_drives):
        self.number_of_drives = len(motor_drives)

        for drive in motor_drives:
            input_angle = math.atan2(drive["x"], drive["y"])
            final_angle = -self.normalize_angle_half_pi(self, input_angle)
            self.turning_angles.append(final_angle)
        return True
    
    def normalize_angle_half_pi(self, angle):
        while abs(angle) > self.mpi/2:
            angle += self.mpi/2 * (-1 * angle/abs(angle))
        return angle
    
    def pause(self, vx, vy, wz):
        pause = False
        if (wz != 0 and (vx == 0 and vy ==0)):
            if self.mode != 'turning':
                pause = True
                self.timer = 5
                self.mode = 'turning'
            else:
                pause = False
        elif (vx != 0 and (wz == 0 and vy == 0)):
            if self.mode != 'straight' and self.mode != 'turning':
                pause = True
                self.timer = 10
                self.mode = 'straight'
            else:
                pause = False
        elif (vy != 0 and (wz == 0 and vx == 0)):
            if self.mode != 'sideways':
                pause = True
                self.timer = 0
                self.mode = 'sideways'
            else:
                pause = False
        elif (vx != 0 and wz != 0 and vy == 0):
            if self.mode != 'straight' or self.mode == 'turning':
                pause = True
                self.mode = 'straight'
                self.timer = 0
            else:
                pause = False

        return pause
            
        


    def calc_commands(self, vx, vy, wz, motor_drives, joint_states_out):

        # if self.pause(self, vx, vy, wz) or self.timer < 15:
        #     self.timer += 1
        #     vx = 0.0
        #     vy = 0.0
        #     wz = 0.0
        
        if wz != 0 and vx == 0 and vy == 0:
            wz = -wz

        speed = [0.0, 0.0, 0.0, 0.0]
        steering = [0.0, 0.0, 0.0, 0.0]

        drive_steer = [0.0, 0.0, 0.0, 0.0]
        mode_speed = [0.0, 0.0, 0.0, 0.0]
        opposite = False
        velocityx = vx
        velocityw = wz
        velocityy = vy
        


        if (wz < 0 and vx == 0 and vy == 0) or (wz >= 0 and vx < 0 and vy >= 0) or (wz >= 0 and vx >= 0 and vy < 0):
            
            neg = -1
            
            wz = abs(wz)
            vy = abs(vy)
            vx = abs(vx)
        else:
            neg = 1
            wz = abs(wz)
            vy = abs(vy)
            vx = abs(vx)

        if wz != 0:
            turn_rad_d = (math.sqrt(pow(vx,2) + pow(vy,2)))/wz
            turn_rad_ang = math.atan2(vy, vx)

            turn_rad_x = - turn_rad_d * math.sin(turn_rad_ang)
            turn_rad_y = turn_rad_d * math.cos(turn_rad_ang)

            i = 0
            while i < 4:
                drive_x = motor_drives[i]["x"]
                drive_y = motor_drives[i]["y"]
                if wz < 0:
                    before_norm = self.normalize_angle(self, -math.atan2((turn_rad_x - drive_x), (turn_rad_y - drive_y)) + math.pi)
                else:
                    before_norm = self.normalize_angle(self, -math.atan2((turn_rad_x - drive_x), (turn_rad_y - drive_y))) 
                

                drive_steer[i] = before_norm
                mode_speed[i] = math.sqrt(pow(turn_rad_x - drive_x, 2) + pow(turn_rad_y - drive_y, 2)) * abs(wz)

                i += 1

            i = 0 
            while i < 4:
                steering[i] = drive_steer[i]
                speed[i] = mode_speed[i] * neg
                i += 1

        else:
            i = 0
            while i < 4:
                steering[i] = math.atan2(vy, vx)
                speed[i] = math.sqrt(pow(vx,2) + pow(vy,2)) * neg

               
                i += 1
        i = 0
        while i < 4: 
            if (steering[i] < 0):
                steering[i] += math.pi
            elif steering[i] > 0:
                steering[i] = steering[i] - math.pi


            i += 1

        if (vy != 0):
            for i in range(4):
                speed[i] *= -1


        if (wz != 0 and vx == 0 and vy == 0):
            steering[2] *= -1
            speed[2] *= -1
            speed[3] *= -1
            steering[3] *= -1


        if (velocityw < 0 and velocityx > 0) or (velocityw > 0 and velocityx < 0):
            opp_switch = steering[3]
            steering[3] = steering[1]
            steering[1] = opp_switch

            opp_switch = speed[3]
            speed[3] = speed[1]
            speed[1] = opp_switch

            opp_switch = steering[0]
            steering[0] = steering[2]
            steering[2] = opp_switch

            opp_switch = speed[0]
            speed[0] = speed[2]
            speed[2] = opp_switch

        elif velocityw < 0 and (velocityx < 0 or velocityy < 0):
            for i in range(4):
                speed[i] *= -1
        



        numpy.resize(joint_states_out.prop_speed, self.number_of_drives)
        numpy.resize(joint_states_out.steer_pos, self.number_of_drives)
        numpy.resize(joint_states_out.steer_max_speed, self.number_of_drives)
        numpy.resize(joint_states_out.channel, self.number_of_drives)

        i = 0
        while i < self.number_of_drives:
            joint_states_out.steer_pos[i] = steering[i]
            joint_states_out.prop_speed[i] = speed[i]

            if wz != 0 and vx != 0:
                if not (wz > 0 and vx < 0):
                    joint_states_out.prop_speed[i] *= -1

            # if velocityw < 0 and velocityx < 0:
            #     joint_states_out.prop_speed[i] *= -1

            i += 1
        return joint_states_out



                
    def normalize_angle(self, angle):
        normalized_angle = angle % (2 * math.pi)
        if normalized_angle > math.pi:
            normalized_angle -= 2 * math.pi
    
        # Adjust to -pi/2 to pi/2
        if normalized_angle > math.pi / 2:
           normalized_angle = math.pi - normalized_angle
        elif normalized_angle < -math.pi / 2:
           normalized_angle = -math.pi - normalized_angle
    
        return normalized_angle

    

    def setZeroSpeed(self, joint_states_out):
        i = 0
        while i < len(joint_states_out.prop_speed):
            joint_states_out.prop_speed[i] = 0.0
            i += 1
        return joint_states_out
    
    def calculateOdometry(self, BaseDriver, joint_states_in, odom_out, motor_drives):
        current_odom_timestep = BaseDriver.get_clock().now()

        dt = (current_odom_timestep.nanoseconds - self.previous_odom_timestep.nanoseconds) * 1e-9


        if (self.number_of_drives > 1):
            rot_y = 0
            rot_x = 0
            counted = 0
            inf_count = 0
            iterations = 40

            for i in range(iterations):
                rand_drive_1 = 0
                rand_drive_2 = 0

                while (rand_drive_1 == rand_drive_2):
                    rand_drive_1 = random.randint(0,3)
                    rand_drive_2 = random.randint(0,3)
                
                x_1 = motor_drives[rand_drive_1]["x"]
                y_1 = motor_drives[rand_drive_1]["y"]
                a_1 = -joint_states_in.steer_pos[rand_drive_1]
                x_2 = motor_drives[rand_drive_2]["x"]
                y_2 = motor_drives[rand_drive_2]["y"]
                a_2 = -joint_states_in.steer_pos[rand_drive_2]

                d12_x = x_2 - x_1
                d12_y = y_2 - y_1
                v1_unitv_x = math.sin(a_1)
                v1_unitv_y = math.cos(a_1)
                v2_unitv_x = math.sin(a_2)
                v2_unitv_y = math.cos(a_2)

                d12_dot_v1_unitv = (d12_x * v1_unitv_x + d12_y * v1_unitv_y) / math.sqrt(pow(d12_x, 2) + pow(d12_y, 2))
                d12_dot_v2_unitv = (d12_x * v2_unitv_x + d12_y * v2_unitv_y) / math.sqrt(pow(d12_x, 2) + pow(d12_y, 2))

                if (joint_states_in.prop_speed[rand_drive_1] == 0 and joint_states_in.prop_speed[rand_drive_2] == 0):
                    inf_count += 1
                elif math.fabs(d12_dot_v1_unitv) > 0.9 and math.fabs(d12_dot_v2_unitv) > 0.9:
                    vx_1 = joint_states_in.prop_speed[rand_drive_1] * math.cos(joint_states_in.steer_pos[rand_drive_1])
                    vy_1 = joint_states_in.prop_speed[rand_drive_1] * math.sin(joint_states_in.steer_pos[rand_drive_1])
                    vx_2 = joint_states_in.prop_speed[rand_drive_2] * math.cos(joint_states_in.steer_pos[rand_drive_2])
                    vy_2 = joint_states_in.prop_speed[rand_drive_2] * math.sin(joint_states_in.steer_pos[rand_drive_2]) 

                    if (vx_1 == vx_2):
                        inf_count += 1
                    else:
                        if (x_2 == x_1):
                            x_2 += 0.000001 * (1-2 * random.randint(0, 1)) ##not sure if 0 1 or 0 2

                        a_temp_1 = (y_2 - y_1) / (x_2 - x_1)
                        b_temp_1 = y_2 - a_temp_1 * x_2

                        vx_1_temp = x_1 + vx_1
                        vy_1_temp = y_1 + vy_1
                        vx_2_temp = x_2 + vx_2
                        vy_2_temp = y_2 + vy_2

                        if vx_2_temp == vx_1_temp:
                            inf_count += 1
                        else:
                            a_temp_2 = (vy_2_temp - vy_1_temp) / (vx_2_temp - vx_1_temp)
                            b_temp_2 = vy_2_temp - a_temp_2 * vx_2_temp

                            if (a_temp_1 == a_temp_2):
                                inf_count += 1
                            else:
                                temp_rot_x = (b_temp_2 - b_temp_1) / (a_temp_1 - a_temp_2)
                                temp_rot_y = a_temp_1 * temp_rot_x + b_temp_1

                                rot_y += temp_rot_y
                                rot_x += temp_rot_x
                                counted += 1
                elif (math.fabs(d12_dot_v1_unitv) > 0.9 and math.fabs(d12_dot_v2_unitv) < 0.1):
                    rot_y += y_1
                    rot_x += x_1 
                    counted += 1
                elif (math.fabs(d12_dot_v1_unitv) < 0.1 and math.fabs(d12_dot_v2_unitv) > 0.9):
                    rot_y += y_2
                    rot_x += x_2 
                    counted += 1
                elif (math.tan(a_1) == math.tan(a_2)):
                    inf_count += 1
                else:
                    temp_rot_y = ( (x_1 - x_2 - y_1 * math.tan(a_1) + y_2 * math.tan(a_2) ) / ( math.tan(a_2) - math.tan(a_1) ))
                    temp_rot_x = (x_1 - math.tan(a_1) * (y_1 - temp_rot_y))

                    if (math.isinf(temp_rot_y) or math.isinf(temp_rot_x)):
                        inf_count += 1
                    elif (not math.isnan(temp_rot_y) and not math.isnan(temp_rot_x)):
                        rot_y += temp_rot_y
                        rot_x += temp_rot_x
                        counted += 1
                    else:
                        BaseDriver.get_logger().info("was nan for some reason")
            if counted > 0:
                rot_y = rot_y / counted 
                rot_x = rot_x / counted 
            else:
                BaseDriver.get_logger().info("coutned is ZERO", once=True)

            translating = (inf_count / iterations) > 0.5

            vx = 0
            vy = 0
            wz = 0

            if (translating):
                for i in range(self.number_of_drives):
                    temp_vx = joint_states_in.prop_speed[i] * math.cos(joint_states_in.steer_pos[i])
                    temp_vy = joint_states_in.prop_speed[i] * math.sin(joint_states_in.steer_pos[i])

                    vx += temp_vx / self.number_of_drives
                    vy += temp_vy / self.number_of_drives

            else:
                wz_used = 0
                for i in range(self.number_of_drives):
                    temp_x = motor_drives[i]["x"]
                    temp_y = motor_drives[i]["y"]
                    temp_dx = temp_x - rot_x
                    temp_dy = temp_y - rot_y
                    temp_vx = joint_states_in.prop_speed[i] * math.cos(joint_states_in.steer_pos[i])
                    temp_vy = joint_states_in.prop_speed[i] * math.sin(joint_states_in.steer_pos[i])
                    temp_rad = math.sqrt(pow(temp_x - rot_x, 2) + pow(temp_y - rot_y, 2))
                    temp_wz = (temp_dx * temp_vy - temp_dy * temp_vx) / pow(temp_rad,2)

                    if (temp_wz != 0):
                        wz_used += 1
                    
                    wz += temp_wz
                wz /= wz_used

                # if (abs(wz) > 10 or abs(wz) <= 1.0e-4):
                #     # BaseDriver.get_logger().info(f"{wz}")
                #     wz = 0
                

                rad_ang = math.atan2(rot_x, rot_y)

                if (math.isinf(rad_ang) or math.isnan(rad_ang)):
                    rad_ang = math.atan2(rot_x+0.0000001,rot_y)
                
                rad_d = math.sqrt(pow(rot_y,2) + pow(rot_x,2))
                vx = rad_d * wz * math.cos(rad_ang)
                vy = rad_d * wz * -math.sin(rad_ang)

            if (not math.isnan(vx) and not math.isnan(vy) and not math.isnan(wz)):
                self.robot_x += (vx * math.cos(self.robot_yaw) - vy * math.sin(self.robot_yaw)) * dt
                self.robot_y += (vx * math.sin(self.robot_yaw) + vy * math.cos(self.robot_yaw)) * dt 
                self.robot_yaw += wz * dt
            else:
                BaseDriver.get_logger().info(f"Translating {translating}")
                return None

            odom_out.header.frame_id = "odom"
            odom_out.child_frame_id = "base_link"
            odom_out.header.stamp = current_odom_timestep.to_msg()

            odom_out.pose.pose.position.x = self.robot_x
            odom_out.pose.pose.position.y = self.robot_y 
            odom_out.pose.pose.position.z = 0.0
            q = self.quaternion_from_euler(self,0, 0, self.robot_yaw)
            odom_out.pose.pose.orientation.x = q.x
            odom_out.pose.pose.orientation.y = q.y
            odom_out.pose.pose.orientation.z = q.z
            odom_out.pose.pose.orientation.w = q.w
            pose_cov = [0.001,0.0,0.0,0.0,0.0,0.0,
                        0.0,0.001,0.0,0.0,0.0,0.0,
                        0.0,0.0,0.001,0.0,0.0,0.0,
                        0.0,0.0,0.0,0.001,0.0,0.0,
                        0.0,0.0,0.0,0.0,0.001,0.0,
                        0.0,0.0,0.0,0.0,0.0,0.03]
            odom_out.pose.covariance = pose_cov 
            odom_out.twist.twist.linear.x = vx 
            odom_out.twist.twist.linear.y = vy
            odom_out.twist.twist.angular.z = float(wz)
            twist_cov = [0.001,0.0,0.0,0.0,0.0,0.0,
                        0.0,0.001,0.0,0.0,0.0,0.0,
                        0.0,0.0,0.001,0.0,0.0,0.0,
                        0.0,0.0,0.0,0.001,0.0,0.0,
                        0.0,0.0,0.0,0.0,0.001,0.0,
                        0.0,0.0,0.0,0.0,0.0,0.03]

            odom_out.twist.covariance = twist_cov 

            self.previous_odom_timestep = current_odom_timestep

        return odom_out

    def quaternion_from_euler(self,roll, pitch, yaw):
        """
        Converts euler roll, pitch, yaw to quaternion
        """
        cy = math.cos(yaw * 0.5)
        sy = math.sin(yaw * 0.5)
        cp = math.cos(pitch * 0.5)
        sp = math.sin(pitch * 0.5)
        cr = math.cos(roll * 0.5)
        sr = math.sin(roll * 0.5)

        q = Quaternion()
        q.w = cy * cp * cr + sy * sp * sr
        q.x = cy * cp * sr - sy * sp * cr
        q.y = sy * cp * sr + cy * sp * cr
        q.z = sy * cp * cr - cy * sp * sr
        return q
                


    
    def zeroOdometryPose(self):
        self.robot_x = 0
        self.robot_y = 0
        self.robot_yaw = 0

                  