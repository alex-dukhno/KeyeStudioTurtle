#ifndef HAL_LINE_TRACKING_SENSOR_H
#define HAL_LINE_TRACKING_SENSOR_H

class HalLineTrackingSensor {
  public:
    virtual ~HalLineTrackingSensor() = default;

    virtual int readLeft() = 0;
    virtual int readMiddle() = 0;
    virtual int readRight() = 0;
};

#endif //HAL_LINE_TRACKING_SENSOR_H
