#include "rclcpp/rclcpp.hpp"
#include <iostream>
#include "std_srvs/srv/set_bool.hpp"

#include "loki_msgs/srv/battery_vars.hpp"
#include "loki_msgs/srv/cont_array.hpp"
#include "loki_msgs/srv/cot_map.hpp"
#include "loki_msgs/srv/device_cmds.hpp"
#include "loki_msgs/srv/drive_cmds.hpp"
#include "loki_msgs/srv/drive_params.hpp"
#include "loki_msgs/srv/eval_can_buffer.hpp"
#include "loki_msgs/srv/get_set_bool.hpp"
#include "loki_msgs/srv/homesteering_all.hpp"
#include "loki_msgs/srv/init_pltf.hpp"
#include "loki_msgs/srv/mot_cot.hpp"
#include "loki_msgs/srv/motor_controller_setup.hpp"
#include "loki_msgs/srv/pos_zero.hpp"
#include "loki_msgs/srv/pos_zero_all.hpp"
#include "loki_msgs/srv/sim_drive.hpp"
#include "loki_msgs/srv/state_base.hpp"
#include "loki_msgs/srv/states_of_io.hpp"
#include "loki_msgs/srv/drive_cmds.hpp"
// #include "loki_can_devices/can_ctrl_pltf.h"
#include "loki_msgs/srv/set_bools.hpp"
#include "loki_msgs/srv/init_pltf.hpp"
#include "loki_msgs/srv/get_set_bool.hpp"
#include "loki_msgs/msg/controller_array.hpp"
#include "loki_msgs/msg/controller_config.hpp"
#include "loki_msgs/msg/controller_info.hpp"
#include "loki_msgs/msg/controller_state.hpp"
#include "loki_msgs/msg/controller_status_flag.hpp"
#include "loki_msgs/msg/io_state.hpp"
#include "loki_msgs/msg/io_array.hpp"
#include "loki_msgs/msg/battery_array.hpp"
#include "loki_msgs/msg/base_state.hpp"
#include "loki_msgs/srv/params.hpp"

#include <loki_can_devices/can_ctrl_pltf.h>
#include <loki_can_devices/can_frame.h>

#include <memory>
#include <string>
#include <map>
#include <ctime>

CanCtrlPltf::BaseState base_command_out_;
std::vector<std::map<std::string, double> > motor_drives_;
std::vector<std::map<std::string, double> > batteries_;
std::vector<std::map<std::string, int> > ios_;
CanCtrlPltf *can_ctrl_pltf_;
int can_device_t_frame_count_;
std::vector<CanFrame> can_device_t_frames_;
bool mute_device_commands_;


