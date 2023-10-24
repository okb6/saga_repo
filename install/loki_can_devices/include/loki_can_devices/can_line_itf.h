#ifndef CANLINEITF_INCLUDEDEF_H
#define CANLINEITF_INCLUDEDEF_H


//-----------------------------------------------
#include "loki_can_devices/can_frame.h"
#include <vector>

namespace can_line_itf
{
  class CanLineItf
  {
    public:

      /** Initializes CAN adapter
       */
      virtual bool initialize() = 0;


      /** Begin receiving and sending
       */
      virtual bool begin () = 0;


      /** Get received CAN frames
       * \param can_frames To be populated with received can frames
       */
      virtual void getReceivedMsgs (std::vector<CanFrame>& can_frames) = 0;
      

      /** Send CAN frames
       * \param can_frames Can frames to send
       */
      virtual bool sendMsgs (std::vector<CanFrame> can_frames) = 0;



    //protected:
    //  CanLineItf(){}
  };
};
#endif
