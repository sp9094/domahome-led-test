#include <FastLED.h>

#define LED_PIN     6
#define NUM_LEDS    1
#define BRIGHTNESS  100
#define LED_TYPE    WS2812
#define COLOR_ORDER GRB

CRGB leds[NUM_LEDS];

void setup() {
  FastLED.addLeds<LED_TYPE, LED_PIN, COLOR_ORDER>(leds, NUM_LEDS);
  FastLED.setBrightness(BRIGHTNESS);
}

void loop() {
  leds[0] = CRGB::White;   // Turn ON (white)
  FastLED.show();
  delay(1000);

  leds[0] = CRGB::Black;   // Turn OFF
  FastLED.show();
  delay(1000);
}