class PyToCpp : public rclcpp::Node {
    public:
        PyToCpp() : Node("py_to_cpp") {
            srv1_ = create_service<loki_msgs::srv::EvalCanBuffer>("evalcanbuffer", std::bind(&PyToCpp::server_eval_can_buffer, this, std::placeholders::_1, std::placeholders::_2));
            srv2_ = create_service<loki_msgs::srv::ContArray>("contarray", std::bind(&PyToCpp::server_controller_array, this, std::placeholders::_1, std::placeholders::_2));
            srv3_ = create_service<loki_msgs::srv::CotMap>("cotmap", std::bind(&PyToCpp::server_controller_map, this, std::placeholders::_1, std::placeholders::_2));
            srv4_ = create_service<loki_msgs::srv::BatteryVars>("batteryvars", std::bind(&PyToCpp::server_battery_variable, this, std::placeholders::_1, std::placeholders::_2));
            srv5_ = create_service<loki_msgs::srv::DeviceCmds>("devicecmds", std::bind(&PyToCpp::server_device_cmds, this, std::placeholders::_1, std::placeholders::_2));
            srv6_ = create_service<loki_msgs::srv::SetBools>("setbools", std::bind(&PyToCpp::server_call_set_bool_service, this, std::placeholders::_1, std::placeholders::_2));
            srv7_ = create_service<loki_msgs::srv::HomesteeringAll>("homesteeringall", std::bind(&PyToCpp::server_home_steering_all, this, std::placeholders::_1, std::placeholders::_2));
            srv8_ = create_service<loki_msgs::srv::MotCot>("motcot", std::bind(&PyToCpp::server_motor_controller, this, std::placeholders::_1, std::placeholders::_2));
            srv9_ = create_service<loki_msgs::srv::PosZero>("poszero", std::bind(&PyToCpp::server_position_zero, this, std::placeholders::_1, std::placeholders::_2));
            srv10_ = create_service<loki_msgs::srv::PosZeroAll>("poszeroall", std::bind(&PyToCpp::server_position_zero_all, this, std::placeholders::_1, std::placeholders::_2));
            srv11_ = create_service<loki_msgs::srv::SimDrive>("simdrive", std::bind(&PyToCpp::server_simulate_drive, this, std::placeholders::_1, std::placeholders::_2));
            srv12_ = create_service<loki_msgs::srv::StateBase>("statebase", std::bind(&PyToCpp::server_base_state, this, std::placeholders::_1, std::placeholders::_2));
            srv13_ = create_service<loki_msgs::srv::StatesOfIO>("statesofio", std::bind(&PyToCpp::server_io_state, this, std::placeholders::_1, std::placeholders::_2));
            srv14_ = create_service<loki_msgs::srv::Params>("Params", std::bind(&PyToCpp::server_drive_params, this, std::placeholders::_1, std::placeholders::_2));
            srv15_ = create_service<loki_msgs::srv::DriveCmds>("drivecmds", std::bind(&PyToCpp::server_drive_cmds, this, std::placeholders::_1, std::placeholders::_2));
            srv16_ = create_service<loki_msgs::srv::InitPltf>("initpltf", std::bind(&PyToCpp::server_init_pltf, this, std::placeholders::_1, std::placeholders::_2));
            srv17_ = create_service<loki_msgs::srv::GetSetBool>("GetSetBool", std::bind(&PyToCpp::server_get_set_bool, this, std::placeholders::_1, std::placeholders::_2));
            srv18_ = create_service<std_srvs::srv::SetBool>("mute_extra_can_device_commands", std::bind(&PyToCpp::srvCallbackMuteDeviceCommands, this, std::placeholders::_1, std::placeholders::_2));

            pub1_ = create_publisher<loki_msgs::msg::CANFrame>("can_frames_device_r", 100);
            pub2_ = create_publisher<loki_msgs::msg::CANFrame>("can_frames_base_r", 100);
            pub3_ = create_publisher<loki_msgs::msg::ControllerArray>("motor_controller_data", 1);
            pub4_ = create_publisher<loki_msgs::msg::IOArray>("io_data", 1);
            pub5_ = create_publisher<loki_msgs::msg::BatteryArray>("batery_data", 1);
            pub6_ = create_publisher<loki_msgs::msg::BaseState>("msgtobasestate", 100);

            sub1_ = create_subscription<loki_msgs::msg::BaseState>("BasePub", 100, std::bind(&PyToCpp::CommandsMsgtoBaseState, this, std::placeholders::_1));
            sub2_ = create_subscription<loki_msgs::msg::BaseState>("simbasestate", 100, std::bind(&PyToCpp::CommandsMsgtoSimState, this, std::placeholders::_1));
            sub3_ = create_subscription<loki_msgs::msg::CANFrame>("can_frames_device_t", 100, std::bind(&PyToCpp::canDeviceTCallback, this, std::placeholders::_1));

            can_ctrl_pltf_ = new CanCtrlPltf();

            //Parameters from robot017
            //get motor_drives parameters
            std::string getnode;
            std::string getx;
            std::string gety;
            int nodemd;
            double xmd;
            double ymd;

            for (int i = 0; i < 4; i++){
                std::string sdrive_num = std::to_string(i);

                getnode = "motor_drives.drive"+ sdrive_num+ ".node";
                getx = "motor_drives.drive"+ sdrive_num+ ".x";
                gety = "motor_drives.drive"+ sdrive_num+ ".y";

                declare_parameter(getnode, 1);
                declare_parameter(getx, 0.8910);
                declare_parameter(gety, 0.7500);

                get_parameter(getnode, nodemd);
                get_parameter(getx, xmd);
                get_parameter(gety, ymd);


                if (i == 0){
                    std::map<std::string, double> drive0;
                    drive0["node"] = nodemd;
                    drive0["x"] = xmd;
                    drive0["y"] = ymd;
                    drive0["type"] = 0;
                    drive0["leg_mesh"] = 0;
                    drive0["r_wheel"] = 0.2;
                    drive0["w_wheel"] = 0.16;
                    drive0["prp_gr_rt"] = 42;
                    drive0["prp_enc_ppr"] = 1024;
                    drive0["prp_max_rpm"] = 3000;
                    drive0["prp_sim_a"] = 1.5;
                    drive0["str_gr_rt"] = 42.8571429;
                    drive0["str_enc_ppr"] = 1024;
                    drive0["str_lim"] = 3.078027759;
                    drive0["str_sim_v"] = 4;
                    motor_drives_.push_back(drive0);

                }
                else if (i == 1){
                    std::map<std::string, double> drive1;
                    drive1["node"] = nodemd;
                    drive1["x"] = xmd;
                    drive1["y"] = ymd;
                    drive1["type"] = 0;
                    drive1["leg_mesh"] = 0;
                    drive1["r_wheel"] = 0.2;
                    drive1["w_wheel"] = 0.16;
                    drive1["prp_gr_rt"] = 42;
                    drive1["prp_enc_ppr"] = 1024;
                    drive1["prp_max_rpm"] = 3000;
                    drive1["prp_sim_a"] = 1.5;
                    drive1["str_gr_rt"] = 42.8571429;
                    drive1["str_enc_ppr"] = 1024;
                    drive1["str_lim"] = 3.078027759;
                    drive1["str_sim_v"] = 4;
                    motor_drives_.push_back(drive1);
                    
                }

                else if (i == 2){
                    std::map<std::string, double> drive2;
                    drive2["node"] = nodemd;
                    drive2["x"] = xmd;
                    drive2["y"] = ymd;
                    drive2["type"] = 0;
                    drive2["leg_mesh"] = 0;
                    drive2["r_wheel"] = 0.2;
                    drive2["w_wheel"] = 0.16;
                    drive2["prp_gr_rt"] = 42;
                    drive2["prp_enc_ppr"] = 1024;
                    drive2["prp_max_rpm"] = 3000;
                    drive2["prp_sim_a"] = 1.5;
                    drive2["str_gr_rt"] = 42.8571429;
                    drive2["str_enc_ppr"] = 1024;
                    drive2["str_lim"] = 3.078027759;
                    drive2["str_sim_v"] = 4;
                    motor_drives_.push_back(drive2);
                    
                }
                else{
                    std::map<std::string, double> drive3;
                    drive3["node"] = nodemd;
                    drive3["x"] = xmd;
                    drive3["y"] = ymd;
                    drive3["type"] = 0;
                    drive3["leg_mesh"] = 0;
                    drive3["r_wheel"] = 0.2;
                    drive3["w_wheel"] = 0.16;
                    drive3["prp_gr_rt"] = 42;
                    drive3["prp_enc_ppr"] = 1024;
                    drive3["prp_max_rpm"] = 3000;
                    drive3["prp_sim_a"] = 1.5;
                    drive3["str_gr_rt"] = 42.8571429;
                    drive3["str_enc_ppr"] = 1024;
                    drive3["str_lim"] = 3.078027759;
                    drive3["str_sim_v"] = 4;
                    motor_drives_.push_back(drive3);
                    
                }
            }
        
            //get battery parameters
            std::string getid;
            std::string gettype;
            std::string batx;
            std::string baty;
            std::string batyaw;
            std::string batz;
            std::string getmesh;

            double bat_id;
            double bat_type;
            double battery_x;
            double battery_y;
            double battery_yaw;
            double battery_z;
            double bat_mesh;

            for (int j = 0; j < 1; j++){
                std::string sbat = std::to_string(j);

                getid = "batteries.bat"+ sbat+ ".id";
                gettype = "batteries.bat"+ sbat+ ".type";
                batx = "batteries.bat"+ sbat+ ".x";
                baty = "batteries.bat"+ sbat+ ".y";
                batyaw = "batteries.bat"+ sbat+ ".yaw";
                batz = "batteries.bat"+ sbat+ ".z";
                getmesh = "batteries.bat"+ sbat+ ".bat_mesh";

                declare_parameter(getid, 0.0);
                declare_parameter(gettype, 1.0);
                declare_parameter(batx, 0.0);
                declare_parameter(baty, 0.7500);
                declare_parameter(batyaw, 0.0);
                declare_parameter(batz, 0.75721);
                declare_parameter(getmesh, 0.0);

                get_parameter(getid, bat_id);
                get_parameter(gettype, bat_type);
                get_parameter(batx, battery_x);
                get_parameter(baty, battery_y);
                get_parameter(batyaw, battery_yaw);
                get_parameter(batz, battery_z);
                get_parameter(getmesh, bat_mesh);

                if (j == 0){
                   std::map<std::string, double> bat0;
                   bat0["id"] = bat_id;
                   bat0["type"] = bat_type;
                   bat0["x"] = battery_x;
                   bat0["y"] = battery_y;
                   bat0["yaw"] = battery_yaw;
                   bat0["z"] = battery_z;
                   bat0["mesh"] = bat_mesh;
                   batteries_.push_back(bat0);
                }
                else{
                    std::map<std::string, double> bat1;
                    bat1["id"] = bat_id;
                    bat1["type"] = bat_type;
                    bat1["x"] = battery_x;
                    bat1["y"] = battery_y;
                    bat1["yaw"] = battery_yaw;
                    bat1["z"] = battery_z;
                    bat1["mesh"] = bat_mesh;
                    batteries_.push_back(bat1);
                }


            }

            //IO PARAMS//
            std::string get_io_id;
            std::string get_io_type;
            std::string get_rl0;
            std::string get_rl1;

            int io_id;
            int io_type;
            int io_rl0;
            int io_rl1;

            for (int o = 0; o < 1; o++){
                std::string sio = std::to_string(o);

                get_io_id = "io.io"+ sio+ ".id";
                get_io_type = "io.io"+ sio+ ".type";
                get_rl0 = "io.io"+ sio+ ".rl0_init_state";
                get_rl1 = "io.io"+ sio+ ".rl1_init_state";

                declare_parameter(get_io_id, 20);
                declare_parameter(get_io_type, 0);
                declare_parameter(get_rl0, 0);
                declare_parameter(get_rl1, 0);

                get_parameter(get_io_id, io_id);
                get_parameter(get_io_type, io_type);
                get_parameter(get_rl0, io_rl0);
                get_parameter(get_rl1, io_rl1);

                if (o == 0){
                    std::map<std::string, int> io0;
                    io0["id"] = bat_id;
                    io0["type"] = bat_type;
                    io0["rl0_init_state"] = io_rl0;
                    io0["rl1_init_state"] = io_rl1;
                    ios_.push_back(io0);
                
                }
                else{
                    std::map<std::string, int> io1;
                    io1["id"] = bat_id;
                    io1["type"] = bat_type;
                    io1["rl0_init_state"] = io_rl0;
                    io1["rl1_init_state"] = io_rl1;
                    ios_.push_back(io1);
                }

            }
            
            can_device_t_frame_count_ = 0;



        }

