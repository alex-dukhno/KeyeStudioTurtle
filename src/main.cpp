#include <Arduino.h>

#include <Arduino_FreeRTOS.h>
#include <semphr.h>

SemaphoreHandle_t xSerialSemaphore = xSemaphoreCreateMutex();

int pos = 0;

void TaskOn(void *pvParameters);
void TaskOff(void *pvParameters);
void TaskAnalogWrite(void *pvParameters);
void TaskLineTracker(void *pvParameters);
void TaskTurnHead(void *pvParameters);
void TaskInfraRedControl(void *pvParameters);

constexpr int LED_PIN = 9;

void setup() {
  Serial.begin(9600);

  xTaskCreate(
    TaskInfraRedControl,
    "InfraRedControl",
    128,
    nullptr,
    1,
    nullptr
  );
}

// xTaskCreate(
//     TaskTurnHead
//     , "TurnHead"
//     , 128
//     , nullptr
//     , 1
//     , nullptr
// );

// xTaskCreate(
//     TaskAnalogWrite
//     , "AnalogWrite"
//     , 128
//     , nullptr
//     , 1
//     , nullptr
// );

// xTaskCreate(
//     TaskLineTracker
//     , "LineTracker"
//     , 128
//     , nullptr
//     , 3
//     , nullptr
// );

// xTaskCreate(
//     TaskOn
//     , "On"
//     , 128
//     , nullptr
//     , 1
//     , nullptr
// );
//
// xTaskCreate(
//     TaskOff
//     , "Off"
//     , 128
//     , nullptr
//     , 1
//     , nullptr
// );

void loop() {
}
