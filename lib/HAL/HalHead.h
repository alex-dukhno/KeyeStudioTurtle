#ifndef HEAD_H
#define HEAD_H

class HalHead {
  public:
    virtual ~HalHead() = default;

    virtual bool turn(float angle) = 0;
};

#endif //HEAD_H