        ~PyToCpp(){
            delete can_ctrl_pltf_;
        }





    private:

        rclcpp::Service<loki_msgs::srv::EvalCanBuffer>::SharedPtr srv1_;
        rclcpp::Service<loki_msgs::srv::ContArray>::SharedPtr srv2_; 
        rclcpp::Service<loki_msgs::srv::CotMap>::SharedPtr srv3_; 
        rclcpp::Service<loki_msgs::srv::BatteryVars>::SharedPtr srv4_; 
        rclcpp::Service<loki_msgs::srv::DeviceCmds>::SharedPtr srv5_; 
        rclcpp::Service<loki_msgs::srv::SetBools>::SharedPtr srv6_; 
        rclcpp::Service<loki_msgs::srv::HomesteeringAll>::SharedPtr srv7_; 
        rclcpp::Service<loki_msgs::srv::MotCot>::SharedPtr srv8_; 
        rclcpp::Service<loki_msgs::srv::PosZero>::SharedPtr srv9_; 
        rclcpp::Service<loki_msgs::srv::PosZeroAll>::SharedPtr srv10_;
        rclcpp::Service<loki_msgs::srv::SimDrive>::SharedPtr srv11_;
        rclcpp::Service<loki_msgs::srv::StateBase>::SharedPtr srv12_;
        rclcpp::Service<loki_msgs::srv::StatesOfIO>::SharedPtr srv13_;
        rclcpp::Service<loki_msgs::srv::Params>::SharedPtr srv14_;
        rclcpp::Service<loki_msgs::srv::DriveCmds>::SharedPtr srv15_;
        rclcpp::Service<loki_msgs::srv::InitPltf>::SharedPtr srv16_;
        rclcpp::Service<loki_msgs::srv::GetSetBool>::SharedPtr srv17_;
        rclcpp::Service<std_srvs::srv::SetBool>::SharedPtr srv18_;

