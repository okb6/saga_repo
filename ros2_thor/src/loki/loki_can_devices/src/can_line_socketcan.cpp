#include "loki_can_devices/can_line_socketcan.h"





CanLineSocketcan::CanLineSocketcan()
{

}


CanLineSocketcan::~CanLineSocketcan()
{

  mtx_.lock();
  shutdown_ = true;
  close(sfd_);
  mtx_.unlock();

}

void CanLineSocketcan::setInterface(std::string interface)
{
  interface_ = interface.c_str();
}


bool CanLineSocketcan::initialize(std::string interface)
{
  setInterface(interface);
  initialize();
}

bool CanLineSocketcan::initialize()
{
  struct sockaddr_can addr;
  struct ifreq ifr;
  
  shutdown_ = false;

  // Check if interface has been set 
  if (interface_ == NULL)
  {
    std::cout << "Socketcan interface not set!" << std::endl;
    return false;
  }
 
  // open socket and get file descriptor
  sfd_ = socket(PF_CAN, SOCK_RAW, CAN_RAW);
  if (sfd_ < 0)
  {
    std::cout << "Failed to open socket!" << std::endl;
    return false;
  }

  // set interface name
  strcpy(ifr.ifr_name, interface_);

  // get flags
  ioctl(sfd_, SIOCGIFFLAGS, &ifr);
  bool is_up = (ifr.ifr_flags & IFF_UP);
  bool is_running = (ifr.ifr_flags & IFF_RUNNING);
  
  // check if interface is UP
  if (!is_up)
  {
    std::cout << interface_ << " is DOWN!" << std::endl;
    return false;   
  }
  else
  {
    std::cout << interface_ << " is UP " << ((is_running) ? "and" : "but not") << " RUNNING" << std::endl;
  }

  
  ioctl(sfd_, SIOCGIFINDEX, &ifr);
  addr.can_family = AF_CAN;
  addr.can_ifindex = ifr.ifr_ifindex;
  
  if (bind(sfd_, (struct sockaddr *)&addr, sizeof(addr))<0)
  {
    std::cout << "Failed to bind socket!" << std::endl;
    close(sfd_);
    return false;
  }
  
  can_err_mask_t err_mask = CAN_ERR_MASK;
  setsockopt(sfd_, SOL_CAN_RAW, CAN_RAW_ERR_FILTER, &err_mask, sizeof(err_mask));




  std::cout << "finished setting up" << std::endl;

  return true;
}




bool CanLineSocketcan::begin()
{
  // spin read thread
  shutdown_ = false;
  boost::thread rx_thread(boost::bind(&CanLineSocketcan::rxThread, this));
  boost::thread tx_thread(boost::bind(&CanLineSocketcan::txThread, this));
  return true;
}


void CanLineSocketcan::getReceivedMsgs(std::vector<CanFrame>& can_frames)
{
  // populate can_frames with received CAN msgs
  mtx_.lock();
  can_frames = can_frames_r_;
  can_frames_r_.resize(0);
  mtx_.unlock();
}


bool CanLineSocketcan::sendMsgs(std::vector<CanFrame> can_frames)
{
  // add msgs to send buffer
  mtx_.lock();
  can_frames_t_.insert(can_frames_t_.end(), can_frames.begin(), can_frames.end());
  mtx_.unlock();

  return true; 

}


bool CanLineSocketcan::writeMsg(CanFrame can_frame_wr)
{

   // Frame to send
   struct can_frame frame_wr =
   {
     .can_id = can_frame_wr.getId(),
     .can_dlc = can_frame_wr.getLength(),
     .__pad = 0,
     .__res0 = 0,
    //  .__res1 = 0,
     .data = { can_frame_wr.getByte(0),
               can_frame_wr.getByte(1),
               can_frame_wr.getByte(2),
               can_frame_wr.getByte(3),
               can_frame_wr.getByte(4),
               can_frame_wr.getByte(5),
               can_frame_wr.getByte(6),
               can_frame_wr.getByte(7) },
   };
 
 
          
  int nbytes = write(sfd_, &frame_wr, sizeof(struct can_frame));


  return true;

}



void CanLineSocketcan::rxThread()
{

  while(!shutdown_)
  {

    struct can_frame frame_rd;    
    int nbytes = read(sfd_, &frame_rd, sizeof(struct can_frame));
    
    // Populate can frame 
    CanFrame c_can_frame;
    c_can_frame.setId(frame_rd.can_id);
    c_can_frame.setLength(frame_rd.can_dlc);
    c_can_frame.setBytes(frame_rd.data[0],
                         frame_rd.data[1],
                         frame_rd.data[2],
                         frame_rd.data[3],
                         frame_rd.data[4],
                         frame_rd.data[5],
                         frame_rd.data[6],
                         frame_rd.data[7]);
    
    
    
    mtx_.lock();
    can_frames_r_.push_back(c_can_frame);
    if (can_frames_r_.size() > 100)
    {
      can_frames_r_.resize(100);
    }
    mtx_.unlock();

  }


}




void CanLineSocketcan::txThread()
{
  boost::posix_time::time_duration interval(boost::posix_time::microseconds(1000000 / TX_POLL_FREQUENCY));
  boost::posix_time::ptime timer = boost::posix_time::microsec_clock::local_time() + interval;
  
  while(!shutdown_)
  {

    // Check if there are messages to send
    mtx_.lock();
    bool tx_msgs_in_buffer = (can_frames_t_.size() > 0);
    mtx_.unlock();

    // Send messages
    if (tx_msgs_in_buffer)
    {

      mtx_.lock();
      std::vector<CanFrame> can_frames = can_frames_t_;
      can_frames_t_.resize(0);
      mtx_.unlock();

      for (std::vector<CanFrame>::iterator can_frame = can_frames.begin(); can_frame != can_frames.end(); ++can_frame)
      {
        writeMsg(*can_frame);
      }
  
    }
    else
    {
      timer = timer + interval;
      boost::this_thread::sleep(timer - boost::posix_time::microsec_clock::local_time());
    }
  }

}





