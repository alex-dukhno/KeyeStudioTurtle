#ifndef HAL_HEAD_H
#define HAL_HEAD_H

class HalHead {
  public:
    virtual ~HalHead() = default;

    virtual bool turn(float angle) = 0;
};

#endif //HAL_HEAD_H
