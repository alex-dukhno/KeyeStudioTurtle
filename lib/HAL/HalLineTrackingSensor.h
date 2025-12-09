#ifndef LINE_TRACKING_SENSOR_H
#define LINE_TRACKING_SENSOR_H

class HalLineTrackingSensor {
  protected:
    int leftPin;
    int middlePin;
    int rightPin;

  public:
    HalLineTrackingSensor(const int leftPin, const int middlePin, const int rightPin) {
      this->leftPin = leftPin;
      this->middlePin = middlePin;
      this->rightPin = rightPin;
    }

    virtual ~HalLineTrackingSensor() = default;

    virtual int readLeft() = 0;
    virtual int readMiddle() = 0;
    virtual int readRight() = 0;
};

#endif //LINE_TRACKING_SENSOR_H
