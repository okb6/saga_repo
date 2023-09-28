import rclpy
import os
import math
from sensor_msgs.msg import Joy
from geometry_msgs.msg import Twist
from std_msgs.msg import Bool
from std_srvs.srv import Trigger, SetBool
from rclpy.node import Node

class TeleopNode(Node):
    def __init__(self):
        super().__init__('teleop_node')
        self.get_logger().info("started Teleop Node")

        params_loaded = self.lookupParameters()

        if params_loaded:
            self.get_logger().info("Parameters read from ROS parameter server")
        else:
            self.get_logger().info("One or more parameters could not be found on ROS parameter server. Exiting Program")
            exit(0)
        
        #SUBSCRIBERS
        self.joy_sub = self.create_subscription(Joy, 'joy', self.joy_callback, 1)

        #PUBLISHERS
        self.twist_pub = self.create_publisher(Twist, 'cmd_vel', 1)
        self.lock_pub = self.create_publsher(Bool, 'joy_priority', 1)

        #Clients
        self.home_client = self.create_client(Trigger, 'home_steering')

        #Services
        self.block_auto_mode_srv = self.create_service(Bool, 'block_auto_mode', self.srv_Callback_Block_Auto)
        self.set_auto_mode_srv = self.create_service(Bool, 'set_auto_mode', self.srv_Callback_Set_Auto_mode)

        #Initializing Variables
        self.m_pi = math.pi
        self.Mode_Forward = 0
        self.Mode_Left = 1
        self.Mode_Turning = 2
        self.Mode_omni = 3

        self.previous_drive_mode = self.Mode_Forward
        self.previous_non_turn_mode = self.Mode_Forward
        self.previous_buttons.resize(self.number_of_buttons)
        self.turning_buttons_initiated = False
        self.Default_Turning_Calc = 1.0

        self.teleop_lock_on = True
        self.block_auto_mode_on = False
        self.ang_max = self.m_pi/2
        self.ang_min = 0.00 
        self.deadzone = 0.2
        self.turning_limit = 0.8

        self.a = (self.ang_max - self.ang_min) / (1 - self.deadzone)
        self.b = self.ang_min - self.deadzone * self.a

    def lookupParameters(self):
        self.get_logger().info("Looking up Paramters")
        trigger_string_map = ''
        params_loaded = True

        #Lookup turning radius
        self.declare_parameter(
            paramters=[
                ('turn_calc_w', self.Default_Turning_Calc)
                ('turn_calc_1', self.Default_Turning_Calc)
            ]
        )

        self.turn_calc_w = self.get_parameter('turn_calc_w').value
        self.turn_calc_1 = self.get_parameter('turn_calc_1').value
        self.get_logger().info('min turning w: %f, min turning 1: %f' %self.turn_calc_w %self.turn_calc_1)

        #Lookup axis and button map
        self.declare_parameter(
            paramters=[
                ('axis_map')
                ('axis_vx')
                ('axis_wz')
                ('button_map')
            ]
        )
        self.axis_map = self.get_parameter('axis_map').value
        self.axis_vx = self.get_parameter('axis_vx').value
        self.axis_wz = self.get_parameter('axis_wz').value
        self.button_map = self.get_parameter('button_map').value

        if len(self.axis_map) == 0 and len(self.axis_vx) == 0 and len(self.axis_wz) == 0:
            params_loaded = False
        elif len(self.button_map) == 0:
            self.get_logger().info("No button map on parameter server")

        #find the higheset button index
        self.number_of_buttons = 0
        for key, value in self.button_map.items():
            if value > self.number_of_buttons:
                self.number_of_buttons = value
        
        # Turning safety button
        if self.get_parameter('button_turning_safety').get_parameter_value().bool_value:
            self.button_turning_safety = True
        self.get_logger().info("button_turning_safety selected: %s", str(self.button_turning_safety))

        # Lookup homing button combination
        if self.get_parameter('home_buttons').get_parameter_value().bool_value:
            self.home_buttons = True
        self.get_logger().info("homing_buttons selected: %s", str(self.home_buttons))

        # Lookup omni button combination
        if self.get_parameter('omni_buttons').get_parameter_value().bool_value:
            self.omni_buttons = True
        self.get_logger().info("omni_buttons selected: %s", str(self.omni_buttons))

        #Lookup trigger services
        trigger_string_map = self.get_parameter('trigger_map').get_parameter_value().string_map_value
        for key, value in trigger_string_map.items():
            if value:
                self.get_logger().info("%s mapped to <function> + <%s>", value, key)
                self.custom_trigger_map[key] = self.create_client(Trigger, value)

        # Default velocity gain buttons
        if self.get_parameter('kv_default_buttons').get_parameter_value().bool_value:
            self.kv_default_buttons = True
        self.get_logger().info("Default velocity gain buttons selected: %s", str(self.kv_default_buttons))

        # Parameters for gains
        self.kv_min = self.get_parameter('gains/kv_min').get_parameter_value().double_value
        self.kv_max = self.get_parameter('gains/kv_max').get_parameter_value().double_value
        self.dkv = self.get_parameter('gains/kv_increment').get_parameter_value().double_value
        self.kv_default = self.get_parameter('gains/kv_default').get_parameter_value().double_value
        self.kv = self.kv_default

        # Drive mode buttons
        if (
            self.get_parameter('mode_forward_buttons').get_parameter_value().bool_value
            and self.get_parameter('mode_left_buttons').get_parameter_value().bool_value
        ):
            self.mode_forward_buttons = True
            self.mode_left_buttons = True
        self.get_logger().info("Drive mode buttons selected: %s", str(self.mode_forward_buttons and self.mode_left_buttons))
        
        return params_loaded
    
    def buttonifyAxes(self, axes_in):
        buttoned = []
        thresh = 0.9
        i = 0
        for i in range(len(axes_in)):
            if axes_in[i] > thresh:
                buttoned.append(1)
            else:
                buttoned.append(0)
        return buttoned
    
    def evaluateButtonPress(self, button_combo):
        button_combo_pressed = True
        previous_button_combo_pressed = True

        for button in button_combo:
            button_index = self.button_map[button]
            button_combo_pressed &= bool(self.buttons[button_index])
            previous_button_combo_pressed &= bool(self.previous_buttons[button_index])

        if button_combo_pressed and not previous_button_combo_pressed:
            return True
        else:
            return False
        
    def evaluateButtonPress(self, button):
        button_pressed = True
        previous_button_pressed = True
        button_pressed &= bool(self.buttons[self.button_map[button]])
        previous_button_pressed &= bool(self.previous_buttons[self.button_map[button]])

        if button_pressed and not previous_button_pressed:
            return True
        else:
            return False

    def srv_Callback_Block_Auto(self, request, response):
        message = ''
        self.block_auto_mode_on = request.data
        if self.block_auto_mode_on:
            message = 'Auto Mode Blocked'
            self.get_logger().info("Auto Mode Blocked!!!!")

            self.teleop_lock_on = True
            lock_msg = True
            lock_msg.data = self.teleop_lock_on
            self.lock_pub.publish(lock_msg)

        else:
            message = "Auto Mode Unblocked"
            self.get_logger().info("Auto Mode unblocked")
        
        response.success = True
        response.message = message
        return response
    
    def srv_Callback_Set_Auto_Mode(self, request, response):
        message = ''
        self.teleop_lock_on = request.data
        if self.block_auto_mode_on:
            message = 'Robot in Auto Mode'
            self.get_logger().info("Robot in Auto Mode")
        else:
            message = 'Robot in manual Mode'
            self.get_logger().info('Robot in Manual Mode')

        lock_msg = True
        lock_msg.data = self.teleop_lock_on
        self.lock_pub.publish(lock_msg)
        response.success = True
        response.message = message
        return response
    
    def joy_callback(self, joy):
        mode = self.previous_drive_mode
        vx = None
        vy = None
        wz = None
        
        self.buttons.clear()
        self.axes.clear()

        self.buttons = joy.buttons
        self.axes = joy.axes

        int_axes = self.buttonifyAxes(self.axes)
        self.buttons.extend(int_axes)
        
        #get axes of intrest
        axis_v_primary = self.axes[self.axis_map['axis_vx']]
        axis_v_secondary = self.axes[self.axis_map['axis_vy']]
        axis_wx = self.axes[self.axis_map['axis_wz']]

        if not self.turning_buttons_initiated and self.axes[self.axis_map["axis_turn_left"]] == 1 and self.axes[self.axis_map["axis_turn_right"]] == 1:
            self.turning_buttons_initiated = True
        
        if self.buttons[self.button_map["button_teleop_lock"]]:
            if self.buttons[self.button_map["button_function"]] and not self.previous_buttons[self.button_map['button_function']] and self.teleop_lock_on and not self.block_auto_mode_on:
                self.teleop_lock_on = False
                lock_msg = None
                lock_msg.data = self.teleop_lock_on
                self.lock_pub.publish(lock_msg)
            elif not self.previous_buttons[self.button_map["button_teleop_lock"]]:
                self.teleop_lock_on = True
            
        
        if self.teleop_lock_on:
            lock_msg = None
            lock_msg.data = self.teleop_lock_on
            self.lock_pub.publish(lock_msg)
        
        if self.buttons[self.button_map["button_function"]]:
            for key, service_client in self.custom_trigger_map.items():
                button_index = self.button_map[key]
                button_pressed = self.buttons[button_index] and not self.previous_buttons[button_index]
                
                if button_pressed:
                    srv = Trigger.Request()
                    self.get_logger().info("calling service %s" %str(key))

                if service_client.call(srv):
                    self.get_logger().info("finished Calling")
                else:
                    self.get_logger().info("callling service failed")
                
        elif self.evaluateButtonPress(self.home_buttons):
            srv = Trigger.Request()
            self.get_logger().info("calling service: home_steering")
            
            if self.home_client.call(srv):
                self.get_logger().info("finished calling")
            else:
                self.get_logger().info("calling homing service failed")
            
        ##################
        #MODES OF TURNING#
        ##################

        if self.axes[self.axis_map["axis-turn_left"]] < self.turning_limit or self.axes[self.axis_map["axis_turn_right"]] < self.turning_limit and self.buttons[self.button_map[self.button_turning_safety]] and self.turning_buttons_initiated:
            mode = self.Mode_Turning
        elif abs(axis_v_primary) > self.deadzone and self.previous_drive_mode == self.Mode_Turning:
            mode = self.previous_non_turn_mode
        elif self.evaluateButtonPress(self.mode_forward_buttons):
            mode = self.Mode_Forward
            self.previous_non_turn_mode = self.Mode_Forward
        elif self.evaluateButtonPress(self.mode_left_buttons):
            mode = self.Mode_Left
            self.previous_non_turn_mode = self.Mode_Left
        elif self.evaluateButtonPress(self.omni_buttons):
            mode = self.Mode_omni
            self.previous_non_turn_mode = self.Mode_omni
        
        #############
        ####Gains####
        #############

        if self.evaluateButtonPress(self.kv_default_buttons):
            self.kv = self.kv_default
        elif self.evaluateButtonPress("button_more_gain"):
            self.kv += self.dkv
        elif self.evaluateButtonPress("button_less_gain"):
            self.kv -= self.dkv
        
        if self.kv > self.kv_max:
            self.kv = self.kv_max
        elif self.kv < self.kv_min:
            self.kv = self.kv_min

        #######################
        ###CALCULATE COMANDS###
        #######################

        if mode == self.Mode_Turning:
            vx = 0
            vy = 0
            
            if self.buttons[self.button_map[self.button_turning_safety]]:
                wz = (0.5 - 0.5 * self.axes[self.axis_map["axis_turn_left"]]) - (0.5 - 0.5 * self.axes[self.axis_map["axis_turn_right"]])
            else:
                wz = 0
            
            if wz == 0:
                wz = 0.00001
        else:
            
            if axis_v_primary > -self.deadzone and axis_v_primary < self.deadzone:
                axis_v_primary = 0
            
            axis_v_primary *= self.kv
            axis_v_secondary *= self.kv

            if self.axis_wz > -self.deadzone and self.axis_wz < self.deadzone:
                wz = 0
            elif self.axis_wz > 0:
                ang = self.a * self.axis_wz + self.b 
                radius = self.turn_calc_1 / (math.tan(ang)) + self.turn_calc_w
                wz = axis_v_primary / radius
            else:
                ang = (self.a * self.axis_wz - self.b)
                radius = self.turn_calc_1 / (math.tan(ang)) - self.turn_calc_w
                wz = axis_v_primary / radius
            
            if mode == self.Mode_Forward:
                vx = axis_v_primary
                vy = 0
            elif mode == self.Mode_Left:
                vy = axis_v_primary
                if vy == 0:
                    vy = 0.000001
                vx = 0
            if mode == self.Mode_omni:
                vx = axis_v_primary
                vy = axis_v_secondary
                if abs(vx) > 0 or abs(vy) > 0 or self.buttons[self.buttons_map["button_6"]]:
                    wz = self.axis_wz * 1.5 * self.kv * (1 -2 * (abs(math.atan2(vy,vx)) > self.m_pi / 2))
                else:
                    wz = 0
                
        twist_msg = Twist()

        twist_msg.linear.x = vx
        twist_msg.linear.y = vy
        twist_msg.linear.z = 0
        
        twist_msg.angular.x = 0
        twist_msg.angular.y = 0
        twist_msg.angular.z = wz

        if self.teleop_lock_on:
            self.twist_pub.publish(twist_msg)
        
        self.previous_drive_mode = mode

        for i in range(len(self.number_of_buttons)):
            self.previous_buttons[i]= self.buttons[i]
        
def main(args=None):
    rclpy.init(args=args)
    node = TeleopNode()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()