        rclcpp::Publisher<loki_msgs::msg::CANFrame>::SharedPtr pub1_;
        rclcpp::Publisher<loki_msgs::msg::CANFrame>::SharedPtr pub2_;
        rclcpp::Publisher<loki_msgs::msg::ControllerArray>::SharedPtr pub3_;
        rclcpp::Publisher<loki_msgs::msg::IOArray>::SharedPtr pub4_;
        rclcpp::Publisher<loki_msgs::msg::BatteryArray>::SharedPtr pub5_;
        rclcpp::Publisher<loki_msgs::msg::BaseState>::SharedPtr pub6_;

        rclcpp::Subscription<loki_msgs::msg::BaseState>::SharedPtr sub1_;
        rclcpp::Subscription<loki_msgs::msg::BaseState>::SharedPtr sub2_;
        rclcpp::Subscription<loki_msgs::msg::CANFrame>::SharedPtr sub3_;
        

        // CanCtrlPltf *can_ctrl_pltf_;

        bool server_get_set_bool(const std::shared_ptr<loki_msgs::srv::GetSetBool::Request> request,
                        const std::shared_ptr<loki_msgs::srv::GetSetBool::Response> response){
            
            std::map<int, std::string> set_bool_map;
            if (request->set_bool == 1){
                can_ctrl_pltf_->getSetBoolServices(set_bool_map);
                std::vector<int> set_bool_values;
                for (auto it = set_bool_map.begin(); it != set_bool_map.end(); it++) {
                    set_bool_values.push_back(it->first);
                }
                std::vector<std::string> set_bool_string;
                for (auto it = set_bool_map.begin(); it != set_bool_map.end(); it++) {
                    set_bool_string.push_back(it->second);
                }

                response->set_bool_strings = set_bool_string;
                response->set_bool_values = set_bool_values;
            }

            return true;
        }

        bool server_init_pltf(const std::shared_ptr<loki_msgs::srv::InitPltf::Request> request,
                        const std::shared_ptr<loki_msgs::srv::InitPltf::Response> response){
            

            bool ret = can_ctrl_pltf_->initPltf(request->can_interface_type, request->can_interface_name, motor_drives_, batteries_, ios_);
            response->initpltf = ret;
            return true;

        }

