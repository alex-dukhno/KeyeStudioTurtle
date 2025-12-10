#ifndef HAL_MATRIX_H
#define HAL_MATRIX_H

class HalMatrix {
  public:
    virtual ~HalMatrix() = default;

    virtual void begin() = 0;

    virtual void showSmile() = 0;
};

#endif //HAL_MATRIX_H
