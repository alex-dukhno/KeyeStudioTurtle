#ifndef DISTANCE_SENSOR_H
#define DISTANCE_SENSOR_H

class HalDistanceSensor {
  protected:
    int triggerPin;
    int echoPin;

  public:
    explicit HalDistanceSensor(int triggerPin, int echoPin);

    virtual ~HalDistanceSensor() = default;

    virtual double readDistance() = 0;
};

#endif //DISTANCE_SENSOR_H