        bool server_eval_can_buffer(const std::shared_ptr<loki_msgs::srv::EvalCanBuffer::Request> request,
                                    const std::shared_ptr<loki_msgs::srv::EvalCanBuffer::Response> response){
            std::vector<CanFrame> can_msgs_base;
            std::vector<CanFrame> can_msgs_device;
            can_ctrl_pltf_->evalCanBuffer(can_msgs_base, can_msgs_device);

            for (std::vector<CanFrame>::iterator can_frame = can_msgs_base.begin(); can_frame != can_msgs_base.end(); ++can_frame)
            {
                loki_msgs::msg::CANFrame can_msg;
                canFrameToMsg(*can_frame, can_msg); 
                pub2_->publish(can_msg);
            }

            // Publish CAN frames from other devices
            for (std::vector<CanFrame>::iterator can_frame = can_msgs_device.begin(); can_frame != can_msgs_device.end(); ++can_frame)
            {
                loki_msgs::msg::CANFrame can_msg;
                canFrameToMsg(*can_frame, can_msg); 
                pub1_->publish(can_msg);
            }

            return true;
        }

        bool server_controller_array(const std::shared_ptr<loki_msgs::srv::ContArray::Request> request,
                                    const std::shared_ptr<loki_msgs::srv::ContArray::Response> response){
            if (request->on == 1 ){
                std::vector<CanDriveItf::ControllerVars> controller_vars_all_drives;
                loki_msgs::msg::ControllerArray controller_array;
                can_ctrl_pltf_->getControllerArray(controller_vars_all_drives);

                for(std::vector<CanDriveItf::ControllerVars>::iterator controller_vars = controller_vars_all_drives.begin(); controller_vars != controller_vars_all_drives.end(); ++controller_vars)
                {
                    loki_msgs::msg::ControllerData controller_data;
                    controllerVarsToMsg(*controller_vars, controller_data);
                    controller_array.controller_data.push_back(controller_data);
                }
                controller_array.controller_data.resize(controller_vars_all_drives.size());

                controller_array.header.stamp = this->now(); //not sure if this works
                pub3_->publish(controller_array);
                
            }

            return true;
        }

        bool server_controller_map(const std::shared_ptr<loki_msgs::srv::CotMap::Request> request,
                                    const std::shared_ptr<loki_msgs::srv::CotMap::Response> response){
            std::vector<std::string> setup_map;
            can_ctrl_pltf_->getControllerSetupMap(request->can_id, request->setup_map);
            response->setup_map = setup_map;
            
            return true; //make sure this is set up on python side
        }

        bool server_battery_variable(const std::shared_ptr<loki_msgs::srv::BatteryVars::Request> request,
                                    const std::shared_ptr<loki_msgs::srv::BatteryVars::Response> response){
            if (request->batt == 1){
            std::vector<CanBatteryItf::BatteryVars> batt_vars;
            loki_msgs::msg::BatteryArray batt_array_msg;
            can_ctrl_pltf_->getAllBatteryVars(batt_vars);
            batteryVarsToMsg(batt_vars, batt_array_msg);
            pub5_->publish(batt_array_msg);
            }

            return true;
        }

        bool server_drive_cmds(const std::shared_ptr<loki_msgs::srv::DriveCmds::Request> request,
                            const std::shared_ptr<loki_msgs::srv::DriveCmds::Response> response){
            if (request->commands == 1){
                can_ctrl_pltf_->sendCommandsToAllDrives(base_command_out_);
            }

            return true;
        
        }

        bool server_device_cmds(const std::shared_ptr<loki_msgs::srv::DeviceCmds::Request> request,
                                const std::shared_ptr<loki_msgs::srv::DeviceCmds::Response> response){
            if (request->set = 1){
                if (can_device_t_frame_count_ < 100){
                    if (!mute_device_commands_){
                        for (std::vector<CanFrame>::iterator can_frame = can_device_t_frames_.begin(); can_frame != can_device_t_frames_.end(); ++can_frame)
                        {
                            can_ctrl_pltf_->sendDeviceCommand(*can_frame);
                        }
                    }
                }
                else {
                    RCLCPP_WARN(this->get_logger(), "Too many CAN device msgs in queue");
                }
            }

            can_device_t_frame_count_ = 0;
            can_device_t_frames_.resize(0);

            return true;
        }

        bool server_simulate_drive(const std::shared_ptr<loki_msgs::srv::SimDrive::Request> request,
                                    std::shared_ptr<loki_msgs::srv::SimDrive::Response> response){
            if (request->commands == 1){
                
                can_ctrl_pltf_->simulateAllDrives(base_command_out_);
            }

            return true;
        }

        bool server_position_zero_all(const std::shared_ptr<loki_msgs::srv::PosZeroAll::Request> request,
                                    const std::shared_ptr<loki_msgs::srv::PosZeroAll::Response> response){
            if(request->zeroall){
                can_ctrl_pltf_->setCurrentPosAsZeroAll();
            }

            return true;
        } //Add zeroall to base_driver

        bool server_position_zero(const std::shared_ptr<loki_msgs::srv::PosZero::Request> request,
                                const std::shared_ptr<loki_msgs::srv::PosZero::Response> response){
            can_ctrl_pltf_->setCurrentPosAsZero(request->can_id);

            return true;
        }

