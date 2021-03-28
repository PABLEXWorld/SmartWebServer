// -------------------------------------------------------------------------------------------------
// Pin map for ESP32
#pragma once

#if defined(ESP32)
  #define PINMAP_STR "ESP32"

  #define BOOT0_PIN       17 // pin 17 to Boot0 of STM32

  #define AXIS1_ENC_A_PIN 18 // pin# for Axis1 encoder, for A or CW
  #define AXIS1_ENC_B_PIN 19 // pin# for Axis1 encoder, for B or CCW
  #define AXIS2_ENC_A_PIN 22 // pin# for Axis1 encoder, for A or CW
  #define AXIS2_ENC_B_PIN 21 // pin# for Axis1 encoder, for B or CCW

  #define W5500_RESET_PIN 9  // pin# for controlling the reset of W5500 so it comes up properly

  #define LED_STATUS_PIN  2  // pin 2 is a guess and is probably wrong
                             // should be corrected for the common WeMos D1 Mini footprint ESP32
#endif