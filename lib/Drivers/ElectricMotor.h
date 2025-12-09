#ifndef ELECTRIC_MOTOR_H
#define ELECTRIC_MOTOR_H

#include "HalMotor.h"
#include <Arduino.h>

class ElectricMotor final: HalMotor {
  public:
    ElectricMotor(const int controlPin, const int pwmPin) : HalMotor(controlPin, pwmPin) {}

    bool setSpeed(float speed) override {
      return true;
    }

    // void ElectricEngine::clockwiseFast() const {
    //   digitalWrite(this->controlPin, HIGH);
    //   analogWrite(this->pwmPin, 0);
    // }
    //
    // void ElectricEngine::clockwiseMiddle() const {
    //   digitalWrite(this->controlPin, HIGH);
    //   analogWrite(this->pwmPin, 31);
    // }
    //
    // void ElectricEngine::clockwiseSlow() const {
    //   digitalWrite(this->controlPin, HIGH);
    //   analogWrite(this->pwmPin, 127);
    // }
    //
    // void ElectricEngine::clockwiseStop() const {
    //   digitalWrite(this->controlPin, HIGH);
    //   analogWrite(this->pwmPin, 255);
    // }
    //
    // void ElectricEngine::counterclockwiseFast() const {
    //   digitalWrite(this->controlPin, LOW);
    //   analogWrite(this->pwmPin, 255);
    // }
    //
    // void ElectricEngine::counterclockwiseMiddle() const {
    //   digitalWrite(this->controlPin, LOW);
    //   analogWrite(this->pwmPin, 127);
    // }
    //
    // void ElectricEngine::counterclockwiseSlow() const {
    //   digitalWrite(this->controlPin, LOW);
    //   analogWrite(this->pwmPin, 31);
    // }
    //
    // void ElectricEngine::counterclockwiseStop() const {
    //   digitalWrite(this->controlPin, LOW);
    //   analogWrite(this->pwmPin, 0);
    // }
};

#endif //ELECTRIC_MOTOR_H