        bool server_home_steering_all(const std::shared_ptr<loki_msgs::srv::HomesteeringAll::Request> request,
                                    const std::shared_ptr<loki_msgs::srv::HomesteeringAll::Response> response){
            bool success;
            if(request->homesteering){
                can_ctrl_pltf_->homeSteeringAll();
            }
            response->success = success;
            return true;      
        }

        bool server_motor_controller(const std::shared_ptr<loki_msgs::srv::MotCot::Request> request,
                                    const std::shared_ptr<loki_msgs::srv::MotCot::Response> response){
            can_ctrl_pltf_->setupMotorController(request->can_id, request->setup_id, request->setup_value);

            return true;
        }

        bool server_drive_params(const std::shared_ptr<loki_msgs::srv::Params::Request> request,
                                const std::shared_ptr<loki_msgs::srv::Params::Response> response){
            
            if(request->set){
                can_ctrl_pltf_->setParams(motor_drives_);
            }
            return true;
        }

        bool server_call_set_bool_service(const std::shared_ptr<loki_msgs::srv::SetBools::Request> request,
                                        const std::shared_ptr<loki_msgs::srv::SetBools::Response> response){
            bool success;
            std::string message;
            can_ctrl_pltf_->callSetBoolService(request->unique_service_id, request->value, request->success, request->message);
            response->success = success;
            response->message = message;
            return true;
        }

        bool server_base_state(const std::shared_ptr<loki_msgs::srv::StateBase::Request> request,
                            const std::shared_ptr<loki_msgs::srv::StateBase::Response> response){
            if (request->base_state == 1){
                CanCtrlPltf::BaseState get_base_state;
                loki_msgs::msg::BaseState msg;
                bool success;

                can_ctrl_pltf_->getBaseState(get_base_state);

                BaseStatetoMsg(get_base_state, msg);
                pub6_->publish(msg);

                success = true;
                response->success;
            }
            return true;

        }

        bool server_io_state(const std::shared_ptr<loki_msgs::srv::StatesOfIO::Request> request,
                            const std::shared_ptr<loki_msgs::srv::StatesOfIO::Response> response){
            if (request->states == 1){
                std::vector<CanIOItf::IOState> io_states;
                loki_msgs::msg::IOArray io_states_msg;
                can_ctrl_pltf_->getIOStates(io_states);
                ioStatesToMsg(io_states, io_states_msg);
                pub4_->publish(io_states_msg);
            }
            return true;          
        }

        void canDeviceTCallback(const loki_msgs::msg::CANFrame can_msg){
            can_device_t_frame_count_++;
            CanFrame can_frame;
            canFrameFromMsg(can_msg, can_frame);

            can_device_t_frames_.push_back(can_frame);
            can_device_t_frames_.resize(can_device_t_frame_count_);
        }


        bool srvCallbackMuteDeviceCommands(const std::shared_ptr<std_srvs::srv::SetBool::Request> request, std::shared_ptr<std_srvs::srv::SetBool::Response> response){
            std::stringstream message;
            mute_device_commands_ = request->data;

            if (mute_device_commands_)
            {
                message << "Muting CAN commands to non drive/battery devices";
                RCLCPP_INFO(this->get_logger(), "Muting CAN commands to non drive/battery devices");
            }
            else{
                message << "Unmuting CAN commands to non drive/battery devices";
                RCLCPP_INFO(this->get_logger(), "Unmuting CAN commands to non drive/battery devices");
            }

            can_device_t_frame_count_ = 0;
            can_device_t_frames_.resize(0);

            response->success = true;
            response->message = message.str();
            return true;
        }

        void canFrameFromMsg(loki_msgs::msg::CANFrame can_msg_in, CanFrame& can_frame_out){
            can_frame_out.setId(can_msg_in.id);
            can_frame_out.setLength(can_msg_in.length);
            can_frame_out.setBytes(can_msg_in.data[0],
                                    can_msg_in.data[1],
                                    can_msg_in.data[2],
                                    can_msg_in.data[3],
                                    can_msg_in.data[4],
                                    can_msg_in.data[5],
                                    can_msg_in.data[6],
                                    can_msg_in.data[7]
            );
        }

        void canFrameToMsg(CanFrame can_frame_in, 
                                loki_msgs::msg::CANFrame& can_msg_out)
        {

            can_msg_out.data.resize(8);
            can_msg_out.id = can_frame_in.getId();
            can_msg_out.length = can_frame_in.getLength();
            can_frame_in.getBytes(can_msg_out.data);

        }

