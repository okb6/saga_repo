#ifndef CANLINESOCKETCAN_H
#define CANLINESOCKETCAN_H


#include <sys/socket.h> // <-- This one
#include <sys/ioctl.h>
#include <unistd.h>
      
#include <fcntl.h>
#include <linux/socket.h>
#include <linux/if.h>
#include <linux/can.h>
#include <linux/can/raw.h>
#include <linux/can/error.h>
#include <linux/sockios.h>
#include <iostream>
#include <stdio.h>
#include <string>


#include <loki_can_devices/can_line_itf.h>

#include <loki_can_devices/can_ctrl_pltf.h>

#include <boost/thread/scoped_thread.hpp>
#include <boost/chrono.hpp>
#include <boost/thread/thread.hpp> 
#include <boost/thread/mutex.hpp>
#include <boost/thread.hpp>

#include <boost/date_time/posix_time/posix_time.hpp>


class CanLineSocketcan : public can_line_itf::CanLineItf
{

  public:
  CanLineSocketcan();
  ~CanLineSocketcan();
  bool initialize();
  bool initialize(std::string interface);
  void setInterface(std::string interface);
  bool begin();
  void getReceivedMsgs(std::vector<CanFrame>& can_frames);
  bool sendMsgs(std::vector<CanFrame> can_frames);


  private:




  void rxThread();
  void txThread();
  bool writeMsg(CanFrame can_frame_wr);

  const static int TX_POLL_FREQUENCY = 100;
  boost::mutex mtx_;
  bool shutdown_; 
  const char *interface_ = NULL;
  std::vector<CanFrame> can_frames_r_;
  std::vector<CanFrame> can_frames_t_;


  //
  int sfd_;



};


#endif
