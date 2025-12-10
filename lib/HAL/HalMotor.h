#ifndef HAL_MOTOR_H
#define HAL_MOTOR_H

class HalMotor {
  public:
    virtual ~HalMotor() = default;

    virtual bool setSpeed(float speed) = 0;
};

#endif //HAL_MOTOR_H
