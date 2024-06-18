


#include <vector>
#include <stdint.h>

#ifndef CANFRAME_INCLUDEF_H
#define CANFRAME_INCLUDEF_H


class CanFrame
{
  public:
  CanFrame();

  void setId(int id);
  void setType(int type);
  void setLength(uint8_t length);
  void setByte(uint8_t index, uint8_t byte);
  void setBytes(uint8_t data0, uint8_t data1, uint8_t data2, uint8_t data3, uint8_t data4, uint8_t data5, uint8_t data6, uint8_t data7);

  int getId();
  int getType();
  int getLength();
  void getBytes(std::vector<uint8_t>& data);
  uint8_t getByte(uint8_t index);

  enum FrameTypes
  {
    FRAMETYPE_STD = 0,
    FRAMETYPE_EXT = 1,
  };

  private:

  int id_;
  int type_;
  int length_;
  std::vector<uint8_t> data_;




};




#endif
