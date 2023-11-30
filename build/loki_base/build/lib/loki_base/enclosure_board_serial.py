import rclpy
from rclpy.node import Node
from loki_msgs.msg import DigitalWrite
from std_srvs.srv import SetBool 
from loki_msgs.msg import EnclosureState
import io 
import serial
import time 

class EnclosureBoardSerial(Node):
    def __init__(self):
        super().__init__('enclosure_board_serial')
        self.port = "/dev/ttyUSB0"  # Default port
        self.baud_rate = 115200  # Default baud rate
        self.ser = serial.serial(self.port, self.baud_rate, 1000)


        #Publishers
        self.state_pub = self.create_publisher(EnclosureState, 'enclosure_state', 1)

        #Services
        self.switch_contactors = self.create_service(SetBool, 'switch_contactors', self.contactors_Service_Callback)
        self.switch_motor_power_control = self.create_service(SetBool, 'switch_motor_power_control', self.mot_Pwr_Ctrl_Service_Callback)
        self.switch_rl3 = self.create_service(SetBool, 'switch_rl3', self.rl3_Service_Callback)
        self.switch_rl5 = self.create_service(SetBool, 'switch_rl5', self.rl5_Service_Callback)
        self.digital_write = self.create_service(DigitalWrite, 'digital_write', self.digital_Write_Service_Callback)
        self.pin_mdoe = self.create_service(SetBool, 'set_pin_mode_to_output', self.pin_Mode_To_Output_Service_Callback)

        self.communication_state = self.loki_msgs.msg.EnclosureState.WAS_NEVER_ONLINE

    def test(self):
        self.get_logger().info('waiting')
        time.sleep(4)
        for i in range(1):
            self.get_logger().info('blinking')
            self.digitalWrite(13, True)
            time.sleep(1)
            self.digitalWrite(13, False)
            time.sleep(1)

        result = False #not sure if that will mess the code up
        self.digitalRead(13, result)
        self.get_logger().info('i read %s' %result)
        time.sleep(1)
        self.digitalwrite(13, True)
        time.sleep(1)
        self.digitalRead(13, result)
        self.get_logger().info('i read %s' %result)
        time.sleep(1)

        self.get_logger().info('cont on')
        self.switchContactors(True)
        time.sleep(1)
        self.get_logger().info('cont off')
        self.switchContactors(True)
        time.sleep(1)

        pctrl_on = True
        self.get_logger().info('pwr ctrl on?')
        self.readMotorPowerControl(pctrl_on)
        self.get_logger('ans: %s' %pctrl_on)
        time.sleep(1)

        self.get_logger().info('pwr ctrl on')
        self.switchMotorPowerControl(True)
        time.sleep(1)
        self.get_logger().info('pwer ctrl on?')
        self.readMotorPowerControl(pctrl_on)
        self.get_logger().info('ans:%s' %pctrl_on)
        time.sleep(1)
        self.get_logger().info('pwr ctrl off')
        self.switchMotorPowerControl(False)
        time.sleep(1)
        self.get_logger().info('pwr ctrl on?')
        self.readMotorPowerControl(pctrl_on)
        self.get_logger().info('ans:%s' %pctrl_on)
        time.sleep(1)

        self.get_logger().info('aux rly3 on')
        self.switchAuxRelay(3, True)
        time.sleep(1)
        self.get_logger().info('aux rly3 off')
        self.switchAuxRelay(3, False)
        time.sleep(1)

        self.get_logger().info('aux rly5 on')
        self.switchAuxRelay(5, True)
        time.sleep(1)
        self.get_logger().info('aux rly5 off')
        self.switchAuxRelay(5, False)
        time.sleep(1)

        self.get_logger().info('aux rly6 on (does not exist)')
        self.switchAuxRelay(6, True)
        time.sleep(1)
        self.get_logger().info('aux rly6 off (does not exist)')
        self.switchAuxRelay(6, False)
        time.sleep(1)

    def test2(self):
        value = True
        self.get_logger().info('mode true')
        self.pinMode(13, True)
        time.sleep(2)
        self.digitalRead(13, value)
        self.get_logger().info('value: %s' %value)
        time.sleep(2)
        self.get_logger().info('mode False')
        self.pinMode(13, False)
        time.sleep(2)
        self.digitalRead(13, value)
        self.get_logger().info('value: %s' %value)

    def test3(self):
        d_values = None
        a_values = None
        self.digitalReadAll(d_values)
        time.sleep(2)
        self.analogReadAll(a_values)
    
    def switchContactors(self, on):
        reply = "" 
        ss_msg = f"!C:{int(on)}\n"
        return self.sendSerialMsg(ss_msg, reply)
    
    #NOT SURE IF THIS ONE WORKS
    def readContactors(self, value_out):
        reply = ''
        ss_msg = "?C:\n"
        if not self.sendSerialMsg(ss_msg, reply):
            return False
        value_string = reply[reply.find(':')+1 : reply.find('\n')]
        value = int(value_string)
        value_out[0] = bool(value)
        return True

    def switchMotorPowerControl(self, on):
        reply = ''
        ss_msg = "!R:\n"
        return self.sendSerialMsg(ss_msg, reply)

    def readMotorPowerControl(self, value_out):
        reply = ''
        ss_msg = "?R:\n"
        if not self.sendSerialMsg(ss_msg, reply):
            return False
        value_string = reply[reply.find(':')+1 : reply.find('\n')]
        value = int(value_string)
        value_out[0] = bool(value)
        return True

    def switchAuxRelay(self, relay, on):
        reply = ''
        ss_msg = f"!X:{int(relay)}:{int(on)}\n"
        return self.sendSerialMsg(ss_msg, reply)
    
    def readAuxRelay(self, relay, on, value_out):
        reply = ''
        ss_msg = f"?X:{int(relay)}:{int(on)}\n"
        if not self.sendSerialMsg(ss_msg, reply):
            return False
        value_string = reply[reply.find(':')+1 : reply.find('\n')]
        value = int(value_string)
        value_out[0] = bool(value)
        return True

    def pinMode(self, pin, output):
        reply = ''
        ss_msg = ''
        mode = ''
        if output:
            mode = "O"
        else:
            mode = "I"
        ss_msg = f"!M{int(mode)}{int(pin)}:\n"
        return self.sendSerialMsg(ss_msg, reply)

    def digitalWrite(self, pin, on):
        reply = ''
        ss_msg = f"!D{int(pin)}:{int(on)}\n"
        return self.sendSerialMsg(ss_msg, reply)

    def analogWrite(self, pin, value):
        reply = ''
        ss_msg = f"!A{int(pin)}:{int(value)}\n"
        return self.sendSerialMsg(ss_msg, reply)

    def digitalRead(self, pin, value_out):
        reply = ''
        ss_msg = f"?D{int(pin)}:\n"
        if not self.sendSerialMsg(ss_msg, reply):
            return False
        value_string = reply[reply.find(':')+1 : reply.find('\n')]
        value = int(value_string)
        value_out[0] = bool(value)
        return True

    def analogRead(self, pin, value_out):
        reply = ''
        ss_msg = f"?A{int(pin)}:\n"
        if not self.sendSerialMsg(ss_msg, reply):
            return False
        value_string = reply[reply.find(':')+1 : reply.find('\n')]
        value = int(value_string)
        value_out[0] = bool(value)

    def sendSerialMsg(self, msg, reply):
            reply_header_ss = '~' + msg[1:msg.find(':')]
            try:
                    self.ser.write(msg.encode())
                    reply_bytes = self.ser.readline()
                    reply = reply_bytes.decode().strip()
                    if reply.startswith(reply_header_ss):
                        self.communication_state = "IS_ONLINE"
                        return True
                    elif reply == "ERR":
                        print("Board responded with error")
                        self.communication_state = "LAST_WAS_ERROR"
                    elif reply == "":
                        print("Board is not responding")
                        if self.communication_state != "WAS_NEVER_ONLINE":
                            self.communication_state = "WAS_ONLINE"
                    else:
                        print("UNKNOWN REPLY")
                        self.communication_state = "LAST_WAS_UNKNOWN"
            except serial.SerialException:
                print("Failed to communicate with the serial port")
                self.communication_state = "SERIAL_ERROR"
            
            return False

    def readESDOK(self, value_out):
        reply = ''
        ss_msg = "?E:\n"
        if not self.sendSerialMsg(ss_msg, reply):
            return False
        value_string = reply[reply.find(':')+1 : reply.find('\n')]
        value = int(value_string)
        value_out[0] = bool(value)

    def requestPins(self, type, pins_out):
        reply = ''
        ss_msg = f"?P{int(type)}:\n"
        finished = False
        n = 0

        if not self.sendSerialMsg(ss_msg, reply):
            return False
        
        reply.erase(0, reply.find(':') + 1)
        while not finished and n < 40:
            if reply[1] == '\n':
                finished = True
            else:
                pos = reply.find(',')
                t_pin = int(reply[:pos])
                pins_out.append(t_pin)
                reply = reply[pos + 1:]
                n += 1
        pins_out = [0] * n
        return True
    
    def digitalReadAll(self, values_out):
        values_out = []
        reply = ''
        ss_msg = "?DT:\n"

        finished = False
        n = 0

        if not self.sendSerialMsg(ss_msg, reply):
            return False
        
        reply = reply[reply.find(':') + 1:]
        finished = False

        while not finished and n < 40:
            if reply[1] == '\n':
                finished = True
            else:
                pos = reply.find(',')
                t_value = int(reply[:pos])
                values_out.append(t_value)
                reply = reply[pos + 1:]
                n += 1
        values_out = [0] * n
        return True

    def analogReadAll(self, values_out):
        values_out = []
        reply = ''
        ss_msg = "?AT:\n"

        finished = False
        n = 0

        if not self.sendSerialMsg(ss_msg, reply):
            return False
        
        reply = reply[reply.find(':') + 1:]
        finished = False

        while not finished and n < 40:
            if reply[1] == '\n':
                finished = True
            else:
                pos = reply.find(',')
                t_value = int(reply[:pos])
                values_out.append(t_value)
                reply = reply[pos + 1:]
                n += 1
        values_out = [0] * n
        return True

    def innitCommunication(self):
        success = True
        time.sleep(2)
        success &= self.requestPins('D', self.digital_pins_numbers)
        success &= self.requestPins('A', self.analog_pins_numbers)

        if success:
            self.get_logger().info("Communication established")
            self.digital_pins_values.extend([0] * len(self.digital_pins_numbers))
            self.analog_pins_values.extend([0] * len(self.analog_pins_numbers))
        return success
    
    def requestState(self):
        success = True
        success &= self.readESDOK(self.esd_ok)
        success &= self.readContactors(self.contactor_on)
        success &= self.readMotorPowerControl(self.motor_power_control_on)
        success &= self.readAuxRelay(3, self.rl3_on)
        success &= self.readAuxRelay(5, self.rl5_on)
        success &= self.digitalReadAll(self.digital_pins_values)
        success &= self.analogReadAll(self.analog_pins_values)
        return success

    def publish_state(self):
        enc_state_msg = EnclosureState()
        enc_state_msg.communication_state = self.communication_state
        enc_state_msg.esd_ok = self.esd_ok
        enc_state_msg.contactors_on = self.contactor_on
        enc_state_msg.rl3_on = self.rl3_on
        enc_state_msg.rl5_on = self.rl5_on
        enc_state_msg.motor_power_control_on = self.motor_power_control_on
        enc_state_msg.digital_pin_numbers = self.digital_pins_numbers
        enc_state_msg.digital_pin_values = self.digital_pins_values
        enc_state_msg.analog_pin_numbers = self.analog_pins_numbers
        enc_state_msg.analog_pin_values = self.analog_pins_values

        self.state_pub.publish(enc_state_msg)

    def contactors_Service_Callback(self, request, response):
        response.sucess = self.switchContactors(request.data)
        return response
    
    def mot_Pwr_Ctrl_Service_Callback(self, request, response):
        response.success = self.switchMotorPowerControl(request.data)
        return response

    def rl3_service_callback(self, request, response):
        info_str = f'RL3: {"On" if request.data else "Off"}'
        self.get_logger().info(info_str)
        response.message = info_str
        response.success = self.switch_aux_relay(3, request.data)
        return response

    def rl5_service_callback(self, request, response):
        info_str = f'RL5: {"On" if request.data else "Off"}'
        self.get_logger().info(info_str)
        response.message = info_str
        response.success = self.switch_aux_relay(5, request.data)
        return response

    def digital_Write_Service_Callback(self, request, response):
        response.success = self.digitalWrite(request.pin, request.data)
        response.message = "digital write"
        return response
    
    def pin_Mode_To_Output_Service_Callback(self, request, response):
        response.success = self.pinMode(request.pin, request.data)
        response.message = "pin mode"
        return response

def main(args=None):
    rclpy.init(args=args)
    node = EnclosureBoardSerial()

    node.init_params()

    rate = rclpy.create_rate(20)

    while not node.init_communication() and rclpy.ok():
        rate.sleep()

    node.test3()

    while rclpy.ok():
        rclpy.spin_once(node)
        node.request_state()
        node.publish_state()
        rate.sleep()

    rclpy.shutdown()

if __name__ == '__main__':
    main()