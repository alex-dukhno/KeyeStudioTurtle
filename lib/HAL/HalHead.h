#ifndef HEAD_H
#define HEAD_H

class HalHead {
  protected:
    int pin;

  public:
    explicit HalHead(const int pin) {
      this->pin = pin;
    }

    virtual ~HalHead() = default;

    virtual bool turn(float angle) = 0;
};

#endif //HEAD_H