        void controllerVarsToMsg(CanDriveItf::ControllerVars controller_vars_in, 
                                        loki_msgs::msg::ControllerData& controller_data_out)
        {
            controller_data_out.controller_config.name = controller_vars_in.name;
            controller_data_out.controller_config.type = controller_vars_in.type;
            controller_data_out.controller_config.version = controller_vars_in.version;
            controller_data_out.controller_config.can_id = controller_vars_in.can_id;
            controller_data_out.controller_config.drive_direction = controller_vars_in.drive_direction;
            controller_data_out.controller_config.home_speed = controller_vars_in.home_speed;
            controller_data_out.controller_config.home_count = controller_vars_in.home_count;

            controller_data_out.controller_state.controller_mode = controller_vars_in.controller_mode;
            controller_data_out.controller_state.battery_volts= controller_vars_in.battery_volts;
            controller_data_out.controller_state.battery_amps= controller_vars_in.battery_amps;
            controller_data_out.controller_state.temps = controller_vars_in.temps;

            int number_of_status_flags = controller_vars_in.status_flags.size();
            controller_data_out.controller_state.status_flags.resize(number_of_status_flags);

            for (int i=0; i<number_of_status_flags; i++)
            {
                controller_data_out.controller_state.status_flags[i].status_name = controller_vars_in.status_flags[i].status_name;
                controller_data_out.controller_state.status_flags[i].status_value = controller_vars_in.status_flags[i].status_value;
            }

            int number_of_controller_motors = controller_vars_in.motor_vars.size();
            controller_data_out.motor_state.resize(number_of_controller_motors);

            for (int i=0; i<number_of_controller_motors; i++)
            {
                controller_data_out.motor_state[i].type = controller_vars_in.motor_vars[i].type;
                controller_data_out.motor_state[i].speed = controller_vars_in.motor_vars[i].speed;
                controller_data_out.motor_state[i].position = controller_vars_in.motor_vars[i].position;
                controller_data_out.motor_state[i].motor_amps = controller_vars_in.motor_vars[i].motor_amps;
                controller_data_out.motor_state[i].relative_power = controller_vars_in.motor_vars[i].relative_power;
            }
        }

        void ioStatesToMsg(std::vector<CanIOItf::IOState> io_states_in,
                    loki_msgs::msg::IOArray& io_msg_out){

            for (auto& elem : io_states_in)
            {
                loki_msgs::msg::IOState state_msg;

                state_msg.id = elem.id;
                state_msg.name = elem.name;
                state_msg.version = elem.version;

                state_msg.analog_names = elem.analog_names;
                state_msg.analog_values = elem.analog_values;

                state_msg.digital_names = elem.digital_names;
                for (auto value : elem.digital_values)
                state_msg.digital_values.push_back(value);

                state_msg.ranges = elem.ranges;
                state_msg.temps = elem.temps;
                state_msg.humidities = elem.humidities;

                state_msg.imu.orientation.x = elem.imu.orientation[0];
                state_msg.imu.orientation.y = elem.imu.orientation[1];
                state_msg.imu.orientation.z = elem.imu.orientation[2];
                state_msg.imu.orientation.w = elem.imu.orientation[3];
                state_msg.imu.orientation_covariance[0] = elem.imu.orientation_covariance[0];
                state_msg.imu.orientation_covariance[1] = elem.imu.orientation_covariance[1];
                state_msg.imu.orientation_covariance[2] = elem.imu.orientation_covariance[2];
                state_msg.imu.orientation_covariance[3] = elem.imu.orientation_covariance[3];
                state_msg.imu.orientation_covariance[4] = elem.imu.orientation_covariance[4];
                state_msg.imu.orientation_covariance[5] = elem.imu.orientation_covariance[5];
                state_msg.imu.orientation_covariance[6] = elem.imu.orientation_covariance[6];
                state_msg.imu.orientation_covariance[7] = elem.imu.orientation_covariance[7];
                state_msg.imu.orientation_covariance[8] = elem.imu.orientation_covariance[8];

                state_msg.imu.angular_velocity.x = elem.imu.angular_velocity[0];
                state_msg.imu.angular_velocity.y = elem.imu.angular_velocity[1];
                state_msg.imu.angular_velocity.z = elem.imu.angular_velocity[2];
                state_msg.imu.angular_velocity_covariance[0] = elem.imu.angular_velocity_covariance[0];
                state_msg.imu.angular_velocity_covariance[1] = elem.imu.angular_velocity_covariance[1];
                state_msg.imu.angular_velocity_covariance[2] = elem.imu.angular_velocity_covariance[2];
                state_msg.imu.angular_velocity_covariance[3] = elem.imu.angular_velocity_covariance[3];
                state_msg.imu.angular_velocity_covariance[4] = elem.imu.angular_velocity_covariance[4];
                state_msg.imu.angular_velocity_covariance[5] = elem.imu.angular_velocity_covariance[5];
                state_msg.imu.angular_velocity_covariance[6] = elem.imu.angular_velocity_covariance[6];
                state_msg.imu.angular_velocity_covariance[7] = elem.imu.angular_velocity_covariance[7];
                state_msg.imu.angular_velocity_covariance[8] = elem.imu.angular_velocity_covariance[8];

                state_msg.imu.linear_acceleration.x = elem.imu.linear_acceleration[0];
                state_msg.imu.linear_acceleration.y = elem.imu.linear_acceleration[1];
                state_msg.imu.linear_acceleration.z = elem.imu.linear_acceleration[2];
                state_msg.imu.linear_acceleration_covariance[0] = elem.imu.linear_acceleration_covariance[0];
                state_msg.imu.linear_acceleration_covariance[1] = elem.imu.linear_acceleration_covariance[1];
                state_msg.imu.linear_acceleration_covariance[2] = elem.imu.linear_acceleration_covariance[2];
                state_msg.imu.linear_acceleration_covariance[3] = elem.imu.linear_acceleration_covariance[3];
                state_msg.imu.linear_acceleration_covariance[4] = elem.imu.linear_acceleration_covariance[4];
                state_msg.imu.linear_acceleration_covariance[5] = elem.imu.linear_acceleration_covariance[5];
                state_msg.imu.linear_acceleration_covariance[6] = elem.imu.linear_acceleration_covariance[6];
                state_msg.imu.linear_acceleration_covariance[7] = elem.imu.linear_acceleration_covariance[7];
                state_msg.imu.linear_acceleration_covariance[8] = elem.imu.linear_acceleration_covariance[8];

                io_msg_out.io_states.push_back(state_msg);

            }

        }

