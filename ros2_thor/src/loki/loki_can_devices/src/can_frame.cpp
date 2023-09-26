#include "loki_can_devices/can_frame.h"



CanFrame::CanFrame()
{
  id_ = 0;
  length_ = 8;
  type_ = FRAMETYPE_STD;
  data_.resize(8);
}

void CanFrame::setId(int id)
{
  id_ = id;
}

void CanFrame::setType(int type)
{
  type_ = type;
}

void CanFrame::setLength(uint8_t length)
{
  length_ = length;
}



void CanFrame::setByte(uint8_t index, uint8_t byte)
{
  if (index < 8)
  {
    data_[index] = byte;
  }
}


void CanFrame::setBytes(uint8_t data0, uint8_t data1, uint8_t data2, uint8_t data3, uint8_t data4, uint8_t data5, uint8_t data6, uint8_t data7)
{
  data_[0] = data0;
  data_[1] = data1;
  data_[2] = data2;
  data_[3] = data3;
  data_[4] = data4;
  data_[5] = data5;
  data_[6] = data6;
  data_[7] = data7;
}

int CanFrame::getId()
{
  return id_;
}


int CanFrame::getType()
{
  return type_;
}

int CanFrame::getLength()
{
  return length_;
}

void CanFrame::getBytes(std::vector<uint8_t>& data)
{
  data = data_;
  data.resize(length_);
}


uint8_t CanFrame::getByte(uint8_t index)
{
  return data_[index];
}










