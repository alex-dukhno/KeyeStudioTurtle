#ifndef HAL_DISTANCE_SENSOR_H
#define HAL_DISTANCE_SENSOR_H

class HalDistanceSensor {
  public:
    virtual ~HalDistanceSensor() = default;

    virtual double readDistance() = 0;
};

#endif //HAL_DISTANCE_SENSOR_H
