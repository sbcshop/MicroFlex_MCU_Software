#include <Adafruit_NeoPixel.h>

// Define LED pin and number of LEDs
#define LED_PIN 10    // Change based on board => GP45 (Micro S3), GP42 (Micro S2), GP23 (Micro C6), GP10 (Micro C3), GP6 (Micro RP2040)
#define NUM_LEDS 1    // Number of WS2812 LEDs

// Initialize NeoPixel object
Adafruit_NeoPixel rgbLED(NUM_LEDS, LED_PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  rgbLED.begin();  // Initialize LED rgbLED
  rgbLED.show();   // Turn off all LEDs initially
}

void loop() {
  // Blink Red
  rgbLED.setPixelColor(0, rgbLED.Color(255, 0, 0));  // Red
  rgbLED.show();
  delay(500);

  // Blink Green
  rgbLED.setPixelColor(0, rgbLED.Color(0, 255, 0));  // Green
  rgbLED.show();
  delay(500);

  // Blink Blue
  rgbLED.setPixelColor(0, rgbLED.Color(0, 0, 255));  // Blue
  rgbLED.show();
  delay(500);

  // Turn off LED
  rgbLED.setPixelColor(0, rgbLED.Color(0, 0, 0));  // Off
  rgbLED.show();
  delay(500);
}
