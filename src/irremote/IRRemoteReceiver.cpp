#define IR_RECEIVE_PIN      26
#define IR_FEEDBACK_LED_PIN 25
#define DISABLE_PARITY_CHECKS
#include "IRRemoteReceiver.h"
#include <TinyIRReceiver.hpp>
#include "../commands/Commands.h"

// remote code table
#define REMOTE_UP 0x18
#define REMOTE_DOWN 0x52
#define REMOTE_LEFT 0x08
#define REMOTE_RIGHT 0x5A
#define REMOTE_OK 0x1C
#define REMOTE_1 0x45
#define REMOTE_2 0x46
#define REMOTE_3 0x47
#define REMOTE_4 0x44
#define REMOTE_5 0x40
#define REMOTE_6 0x43
#define REMOTE_7 0x07
#define REMOTE_8 0x15
#define REMOTE_9 0x09
#define REMOTE_ASTERISK 0x16
#define REMOTE_0 0x19
#define REMOTE_POUND 0x0D

uint8_t LastIRInput;
unsigned long MillisOfLastIRInput;
bool ButtonPressed = false;
void SetupIR() {
    initPCIInterruptForTinyReceiver();
}

void HandleIR() {
  if (ButtonPressed && millis() - 200 > MillisOfLastIRInput) {
    // Button released
    ButtonPressed = false;
    switch (LastIRInput) {
      case REMOTE_UP:
        commandBlind(":Qn#");
      break;
      case REMOTE_DOWN:
        commandBlind(":Qs#");
      break;
      case REMOTE_LEFT:
        commandBlind(":Qw#");
      break;
      case REMOTE_RIGHT:
        commandBlind(":Qe#");
      break;
    }
    LastIRInput = NULL;
  }
}

void IRAM_ATTR handleReceivedTinyIRData(uint8_t aAddress, uint8_t aCommand, uint8_t aFlags) {
  // if (aAddress == 0 && aFlags != IRDATA_FLAGS_IS_REPEAT && aFlags != IRDATA_FLAGS_PARITY_FAILED) {
    // Button pressed
    ButtonPressed = true;
    MillisOfLastIRInput = millis();
    // Only allow one command at the same time
    switch (LastIRInput) {
      case REMOTE_UP:
        commandBlind(":Qn#");
      break;
      case REMOTE_DOWN:
        commandBlind(":Qs#");
      break;
      case REMOTE_LEFT:
        commandBlind(":Qw#");
      break;
      case REMOTE_RIGHT:
        commandBlind(":Qe#");
      break;
    }
    LastIRInput = aCommand;
    switch (aCommand) {
      case REMOTE_UP:
        commandBlind(":Mn#");
      break;
      case REMOTE_DOWN:
        commandBlind(":Ms#");
      break;
      case REMOTE_LEFT:
        commandBlind(":Mw#");
      break;
      case REMOTE_RIGHT:
        commandBlind(":Me#");
      break;
      case REMOTE_OK:
        commandBool(":CS#");
      break;
      case REMOTE_1:
        commandBlind(":Te#");
      break;
      case REMOTE_2:
        commandBlind(":Td#");
      break;
      case REMOTE_3:
        commandBlind(":Q#");
      break;
      case REMOTE_4:
      break;
      case REMOTE_5:
      break;
      case REMOTE_6:
      break;
      case REMOTE_7:
      break;
      case REMOTE_8:
      break;
      case REMOTE_9:
      break;
      case REMOTE_ASTERISK:
        commandBlind(":hF#");
      break;
      case REMOTE_0:
      break;
      case REMOTE_POUND:
        commandBlind(":hC#");
      break;
    // }
  }
}
