#ifndef SERVO_HEAD_H
#define SERVO_HEAD_H

#include "HalHead.h"
#include <Servo.h>

class ServoHead final: HalHead {
  private:
    Servo servo;

  public:
    explicit ServoHead(const int pin) : HalHead(pin) {
      this->servo = Servo();
    }

    // void init() {
    //   this->servo.attach(this->pin);
    // }

    bool turn(float angle) override {
      this->servo.write(angle);
      return true;
    }
};


#endif //SERVO_HEAD_H
