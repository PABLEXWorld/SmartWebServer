// -------------------------------------------------------------------------------------------------
// Pin map for ESP32
#pragma once

#if defined(ESP32)
  #define PINMAP_STR "ESP32"

  #define BOOT0_PIN        22  // GPIO22 to Boot0 of STM32 etc. (no swapped serial if active)

  #define AXIS1_ENC_A_PIN  25  // pin# for Axis1 encoder, for A or CW  or MA/CLK
  #define AXIS1_ENC_B_PIN  26  // pin# for Axis1 encoder, for B or CCW or SLO
  #define AXIS2_ENC_A_PIN  14  // pin# for Axis1 encoder, for A or CW  or MA/CLK
  #define AXIS2_ENC_B_PIN  27  // pin# for Axis1 encoder, for B or CCW or SLO

  #define W5500_RESET_PIN  12  // pin# for controlling the reset of W5500 so it comes up properly

  #define LED_STATUS_PIN   16  // pin 2 is a guess and is probably wrong
                               // should be corrected for the common WeMos D1 Mini footprint ESP32
  #define SD_CARD_CS_PIN   OFF // pin 4 to CS for SD adapter on Arduino Ethernet Shield
#endif
