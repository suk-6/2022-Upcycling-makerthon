#include <Adafruit_NeoPixel.h>

#define LED_PIN 12
#define LED_COUNT 20

Adafruit_NeoPixel strip(LED_COUNT, LED_PIN, NEO_GRB + NEO_KHZ800);

void setup(){
  strip.begin();
  strip.show();
  strip.setBrightness(255);
}

void loop(){
  strip.begin();
  strip.setPixelColor(0, 255, 255, 255);
  strip.setPixelColor(1, 255, 255, 255);
  strip.setPixelColor(2, 255, 255, 255);
  strip.setPixelColor(3, 255, 255, 255);
  strip.setPixelColor(4, 255, 255, 255);
  strip.setPixelColor(5, 255, 255, 255);
  strip.setPixelColor(6, 255, 255, 255);
  strip.setPixelColor(7, 255, 255, 255);
  strip.setPixelColor(8, 255, 255, 255);
  strip.setPixelColor(9, 255, 255, 255);
  strip.setPixelColor(10, 255, 255, 255);
  strip.setPixelColor(11, 255, 255, 255);
  strip.setPixelColor(12, 255, 255, 255);
  strip.setPixelColor(13, 255, 255, 255);
  strip.setPixelColor(14, 255, 255, 255);
  strip.setPixelColor(15, 255, 255, 255);
  strip.setPixelColor(16, 255, 255, 255);
  strip.setPixelColor(17, 255, 255, 255);
  strip.setPixelColor(18, 255, 255, 255);
  strip.setPixelColor(19, 255, 255, 255);
  
  strip.show();
}
