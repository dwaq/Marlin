#include "botlight.h"
#include "Configuration.h"
#include "Adafruit_NeoPixel.h"

#define FRAME_SPEED 50

BotLight::BotLight() {
  lights = Adafruit_NeoPixel(BOT_LIGHT_LEDS, BOT_LIGHT_PIN, NEO_GRBW);
  lights.begin();
};

void BotLight::setColor(uint8_t r, uint8_t g, uint8_t b, uint8_t w) {
  for (int i=0;i<BOT_LIGHT_LEDS;i++) {
    lights.setPixelColor(i, lights.Color(r,g,b,w));
    lights.show();
    delay(20);
  }

}


void BotLight::setBrightness(uint8_t b) {
  lights.setBrightness(b);
  lights.show();
}

void BotLight::turnOff() {
  setColor(0,0,0,0);
}
