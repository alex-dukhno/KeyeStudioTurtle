#ifndef MATRIX_DISPLAY_H
#define MATRIX_DISPLAY_H

#include "HalMatrix.h"
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_LEDBackpack.h>

class MatrixDisplay : public HalMatrix {
  Adafruit_8x8matrix matrix;

  void drawBitmap(const uint8_t *bitmap) {
    matrix.clear();
    for (int y = 0; y < 8; y++) {
      const uint8_t rawRow = pgm_read_byte(&bitmap[y]);
      matrix.displaybuffer[y] = rawRow;
    }
    matrix.writeDisplay();
  }

  public:
    MatrixDisplay() = default;

    void begin() override {
      matrix.begin(0x70); // 0x70 is the default I2C address for Keyestudio
      matrix.setRotation(0);
      matrix.setBrightness(1);
    }

    void showSmile() override {
      this->drawBitmap(smile_bmp);
    }

    // Bitmap data for a smile
    static const uint8_t smile_bmp[];
};

const uint8_t MatrixDisplay::smile_bmp[] =
{
  0b10000000,
  0b01000000,
  0b00100000,
  0b00010000,
  0b00001000,
  0b00000100,
  0b00000010,
  0b00000001
};

#endif //MATRIX_DISPLAY_H
