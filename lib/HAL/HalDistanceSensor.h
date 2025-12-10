#ifndef DISTANCE_SENSOR_H
#define DISTANCE_SENSOR_H

class HalDistanceSensor {
  public:
    virtual ~HalDistanceSensor() = default;

    virtual double readDistance() = 0;
};

#endif //DISTANCE_SENSOR_H
