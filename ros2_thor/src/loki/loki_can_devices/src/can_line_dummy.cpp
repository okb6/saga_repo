#include <loki_can_devices/can_line_dummy.h>






CanLineDummy::CanLineDummy()
{

}


CanLineDummy::~CanLineDummy()
{

}



bool CanLineDummy::initialize()
{
  return true;
}


bool CanLineDummy::begin()
{
  return true;
}


void CanLineDummy::getReceivedMsgs(std::vector<CanFrame>& can_frames)
{
}


bool CanLineDummy::sendMsgs(std::vector<CanFrame> can_frames)
{

  return true; 

}

