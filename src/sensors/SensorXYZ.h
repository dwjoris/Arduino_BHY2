#ifndef SENSOR_XYZ_H_
#define SENSOR_XYZ_H_

#include "Sensor.h"

class SensorXYZ : public Sensor {
public:
  SensorXYZ(uint8_t id) : Sensor(id), _data() {}

  int16_t x() 
  { 
    return _data.x; 
  }
  int16_t y()
  {
    return _data.y;
  }
  int16_t z()
  {
    return _data.z;
  }

  void setData(SensorDataPacket &data)
  {
    DataParser::parse(data, _data);
  }

  String toString()
  {
    return _data.toString();
  }

private:
  SensorXYZ() {} 

  DataXYZ _data;
};

#endif
