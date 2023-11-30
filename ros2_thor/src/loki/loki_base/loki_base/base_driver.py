import rclpy
from rclpy.node import Node
from rclpy.time import Time
from rclpy.duration import Duration
from geometry_msgs.msg import Twist
from loki_msgs.msg import BaseState, ControllerArray, BatteryArray, IOArray, DriveInverted
from sensor_msgs.msg import JointState
from nav_msgs.msg import Odometry
from std_srvs.srv import SetBool, Trigger
from loki_msgs.srv import MotorControllerSetup, CanID, DriveParams, InitPltf, GetSetBool, EvalCanBuffer, StateBase, ContArray, BatteryVars, StatesOfIO, DriveCmds, DeviceCmds, SimDrive, PosZeroAll, PosZero, HomesteeringAll, CotMap, MotCot, SetBools, Params, HomeS
# from tf2 import transform_broadcaster, transform_datatypes
from loki_base.pltf_clc_std import PltfClcStd
import numpy as np
from loki_base.Py_Base_State import PyBaseState

class BaseDriver(Node):

    def __init__(self):
        super().__init__('base_driver')

        #MISC Variables
        drive_mode = 0
        self.latest_base_command = PyBaseState()
        self.basestatemsg = PyBaseState()

        self.emergency_stop = False
        self.latest_base_command_time = self.get_clock().now()
        self.command_timeout_time = Duration(seconds = 0.5)
        self.drive_inverted = False

        # PltfClcStd = PltfClcStd()

        # # Initialize ROS parameters
        # # self.declare_parameter('rate', rclpy.Parameter.Type.INTEGER)
        # self.declare_parameter('can_interface_type', rclpy.Parameter.Type.STRING)
        # self.declare_parameter('can_interface_name', rclpy.Parameter.Type.STRING)

        # # rate_val = self.get_parameter('rate').value
        # can_interface_type = self.get_parameter('can_interface_type').value 
        # can_interface_name = self.get_parameter('can_interface_name').value

        # # Initialize CAN interface type
        # if can_interface_type == "socketcan":
        #     interface_type = 0
        # else:
        #     self.get_logger().error(
        #         "Invalid or missing 'can_interface_type' parameter.")
        #     return

        # self.get_logger().info(f"Using CAN interface {can_interface_name}")

        # Initialize BaseDriver with CAN interface
        # base_driver = BaseDriver()

        self.rate = self.create_rate(10)  # Create rate control object

        # Determine if we're in simulation mode
        self.declare_parameter('simple_sim', rclpy.Parameter.Type.BOOL)
        simple_sim = self.get_parameter('simple_sim').value

        #initializing variables
        self.has_gazebo = False
        # PltfClcStd = PltfClcStd()

        #Parameters from Robot017
        #MOTOR DRIVES
        drive0 = {}
        drive1 = {}
        drive2 = {}
        drive3 = {}
        self.motor_drives = []
        self.joint_names = []
        for i in range(4):
            getnode = "motor_drives.drive{}.node".format(i)
            getx = "motor_drives.drive{}.x".format(i)
            gety = "motor_drives.drive{}.y".format(i)

            self.declare_parameter(getnode, rclpy.Parameter.Type.INTEGER)
            self.declare_parameter(getx, rclpy.Parameter.Type.DOUBLE)
            self.declare_parameter(gety, rclpy.Parameter.Type.DOUBLE)

            node = self.get_parameter(getnode).value
            xmd = self.get_parameter(getx).value
            ymd = self.get_parameter(gety).value

            steering_name = "a_steering{}".format(i)
            self.joint_names.append(steering_name)

            wheel_name = "a_wheel{}".format(i)
            self.joint_names.append(wheel_name)

            if i == 0:
                drive0 = {'Node':node, 'x':xmd, 'y':ymd, 'type':0, 'leg_mesh':0, 'r_wheel':0.2, 'w_wheel':0.16, 'prp_gr_rt':42, 'prp_enc_rt':1024, 'prp_max_rpm':3000, 'prp_sim_a':1.5, 'str_gr_rt':42.8571429, 'str_enc_ppr':1024, 'str_lim':3.078027759, 'str_sim_v':4}
                self.motor_drives.append(drive0)
            elif i == 1:
                drive1 = {'Node':node, 'x':xmd, 'y':ymd, 'type':0, 'leg_mesh':0, 'r_wheel':0.2, 'w_wheel':0.16, 'prp_gr_rt':42, 'prp_enc_rt':1024, 'prp_max_rpm':3000, 'prp_sim_a':1.5, 'str_gr_rt':42.8571429, 'str_enc_ppr':1024, 'str_lim':3.078027759, 'str_sim_v':4}
                self.motor_drives.append(drive1)
            elif i == 2: 
                drive2 = {'Node':node, 'x':xmd, 'y':ymd, 'type':0, 'leg_mesh':0, 'r_wheel':0.2, 'w_wheel':0.16, 'prp_gr_rt':42, 'prp_enc_rt':1024, 'prp_max_rpm':3000, 'prp_sim_a':1.5, 'str_gr_rt':42.8571429, 'str_enc_ppr':1024, 'str_lim':3.078027759, 'str_sim_v':4}
                self.motor_drives.append(drive2)
            elif i == 3:
                drive3 = {'Node':node, 'x':xmd, 'y':ymd, 'type':0, 'leg_mesh':0, 'r_wheel':0.2, 'w_wheel':0.16, 'prp_gr_rt':42, 'prp_enc_rt':1024, 'prp_max_rpm':3000, 'prp_sim_a':1.5, 'str_gr_rt':42.8571429, 'str_enc_ppr':1024, 'str_lim':3.078027759, 'str_sim_v':4}
                self.motor_drives.append(drive3)

        bat0 = {}
        bat1 = {}
        self.batteries = []
        for j in range(2):
            getid = "batteries.bat{}.id".format(j)
            gettype = "batteries.bat{}.type".format(j)
            batx = "batteries.bat{}.x".format(j)
            baty = "batteries.bat{}.y".format(j)
            batyaw = "batteries.bat{}.yaw".format(j)
            batz = "batteries.bat{}.z".format(j)
            getmesh = "batteries.bat{}.bat_mesh".format(j)

            self.declare_parameter(getid, rclpy.Parameter.Type.DOUBLE)
            self.declare_parameter(gettype, rclpy.Parameter.Type.DOUBLE)
            self.declare_parameter(batx, rclpy.Parameter.Type.DOUBLE)
            self.declare_parameter(baty, rclpy.Parameter.Type.DOUBLE)
            self.declare_parameter(batyaw, rclpy.Parameter.Type.DOUBLE)
            self.declare_parameter(batz, rclpy.Parameter.Type.DOUBLE)
            self.declare_parameter(getmesh, rclpy.Parameter.Type.DOUBLE)

            id = self.get_parameter(getid).value
            btype = self.get_parameter(gettype).value
            bx = self.get_parameter(batx).value
            by = self.get_parameter(baty).value
            byaw = self.get_parameter(batyaw).value
            bz = self.get_parameter(batz).value
            bmesh = self.get_parameter(getmesh).value

            if j == 0:
                bat0 = {'id':id, 'type':btype, 'x':bx, 'y':by, 'yaw':byaw, 'z':bz, 'bat_mesh':bmesh}
                self.batteries.append(bat0)
            elif j == 1:
                bat1 = {'id':id, 'type':btype, 'x':bx, 'y':by, 'yaw':byaw, 'z':bz, 'bat_mesh':bmesh}
                self.batteries.append(bat1)
        io0 = {}
        io1 = {}
        self.ios = []
        for k in range(2):
            get_io_id = "io.io{}.id".format(k)
            get_io_type = "io.io{}.type".format(k)
            get_rl0 = "io.io{}.rl0_init_state".format(k)
            get_rl1 = "io.io{}.rl1_init_state".format(k)

            self.declare_parameter(get_io_id, rclpy.Parameter.Type.INTEGER)
            self.declare_parameter(get_io_type, rclpy.Parameter.Type.INTEGER)
            self.declare_parameter(get_rl0, rclpy.Parameter.Type.INTEGER)
            self.declare_parameter(get_rl1, rclpy.Parameter.Type.INTEGER)

            io_id = self.get_parameter(get_io_id).value 
            io_type = self.get_parameter(get_io_type).value 
            io_rl0 = self.get_parameter(get_rl0).value 
            io_rl1 = self.get_parameter(get_rl1).value

            if k == 0:
                io0 = {'id':io_id, 'type':io_type, 'rl0_init_state':io_rl0, 'rl1_init_state':io_rl1}
                self.ios.append(io0)
            elif k == 1:
                io1 = {'id':io_id, 'type':io_type, 'rl0_init_state':io_rl0, 'rl1_init_state':io_rl1}
                self.ios.append(io0)


        #TF2 Params
        self.declare_parameter('tf_prefix', rclpy.Parameter.Type.STRING)
        self.declare_parameter('odom_frame_id', rclpy.Parameter.Type.STRING)
        self.declare_parameter('enable_odom_tf', rclpy.Parameter.Type.BOOL)
        self.declare_parameter('passthrough_gazebo_odometry', rclpy.Parameter.Type.BOOL)
        # self.declare_parameter('twist_covariance', rclpy.Parameter.Type.DOUBLE_ARRAY)      


        self.tf_prefix = self.get_parameter('tf_prefix').value
        self.frame_id = self.get_parameter('odom_frame_id').value
        self.broadcast_tf = self.get_parameter('enable_odom_tf').value
        self.allow_geometry_odometry = self.get_parameter('passthrough_gazebo_odometry').value
        # self.twist_cov_default_array = np.array([0.001,0,0,0,0,0,
        #                                 0,0.001,0,0,0,0,
        #                                 0,0,0.001,0,0,0,
        #                                 0,0,0,0.001,0,0,
        #                                 0,0,0,0,0.001,0,
        #                                 0,0,0,0,0,0.03])
        #                                 #is this how you do it
        
        #Subscribers
        self.basestate_to_msg = self.create_subscription(BaseState, 'basestatetomsg', self.msg_to_base_state_callback, 100)
        self.twist_sub = self.create_subscription(Twist, 'cmd_vel', self.twist_callback, 1)

        #Publishers
        self.joint_command_pub = self.create_publisher(BaseState, 'joint_commands', 1)
        self.joint_state_pub = self.create_publisher(JointState, 'joint_states', 1)
        self.base_state_pub = self.create_publisher(BaseState, 'base_state', 1)
        self.odom_pub = self.create_publisher(Odometry, 'odomery/base_raw', 1)
        self.motor_controller_data_pub = self.create_publisher(ControllerArray, 'motor_controller_data', 1)
        self.battery_pub = self.create_publisher(BatteryArray, 'battery_data', 1)
        self.io_pub = self.create_publisher(IOArray, 'io_data', 1)
        self.base_command_msg = self.create_publisher(BaseState, 'BasePub', 100)
        self.sim_command_msg = self.create_publisher(BaseState, 'simbasestate', 100)
        self.drive_inverted_pub = self.create_publisher(DriveInverted, "drive_inverted", 1)


        #Services
        self.server_setup_controller = self.create_service(MotorControllerSetup, 'setup_motor_controller', self.srv_callback_setup_controller)
        self.server_home_steering = self.create_service(HomeS, 'home_steering', self.srv_callback_home_steering)
        self.server_current_pos_zero = self.create_service(CanID, 'set_home_count_current_pos_zero', self.srv_callback_curent_pos_zero)
        self.server_reset_odom = self.create_service(Trigger, 'reset_base_odom', self.srv_Callback_Reset_odom)
        # self.server_set_drive_params = self.create_service(DriveParams, 'set_drive_params', self.srv_callback_set_drive_params) #no client?? will make regular funciton
        self.server_safety_stop = self.create_service(SetBool, 'safety_stop', self.srv_callback_safety_stop)

        #Clients
        self.cli_initPltf = self.create_client(InitPltf, 'initpltf')
        self.cli_get_set_bool = self.create_client(GetSetBool, 'getsetbool')
        self.cli_eval_can_buffer = self.create_client(EvalCanBuffer, 'eval_can_buffer')
        self.cli_base_state = self.create_client(StateBase, 'statebase')
        self.cli_get_controller_array = self.create_client(ContArray, 'contarray')
        self.cli_get_all_battery_vars = self.create_client(BatteryVars, 'batteryvars')
        self.cli_io_states_to_msg = self.create_client(StatesOfIO, 'statesofio')
        self.cli_send_drive_commands = self.create_client(DriveCmds, 'drivecmds')
        self.cli_send_device_commands = self.create_client(DeviceCmds, 'devicecmds')
        self.cli_sim_drive = self.create_client(SimDrive, 'simdrive')
        self.cli_current_pos_as_zero_all = self.create_client(PosZeroAll, 'poszeroall')
        self.cli_current_pos_as_zero = self.create_client(PosZero, 'poszero')
        self.cli_home_steering_all = self.create_client(HomesteeringAll, "homesteeringall")
        self.cli_setup_motor_controller = self.create_client(MotCot, 'motcot')
        self.cli_get_controller_setup_map = self.create_client(CotMap, 'cotmap')
        # self.cli_call_set_bool = self.create_client(SetBools, 'callsetbool')
        self.cli_set_drive_params = self.create_client(Params, 'params')

        # self.initPltf(interface_type, can_interface_name)


        # if not self.initPltf(interface_type, can_interface_name):
        #     self.get_logger().error("Failed to initialize robot base.")
        #     return
        # else:
        #     self.get_logger().info("Initialized Robot Base")
       

        # self.twist_cov_default_vector = numpy.array(self.twist_cov_default_array).flatten()
        # cov_vector = self.get_parameter('twist_covariance').value
        # self.twist_cov_vector = numpy.array(cov_vector).flatten()
        self.pose_cov = [0.0] * 36
        self.twist_cov = [0.0] * 36

        self.pose_cov = self.twist_cov

        if self.allow_geometry_odometry:
            self.gazebo_odom_sub = self.create_subscription(Odometry, 'odometry/gazebo', 1, self.gazebo_odom_callback)


        
        if self.broadcast_tf:
            self.get_logger().warn("Tmp msg: enable_odom_tf is true! If you want to broadcast your own odom frame, set param to false. Default value is true")
            self.get_logger().info("Broadcasting odometry frame to robot: {} ->base_link" .format(self.frame_id))



        self.loadClcPlugin()



        if not self.initPltf():
            self.get_logger().error("Failed to initialize robot base.")

        else:
            self.get_logger().info("Initialized Robot Base")



        if simple_sim:
            self.get_logger().info("Simulating feedback")

            while rclpy.ok():

                self.set_drive_params()
                self.publish_joint_commands()
                self.sendSimCommands()
                self.handleFeedback()
                # rclpy.spin_once()
                # self.rate.sleep()

        else:
            self.get_logger().info("Assuming feedback from real robot")

            while rclpy.ok():

                self.set_drive_params()
                self.publish_joint_commands()
                self.sendDriveCommands()
                self.sendDeviceCommands()
                self.evalCanBuffer()
                self.handleFeedback()
                # self.get_logger().info("latest_base_command{}".format(self.bsmg.prop_speed))


                # rclpy.spin_once(BaseDriver) 
                # self.rate.sleep()



        

    def loadClcPlugin(self):
        success = True
        motor_drives = self.motor_drives

        PltfClcStd.initialize(PltfClcStd, self, motor_drives)
        PltfClcStd.calc_commands(PltfClcStd, 0,0,0, self.motor_drives, self.latest_base_command, self.drive_inverted)

        return success
    
    def initPltf(self):
        ret = self.client_init_pltf()
        if ret:
            self.get_logger().info("Robot is Initialized")
        else:
            self.get_logger().error("Robot failed to initialize")
            return False
        
        # self.set_bool_map = {}
        if not self.client_get_set_bool():
            self.get_logger().error("setting bool map failed")


        
        # for key, service_name in self.set_bool_map.items():
        #     srv = self.create_service(
        #         SetBool, service_name, self.srv_callback_io_set_bool)
        #     self.servers_io.append(srv)
        #     self.get_logger().info(f"Advertised service: {service_name}")
        
        return True
    
    
    def client_init_pltf(self):
        self.get_logger().info('Initializing Platform...')
        Future = self.cli_initPltf.call_async(InitPltf.Request())
        rclpy.spin_until_future_complete(self, Future)
        response = Future.result()
        return response

    def client_get_set_bool(self):

        Future = self.cli_get_set_bool.call_async(GetSetBool.Request())
        rclpy.spin_until_future_complete(self, Future)
        response = Future.result()

        if not response:
            return False
        # set_bool_string = response.set_bool_strings
        # set_bool_values = response.set_bool_values
        # i = 0
        
        # if len(set_bool_string) == len(set_bool_values):
        #     while i < len(set_bool_values):
        #         self.set_bool_map[set_bool_string[i]] = set_bool_values[i]
        # else:
        #     self.get_logger().error("Bool map does not have equal key to element amounts")
        #     return False
        
        return True

    def evalCanBuffer(self):
        self.client_eval_can_buffer()
    
    def client_eval_can_buffer(self):
        Future = self.cli_eval_can_buffer.call_async(EvalCanBuffer.Request())
        rclpy.spin_until_future_complete(self, Future)
        response = Future.result()
        return

           
    def publish_joint_commands(self):
        latest_base_command_msg = BaseState()
        self.baseStateToMsg(self.latest_base_command_time, self.latest_base_command, latest_base_command_msg)
        self.bsmg = latest_base_command_msg
        # self.get_logger().info("{}".format(latest_base_command_msg))
        self.joint_command_pub.publish(latest_base_command_msg)

    def client_get_base_state(self):
        base_state = 1
        StateBase.Request().base_state = base_state 
        Future = self.cli_base_state.call_async(StateBase.Request())
        response = Future.result()
        return 

    def client_get_cont_array(self):
        on = 1
        ContArray.Request().on = on
        Future = self.cli_get_controller_array.call_async(ContArray.Request())
        rclpy.spin_until_future_complete(self, Future)
        return
        

    def handleFeedback(self):
        self.client_get_base_state()

        base_state = self.basestatemsg
        durat = Duration(seconds = 0.5)

        base_state_msg = BaseState()
        self.baseStateToMsg(self.get_clock().now(), base_state, base_state_msg)
        self.base_state_pub.publish(base_state_msg)

        self.client_get_cont_array()
        odom_msg = Odometry()
        vx = 0.0
        vy = 0.0
        wz = 0.0
        x = 0.0
        y = 0.0
        yaw = 0.0

        if not self.has_gazebo:
            if PltfClcStd.calculateOdometry(PltfClcStd, base_state, vx, vy, wz, x, y, yaw, self.motor_drives, self, durat):
                odom_msg.header.frame_id = self.frame_id
                odom_msg.child_frame_id = "base_link"
                odom_msg.header.stamp = self.get_clock().now().to_msg()

                odom_msg.pose.pose.position.x = x
                odom_msg.pose.pose.position.y = y     
                odom_msg.pose.pose.position.z = 0.0
            
                increase_pose_cov = (abs(vx) > 0.005) or (abs(vy) > 0.005) or (abs(wz) > 0.005)
                i = 0
                while i < 36:
                    self.pose_cov[i] = self.pose_cov[i] + self.twist_cov[i] * increase_pose_cov
                    i += 1

                odom_msg.pose.covariance = self.pose_cov

                odom_msg.twist.twist.linear.x = vx
                odom_msg.twist.twist.linear.y = vy
                odom_msg.twist.twist.angular.z = wz

                odom_msg.twist.covariance = self.twist_cov
                self.odom_pub.publish(odom_msg)
            
            else:
                self.get_logger().warn("odometry calculation failed")
            
        #Joint State
        joint_state_msg = JointState()
        joint_state_msg.header.stamp = self.get_clock().now().to_msg()

        i = 0
        j = 0

        while i < 8:
            joint_state_msg.name.append(self.joint_names[i])
            if (i % 2) == 0:
                joint_state_msg.position.append(base_state.steer_pos[j])
                joint_state_msg.velocity.append(0.0)
            else:
                joint_state_msg.velocity.append(base_state.prop_speed[j])
                joint_state_msg.position.append(0.0)
                j += 1
            i += 1
        
        self.joint_state_pub.publish(joint_state_msg)


        #Battery Feedback
        batt = 1
        self.client_get_All_battery_vars(batt)

        #IO Feedback
        states = 1
        self.client_io_states_to_msg(states)

    def client_get_All_battery_vars(self, batt):
        BatteryVars.Request().batt = batt
        Future = self.cli_get_all_battery_vars.call_async(BatteryVars.Request())
        rclpy.spin_until_future_complete(self, Future)
        batt_vars = Future.result()
        return 
        
    def client_io_states_to_msg(self, states):
        StatesOfIO.Request().states = states
        Future = self.cli_io_states_to_msg.call_async(StatesOfIO.Request())
        rclpy.spin_until_future_complete(self, Future)
        response = Future.result()
        return
        
    
    def twist_callback(self,twist_in):
        self.latest_base_command_time = self.get_clock().now()
        if not (twist_in.linear.x < 0 and twist_in.angular.z < 0):
            if twist_in.linear.x < 0 or twist_in.angular.z < 0:
                self.drive_inverted = True
            else:
                self.drive_inverted = False

        self.latest_base_command = PltfClcStd.calc_commands(PltfClcStd, twist_in.linear.x, twist_in.linear.y, twist_in.angular.z, self.motor_drives, self.latest_base_command, self.drive_inverted)


        # if not twist_in.angular.z == 0:
            # self.get_logger().info("motors help {}".format(self.latest_base_command.steer_pos))

    def gazebo_odom_callback(self, odom_in):
        last_gazebo_odom = odom_in
        
        if not self.has_gazebo:
            self.get_logger().warn("Switching to using Gazebo odometry for odometry/base_raw from now on. We are running in full on simulation.")
            self.has_gazebo = True

        odom_msg = odom_in
        odom_msg.header.frame_id = self.frame_id
        self.odom_pub.publish(odom_msg)


    def sendDriveCommands(self):

        if (self.get_clock().now() > self.latest_base_command_time + self.command_timeout_time) or self.emergency_stop:
            self.latest_base_command = PltfClcStd.setZeroSpeed(PltfClcStd, self.latest_base_command)

        self.client_send_drive_commands()


    def client_send_drive_commands(self):
        commands = 1
        latest_base_command_msg = BaseState()
        self.baseStateToMsg(self.latest_base_command_time, self.latest_base_command, latest_base_command_msg)
        self.base_command_msg.publish(latest_base_command_msg)
        DriveCmds.Request().commands = commands
        Future = self.cli_send_drive_commands.call_async(DriveCmds.Request())
        rclpy.spin_until_future_complete(self, Future)
        response = Future.result()
        return
        

    def sendDeviceCommands(self):
        self.client_send_device_commands()


    def client_send_device_commands(self):
        Future = self.cli_send_device_commands.call_async(DeviceCmds.Request())
        rclpy.spin_until_future_complete(self, Future)
        response = Future.result()
        return
    
    def sendSimCommands(self):
        
        if self.get_clock().now() > self.latest_base_command_time + self.command_timeout_time:
            PltfClcStd.setZeroSpeed(PltfClcStd, self.latest_base_command)
        self.client_simulate_All_Drives()

    def client_simulate_All_Drives(self):
        simcommand = BaseState()
        self.baseStateToMsg(self.latest_base_command_time, self.latest_base_command, simcommand)
        # self.get_logger().info("simcommand{}".format(simcommand))
        self.sim_command_msg.publish(simcommand)
        SimDrive.Request().commands = 1
        Future = self.cli_sim_drive.call_async(SimDrive.Request())
        rclpy.spin_until_future_complete(self, Future)
        response = Future.result()
        return
        
    def setCurrentPosAsZeroAll(self):
        self.client_set_Current_Pos_As_Zero_All()

    def client_set_Current_Pos_As_Zero_All(self):
        zeroall = True
        PosZeroAll.Request().zeroall = zeroall
        Future = self.cli_current_pos_as_zero_all.call_async(PosZeroAll.Request())
        rclpy.spin_until_future_complete(self, Future)
        response = Future.result()
        return
    
    def setCurrentPosAsZero(self, node_id):
        self.client_set_Current_pos_as_zero(node_id)
    
    def client_set_Current_pos_as_zero(self, node_id):
        PosZero.Request().can_id = node_id
        Future = self.cli_current_pos_as_zero.call_async(PosZero.Request())
        rclpy.spin_until_future_complete(self, Future)
        response = Future.result()
        return

    def homeSteeringAll(self):
        return self.client_home_steering_all()
    
    def client_home_steering_all(self):
        Future = self.cli_home_steering_all.call_async(HomesteeringAll.Request())
        rclpy.spin_until_future_complete(self, Future)
        response = Future.result()
        return response
    
    def setup_Motor_Controller(self, node_id, setup_id, setup_value):
        self.client_setup_motor_controller(node_id, setup_id, setup_value)

    def client_setup_motor_controller(self, node_id, setup_id, setup_value):
        MotCot.Request().can_id = node_id
        MotCot.Request().setup_id = setup_id 
        MotCot.Request().setup_value = setup_value
        Future = self.cli_setup_motor_controller.call_async(MotCot.Request())
        rclpy.spin_until_future_complete(self, Future)
        response = Future.result()
        return

    def client_get_controller_setup_map(self, can_id, setup_map):
        CotMap.Request().can_id = can_id
        CotMap.Request().setup_map = setup_map
        Future = self.cli_get_controller_setup_map.call_async(CotMap.Request())
        rclpy.spin_until_future_complete(self, Future)
        response = Future.result()
        self.get_logger().info("help")
        setup_map = response.setup_map
        return

    def srv_callback_setup_controller(self, request, response):
        message = ""
        status = 0


        controller_setup_map_ss = ""
        setup_map = []
        self.client_get_controller_setup_map(request.can_id, setup_map)
        self.get_logger().info("is this back")

        i = 0
        while i < range(setup_map):
            controller_setup_map_ss += f"{i:>4}"
            i += 1

        if request.setup_id < 0 and request.setup_id >= len(setup_map):
            message = "invalid setup ID. Try setup ID = 0 for map"
            status = -2
        elif request.setup_id == 0:
            message = controller_setup_map_ss
            statues = 0
        else:
            self.get_logger().info("Sending setup PDO to controller (CAN ID: {request.can_id}): " f"setup ID: {request.setup_id}, setup value = {request.setup_value}")
            message = f"message sent to controller: CAN ID = {request.can_id}, {setup_map[request.setup_id]} = {request.setup_value}"
            statues = 1

        response.status = status
        response.message = message.str()


    
    def srv_callback_home_steering(self, request, response):
        self.get_logger().info("homing steering")

        if self.homeSteeringAll():
            response.success = True
            response.message = "homing commands sent"
        else:
            response.success = False
            response.message = "homing failed"

    def srv_Callback_Reset_odom(self, request, response):
        self.get_logger().info("Resetting base odometry. x=0, y=0, yaw=0")
        PltfClcStd.zeroOdometryPose(PltfClcStd)
        response.sucess = True
        response.message = "Resetting base odometry. x = 0, y = 0, yaw = 0"

    def set_drive_params(self):
        # num_drives = len(self.motor_drives)

        # for i in range(len(request.params)):
        #     if 0 <= request.params[i].index < num_drives and request.params[i].type in self.motor_drives_[request.params[i].index]:
        #         self.motor_drives_[request.params[i].index][request.params[i].type] = request.params[i].value
        #         response.status += 1
        #     else:
        #         response.message = "One or more params could not be set"

        PltfClcStd.setParams(PltfClcStd, self.motor_drives)
        if not self.client_set_drive_params():
            self.get_logger().info("Set Drive Params failed")
        
        return

    def client_set_drive_params(self):
        # set = True
        # Params.Request().set = set
        Future = self.cli_set_drive_params.call_async(Params.Request()) #Add return False to check
        rclpy.spin_until_future_complete(self, Future)
        response = Future.result()
        return response


    def srv_callback_curent_pos_zero(self, request, response):
        if request.can_id == -1:
            self.setCurrentPosAsZeroAll()
            response.success = True
            response.message = "setting ALL home counts so that current positions are zero"

        elif request.can_id > 0:
            self.setCurrentPosAsZero(request.can_id)
            response.success = True
            response.message = "Setting home count of selected id so thtat current position is zero"
        
        else:
            response.success = False
            response.message = "can_id must be positive or -1 (sets home count for all drives)"

    def srv_callback_safety_stop(self, request, response):
        message = ''
        self.emergency_stop = request.data

        if self.emergency_stop:
            message = "safety stop enabled"
            self.get_logger().info("SAFETY STOP ENABLED")
        else:
            message = "Safety Stop Disabled"
            self.get_logger().info("SAFETY STOP DISABLED")
        
        response.success = True
        response.message = message
       

    def baseStateToMsg(self, time, base_state_in, base_state_out):
        base_state_out.header.stamp = time.to_msg()
        base_state_out.drive_mode = base_state_in.drive_mode
        base_state_out.prop_speed = base_state_in.prop_speed
        base_state_out.prop_pos = base_state_in.prop_pos
        base_state_out.steer_speed = base_state_in.steer_speed
        base_state_out.steer_pos = base_state_in.steer_pos
        base_state_out.steer_max_speed = base_state_in.steer_max_speed
        base_state_out.channel = base_state_in.channel

    def batteryVarsToMsg(self, batt_vars_in, batt_msg_out):
        batt_msg_out = self.loki_base.BatteryDataArray()  

        for elem in batt_vars_in:
            batt_msg = self.loki_base.BatteryData()
            
            batt_msg.battery_id = elem.id
            batt_msg.battery_state = elem.state
            batt_msg.state_of_charge = elem.soc
            batt_msg.state_of_health = elem.soh
            batt_msg.battery_voltage = elem.voltage
            batt_msg.battery_current = elem.current
            batt_msg.charge_fet_on = elem.charge_fet
            batt_msg.discharge_fet_on = elem.discharge_fet
            batt_msg.cycle_count = elem.cycle_count
            batt_msg.battery_capacity = elem.capacity
            batt_msg.temperatures = elem.temps
            batt_msg.battery_alarms.over_voltage_protection = elem.a_over_volt
            batt_msg.battery_alarms.under_voltage_protection = elem.a_under_volt
            batt_msg.battery_alarms.over_temperature_protection = elem.a_over_temp
            batt_msg.battery_alarms.under_temperature_protection = elem.a_under_temp
            batt_msg.battery_alarms.over_charge_current = elem.a_over_charge
            batt_msg.battery_alarms.over_discharge_current = elem.a_over_discharge
            batt_msg.battery_alarms.can_communication_fail = elem.a_can_fail
            batt_msg.battery_alarms.cell_voltage_sensing_fault = elem.a_cell_volt_sens_fault
            batt_msg.battery_alarms.bms_fail = elem.a_bms_fail
            batt_msg.battery_alarms.short_circuit_discharge = elem.a_short_circ_discharge
            batt_msg.battery_alarms.temperature_sensing_fault = elem.a_temp_sens_fault
            batt_msg.battery_alarms.over_voltage_fault = elem.a_over_volt_fault
            batt_msg.battery_alarms.under_voltage_fault = elem.a_under_volt_fault
            batt_msg.battery_alarms.pack_voltage_sensing_fault = elem.a_pack_volt_sens_fault

            batt_msg_out.battery_data.append(batt_msg)

        
    def msg_to_base_state_callback(self, msg):
        self.basestatemsg.drive_mode = msg.drive_mode
        self.basestatemsg.prop_speed = msg.prop_speed
        self.basestatemsg.prop_pos = msg.prop_pos
        self.basestatemsg.steer_speed = msg.steer_speed
        self.basestatemsg.steer_pos = msg.steer_pos
        self.basestatemsg.steer_max_speed = msg.steer_max_speed
        self.basestatemsg.channel = msg.channel



    
def main(args=None):
    rclpy.init(args=args)
    node = BaseDriver()
    rclpy.spin(node)

    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()