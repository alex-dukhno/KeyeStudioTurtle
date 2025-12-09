#ifndef IR8833_BOARD_CONTROLLER_H
#define IR8833_BOARD_CONTROLLER_H

#include "HalIRController.h"

#include <Arduino.h>
#include <IRremote.h>

typedef struct {
  Buttons value;
  IRRawDataType encoded;
} Code;

Code CODES[] = {
  {UP, 0xB946FF00},
  {DOWN, 0xEA15FF00},
  {OK, 0xBF40FF00},
  {LEFT, 0xBB44FF00},
  {RIGHT, 0xBC43FF00},

  {ONE, 0xE916FF00},
  {TWO, 0xE619FF00},
  {THREE, 0xF20DFF00},
  {FOUR, 0xF30CFF00},
  {FIVE, 0xE718FF00},
  {SIX, 0xA15EFF00},
  {SEVEN, 0xF708FF00},
  {EIGHT, 0xE31CFF00},
  {NINE, 0xA55AFF00},
  {ZERO, 0xAD52FF00},

  {STAR, 0xBD42FF00},
  {DIEZ, 0xB54AFF00},
};

class IR8833BoardController final : HalInfraredController {
  public:
    explicit IR8833BoardController(const int recvPin) : HalInfraredController(recvPin) {
    }

    // void InfraRedControl::init() const {
    //   pinMode(recvPin, INPUT);
    //   IrReceiver.begin(recvPin, ENABLE_LED_FEEDBACK);
    //   IrReceiver.enableIRIn();
    // }

    Buttons* buttonClicked() override {
      if (IrReceiver.decode() && IrReceiver.decode()) {
        if (IrReceiver.decodedIRData.protocol == UNKNOWN) {
          IrReceiver.printIRResultRawFormatted(&Serial, true);

          IrReceiver.resume(); // Do it here, to preserve raw data for printing with printIRResultRawFormatted()
          return nullptr;
        }
        IrReceiver.resume();

        IrReceiver.printIRResultShort(&Serial);
        IrReceiver.printIRSendUsage(&Serial);
        Serial.println();

        const IRRawDataType decoded = IrReceiver.decodedIRData.decodedRawData;

        for (int i = 0; i < 17; i++) {
          if (CODES[i].encoded == decoded) {
            return &CODES[i].value;
          }
        }

        return nullptr;
      }
      return nullptr;
    }
};

#endif //IR8833_BOARD_CONTROLLER_H