        void batteryVarsToMsg(std::vector<CanBatteryItf::BatteryVars> batt_vars_in,
                                loki_msgs::msg::BatteryArray& batt_msg_out)
            {
                for (const auto& elem : batt_vars_in)
                {
                loki_msgs::msg::BatteryData batt_msg;
                
                batt_msg.battery_id = elem.id;
                batt_msg.battery_state = elem.state;
                batt_msg.state_of_charge = elem.soc;
                batt_msg.state_of_health = elem.soh;
                batt_msg.battery_voltage = elem.voltage;
                batt_msg.battery_current = elem.current;
                batt_msg.charge_fet_on = elem.charge_fet;
                batt_msg.discharge_fet_on = elem.discharge_fet;
                batt_msg.cycle_count = elem.cycle_count;
                batt_msg.battery_capacity = elem.capacity;
                batt_msg.temperatures = elem.temps;
                batt_msg.battery_alarms.over_voltage_protection = elem.a_over_volt;
                batt_msg.battery_alarms.under_voltage_protection = elem.a_under_volt;
                batt_msg.battery_alarms.over_temperature_protection = elem.a_over_temp;
                batt_msg.battery_alarms.under_temperature_protection = elem.a_under_temp;
                batt_msg.battery_alarms.over_charge_current = elem.a_over_charge;
                batt_msg.battery_alarms.over_discharge_current = elem.a_over_discharge;
                batt_msg.battery_alarms.can_communication_fail = elem.a_can_fail;
                batt_msg.battery_alarms.cell_voltage_sensing_fault = elem.a_cell_volt_sens_fault;
                batt_msg.battery_alarms.bms_fail = elem.a_bms_fail;
                batt_msg.battery_alarms.short_circuit_discharge = elem.a_short_circ_discharge;
                batt_msg.battery_alarms.temperature_sensing_fault = elem.a_temp_sens_fault;
                batt_msg.battery_alarms.over_voltage_fault = elem.a_over_volt_fault;
                batt_msg.battery_alarms.under_voltage_fault = elem.a_under_volt_fault;
                batt_msg.battery_alarms.pack_voltage_sensing_fault = elem.a_pack_volt_sens_fault;

                batt_msg_out.battery_data.push_back(batt_msg);


                }


            }

        void CommandsMsgtoBaseState(const loki_msgs::msg::BaseState & msg)
        {
            CanCtrlPltf::BaseState latest_base_command;

            latest_base_command.drive_mode = msg.drive_mode;
            latest_base_command.prop_speed = msg.prop_speed;
            latest_base_command.prop_pos = msg.prop_pos;
            latest_base_command.steer_speed = msg.steer_speed;
            latest_base_command.steer_pos = msg.steer_pos;
            latest_base_command.steer_max_speed = msg.steer_max_speed;
            latest_base_command.channel = msg.channel;
            base_command_out_ = latest_base_command;

        }

        void BaseStatetoMsg(CanCtrlPltf::BaseState basestate, loki_msgs::msg::BaseState msg)
        {
            msg.drive_mode = basestate.drive_mode;
            msg.prop_speed = basestate.prop_speed;
            msg.prop_pos = basestate.prop_pos;
            msg.steer_speed = basestate.steer_speed;
            msg.steer_max_speed = basestate.steer_max_speed;
            msg.channel = basestate.channel;
        }

        void CommandsMsgtoSimState(const loki_msgs::msg::BaseState & msg) 
        {
            CanCtrlPltf::BaseState latest_base_command;

            latest_base_command.drive_mode = msg.drive_mode;
            latest_base_command.prop_speed = msg.prop_speed;
            latest_base_command.prop_pos = msg.prop_pos;
            latest_base_command.steer_speed = msg.steer_speed;
            latest_base_command.steer_pos = msg.steer_pos;
            latest_base_command.steer_max_speed = msg.steer_max_speed;
            latest_base_command.channel = msg.channel;
            base_command_out_ = latest_base_command;

        }


};

int main(int argc, char * argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<PyToCpp>());
    rclcpp::shutdown();
    return 0;
}