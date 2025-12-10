#ifndef HAL_IR_CONTROLLER_H
#define HAL_IR_CONTROLLER_H

enum Buttons {
  UP = 0,
  DOWN = 1,
  OK = 2,
  LEFT = 3,
  RIGHT = 4,

  ONE = 5,
  TWO = 6,
  THREE = 7,
  FOUR = 8,
  FIVE = 9,
  SIX = 10,
  SEVEN = 11,
  EIGHT = 12,
  NINE = 13,
  ZERO = 14,

  STAR = 15,
  DIEZ = 16
};

class HalInfraredController {
  public:
    virtual ~HalInfraredController() = default;

    virtual Buttons* buttonClicked() = 0;
};

#endif //HAL_IR_CONTROLLER_H
