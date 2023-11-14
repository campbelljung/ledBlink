#include <Adafruit_NeoPixel.h>
Adafruit_NeoPixel neopixel = Adafruit_NeoPixel(1, 32, NEO_RGB);

void setup() {
  // put your setup code here, to run once:
  neopixel.begin();
  neopixel.clear();
  neopixel.show();
}

void loop() {
  // put your main code here, to run repeatedly:
  neopixel.setPixelColor(0, random(255), random(255), random(255));
  neopixel.show();
  delay(500);
  neopixel.setPixelColor(0, 0, 0, 0);
  neopixel.show();
  delay(500);
}
