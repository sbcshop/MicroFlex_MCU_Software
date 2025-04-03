#include <Adafruit_NeoPixel.h>

// Define LED pin and number of LEDs
#define LED_PIN 45    // Change based on board => GP45 (Micro S3), GP42 (Micro S2), GP23 (Micro C6), GP10 (Micro C3), GP6 (Micro RP2040)
#define NUM_LEDS 1    // Number of WS2812 LEDs

// Initialize NeoPixel object
Adafruit_NeoPixel strip(NUM_LEDS, LED_PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  strip.begin();  // Initialize LED strip
  strip.show();   // Turn off all LEDs initially
}

void loop() {
  // Blink Red
  strip.setPixelColor(0, strip.Color(255, 0, 0));  // Red
  strip.show();
  delay(500);

  // Blink Green
  strip.setPixelColor(0, strip.Color(0, 255, 0));  // Green
  strip.show();
  delay(500);

  // Blink Blue
  strip.setPixelColor(0, strip.Color(0, 0, 255));  // Blue
  strip.show();
  delay(500);

  // Turn off LED
  strip.setPixelColor(0, strip.Color(0, 0, 0));  // Off
  strip.show();
  delay(500);
}
