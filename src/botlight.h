#ifndef BOTLIGHT_H
#define BOTLIGHT_H

#include "Arduino.h"
#include "Configuration.h"
#include "pins.h"
#include "Adafruit_NeoPixel.h"

class BotLight {
  public:
    BotLight();
    void setColor(uint8_t r, uint8_t g, uint8_t b, uint8_t w);
    void setBrightness(uint8_t b);
    void turnOff();

  private:
    Adafruit_NeoPixel lights;
};

#endif
