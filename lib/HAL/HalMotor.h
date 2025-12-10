#ifndef MOTOR_H
#define MOTOR_H

class HalMotor {
  public:
    virtual ~HalMotor() = default;

    virtual bool setSpeed(float speed) = 0;
};

#endif //MOTOR_H
