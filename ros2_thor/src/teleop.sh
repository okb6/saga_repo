source /home/cairlab/.bashrc
source /opt/ros/humble/setup.bash
source /home/cairlab/Documents/GitHub/saga_repo/install/setup.bash #Get the right location

export DATUM_FILE=""
export EKF_PUBLISH_TF=false
export GAZEBO_WORLD_PATH="/home/cairlab/Documents/GitHub/saga_repo/ros2_thor/src/loki/rasberry_gazebo/worlds/empty_grass.world" #ADD PATH
export USE_SIM=false
export USE_GUI=false #Not sure if that should be true for simulation or not I would assume true
export ROBOT_POS_X_1=0.0
export ROBOT_POS_Y_1=0.0
export ROBOT_POS_A_1=0.0
export TELEOP_CONTROLLER="xbox"
export ROBOT_NO="017"
export JOY_DEV="/dev/input/js0"
export ROBOT_CONFIG_PATH="/home/cairlab/Documents/GitHub/saga_repo/ros2_thor/src/loki/loki_base/config" #ADD PATH BEFORE robot_ROBOT_NO

ros2 launch robot_bringup robot_bringup.launch robot_model:=${ROBOT_CONFIG_PATH}/robot_$ROBOT_NO.yaml model_extras:=${ROBOT_CONFIG_PATH}/robot_${ROBOT_NO}_extras.xacro ekf_publish_tf:="$EKF_PUBLISH_TF" simple_sim:=$USE_SIM with_teleoperation:=true world:=$GAZEBO_WORLD_PATH with_gui:=$USE_GUI teleop_controller_type:=$TELEOP_CONTROLLER teleop_controller:=/home/cairlab/Documents/GitHub/saga_repo/ros2_thor/src/loki/loki_teleop/config/$TELEOP_CONTROLLER.yaml start_pose_x:=$ROBOT_POS_X_1 start_pose_y:=$ROBOT_POS_Y_1 start_pose_Y:=$ROBOT_POS_A_1 joy_dev:="/dev/input/js0" can_interface_type:="socketcan" can_interface_name:="can0"
