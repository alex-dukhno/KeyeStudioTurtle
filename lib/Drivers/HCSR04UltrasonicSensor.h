#ifndef HCSR04_ULTRASONIC_SENSOR_H
#define HCSR04_ULTRASONIC_SENSOR_H

#include "HalDistanceSensor.h"

#include <Arduino.h>

class HCSR04UltrasonicSensor final: public HalDistanceSensor {
  private:
    int triggerPin;
    int echoPin;

  public:
    HCSR04UltrasonicSensor(const int triggerPin, const int echoPin) {
      this->triggerPin = triggerPin;
      this->echoPin = echoPin;
    }

    double readDistance() override {
      digitalWrite(this->triggerPin, LOW);
      delayMicroseconds(2);
      digitalWrite(this->triggerPin, HIGH);
      delayMicroseconds(10);
      digitalWrite(this->triggerPin, LOW);

      const unsigned long duration = pulseIn(this->echoPin, HIGH);

      const double cm = duration / 2 * 0.0343;
      return cm;
    }
};

#endif //HCSR04_ULTRASONIC_SENSOR_H
