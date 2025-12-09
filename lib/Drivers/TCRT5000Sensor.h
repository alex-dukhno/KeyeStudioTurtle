#ifndef TCRT_5000_SENSOR_H
#define TCRT_5000_SENSOR_H

#include "HalLineTrackingSensor.h"
#include <Arduino.h>


class TCRT5000Sensor final: HalLineTrackingSensor {
  public:
    TCRT5000Sensor(const int leftPin, const int middlePin, const int rightPin)
      : HalLineTrackingSensor(leftPin, middlePin, rightPin) {
    }

    int readLeft() override {
      return analogRead(leftPin);
    }

    int readMiddle() override {
      return analogRead(middlePin);
    }

    int readRight() override {
      return analogRead(rightPin);
    }
};


#endif //TCRT_5000_SENSOR_H
