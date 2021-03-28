// -----------------------------------------------------------------------------------
// Help with commands, etc.

#include <Arduino.h>
#include "../../Constants.h"
#include "../../Config.h"
#include "../../ConfigX.h"
#include "../HAL/HAL.h"
extern NVS nv;
#include "../debug/Debug.h"
#include "../tasks/OnTask.h"
extern Tasks tasks;
#include "../pinmaps/Models.h"

#include "../locales/Locale.h"

#include "Commands.h"

int webTimeout = TIMEOUT_WEB;
int cmdTimeout = TIMEOUT_CMD;

void serialBegin(long baudRate, int swap) {
  static bool firstRun = true;
  if (SERIAL_BAUD_DEFAULT == SERIAL_BAUD && (swap == ON || swap == OFF) && !firstRun) return;
  firstRun = false;
  if (swap == ON || swap == AUTO_ON) swap = 1; else swap = 0;
  #ifdef ESP32
    // wemos d1 mini esp32
    // not swapped: TX and RX on default pins
    //     swapped: TX on gpio 5 and RX on gpio 23
    if (swap) Ser.begin(baudRate,SERIAL_8N1,23,5); else Ser.begin(baudRate,SERIAL_8N1,1,3);
  #else
    Ser.begin(baudRate);
    #ifdef ESP8266
      if (swap) Ser.swap();
    #endif
  #endif
  delay(1000);
}

const char* highSpeedCommsStr(long baud) {
  if (baud == 115200) { return ":SB0#"; }
  if (baud == 57600) { return ":SB1#"; }
  if (baud == 38400) { return ":SB2#"; }
  if (baud == 28800) { return ":SB3#"; }
  if (baud == 19200) { return ":SB4#"; } else { return ":SB5#"; }
}

char serialRecvFlush() {
  char c = 0;
  while (Ser.available() > 0) c = Ser.read();
  return c;
}

void clearSerialChannel() {
  for (int i = 0; i < 3; i++) {
    Ser.print(":#");
    #if LED_STATUS == ON
      digitalWrite(LED_STATUS_PIN, LED_STATUS_OFF_STATE);
    #endif
    delay(200);

    serialRecvFlush();
    #if LED_STATUS == ON
      digitalWrite(LED_STATUS_PIN, LED_STATUS_ON_STATE);
    #endif
    delay(200);
  }
}

// smart LX200 aware command and response over serial
bool processCommand(const char* cmd, char* response, long timeOutMs) {
  Ser.setTimeout(timeOutMs);
  
  // clear the read/write buffers
  serialRecvFlush();

  // send the command
  Ser.print(cmd);

  bool noResponse=false;
  bool shortResponse=false;
  if ((cmd[0]==(char)6) && (cmd[1]==0)) shortResponse=true;
  if ((cmd[0]==':') || (cmd[0]==';')) {
    if (cmd[1]=='G') {
      if (strchr("RDE",cmd[2])) { if (timeOutMs < 300) timeOutMs = 300; }
    } else
    if (cmd[1]=='M') {
      if (strchr("ewnsg",cmd[2])) noResponse=true;
      if (strchr("ADNPS",cmd[2])) shortResponse=true;
    } else
    if (cmd[1]=='Q') {
      if (strchr("#ewns",cmd[2])) noResponse=true;
    } else
    if (cmd[1]=='A') {
      if (strchr("W123456789+",cmd[2])) { shortResponse=true; if (timeOutMs < 1000) timeOutMs = 1000; }
    } else
    if ((cmd[1]=='F') || (cmd[1]=='f')) {
      if (strchr("+-QZHhF1234",cmd[2])) noResponse=true;
      if (strchr("Ap",cmd[2])) shortResponse=true;
    } else
    if (cmd[1]=='r') {
      if (strchr("+-PRFC<>Q1234",cmd[2])) noResponse=true;
      if (strchr("~S",cmd[2])) shortResponse=true;
    } else
    if (cmd[1] == 'R') {
      if (strchr("AEGCMS0123456789", cmd[2])) noResponse=true;
    } else
    if (cmd[1]=='S') {
      if (strchr("CLSGtgMNOPrdhoTBX",cmd[2])) shortResponse=true;
    } else
    if (cmd[1]=='L') {
      if (strchr("BNCDL!",cmd[2])) noResponse=true;
      if (strchr("o$W",cmd[2])) { shortResponse=true; if (timeOutMs < 1000) timeOutMs = 1000; }
    } else
    if (cmd[1]=='B') {
      if (strchr("+-",cmd[2])) noResponse=true;
    } else
    if (cmd[1]=='C') {
      if (strchr("S",cmd[2])) noResponse=true;
    } else
    if (cmd[1]=='h') {
      if (strchr("FC",cmd[2])) { noResponse=true; if (timeOutMs < 1000) timeOutMs = 1000; }
      if (strchr("QPR",cmd[2])) { shortResponse=true; if (timeOutMs < 300) timeOutMs = 300; }
    } else
    if (cmd[1]=='T') {
      if (strchr("QR+-SLK",cmd[2])) noResponse=true;
      if (strchr("edrn",cmd[2])) shortResponse=true;
    } else
    if (cmd[1]=='U') {
      noResponse=true; 
    } else
    if (cmd[1]=='W') {
      if (strchr("R",cmd[2])) {
        if (strchr("+-",cmd[3])) shortResponse=true; else noResponse=true; // WR+ WR- else WR
      }
      if (strchr("S",cmd[2])) shortResponse=true;  // WS
      if (strchr("0123",cmd[2])) noResponse=true;  // W0 W1 W2 W3
    } else
    if ((cmd[1]=='$') && (cmd[2]=='Q') && (cmd[3]=='Z')) {
      if (strchr("+-Z/!",cmd[4])) noResponse=true;
    }

    // override for checksum protocol
    if (cmd[0]==';') { noResponse=false; shortResponse=false; }
  }

  unsigned long timeout = millis()+(unsigned long)timeOutMs;
  if (noResponse) {
    response[0]=0;
    return true;
  } else
  if (shortResponse) {
    while ((long)(timeout - millis()) > 0) {
      if (Ser.available()) { response[Ser.readBytes(response,1)]=0; break; }
    }
    return (response[0]!=0);
  } else {
    // get full response, '#' terminated
    int responsePos=0;
    char b=0;
    while ((long)(timeout - millis()) > 0 && b != '#') {
      if (Ser.available()) {
        b=Ser.read();
        response[responsePos] = b; responsePos++; if (responsePos > 39) responsePos = 39; response[responsePos] = 0;
      }
    }
    return (response[0] != 0);
  }
}

bool command(const char* command, char* response) {
  bool success = processCommand(command, response, webTimeout);
  int l = strlen(response)-1; if (l >= 0 && response[l] == '#') response[l]=0;
  return success;
}

bool commandBlind(const char* command) {
  char response[40]="";
  return processCommand(command, response, webTimeout);
}

bool commandEcho(const char* command) {
  char response[40]="";
  char c[40]="";
  sprintf(c,":EC%s#",command);
  return processCommand(c, response, webTimeout);
}

bool commandBool(const char* command) {
  char response[40]="";
  bool success = processCommand(command,response,webTimeout);
  int l=strlen(response)-1; if (l >= 0 && response[l] == '#') response[l]=0;
  if (!success) return false;
  if (response[1] != 0) return false;
  if (response[0] == '0') return false; else return true;
}

char *commandString(const char* command) {
  static char response[40]="";
  bool success = processCommand(command,response,webTimeout);
  int l=strlen(response)-1; if (l >= 0 && response[l] == '#') response[l]=0;
  if (!success) strcpy(response,"?");
  return response;
}

char* commandErrorToStr(int e) {
  static char reply[40];
  strcpy(reply,"Error, ");
  
  switch (e) {
    case CE_NONE: strcpy(reply, L_CE_NONE); break;
    case CE_0: strcpy(reply, L_CE_0); break;
    case CE_CMD_UNKNOWN: strcat(reply, L_CE_CMD_UNKNOWN); break;
    case CE_REPLY_UNKNOWN: strcat(reply, L_CE_REPLY_UNKNOWN); break;
    case CE_PARAM_RANGE: strcat(reply, L_CE_PARAM_RANGE); break;
    case CE_PARAM_FORM: strcat(reply, L_CE_PARAM_FORM); break;
    case CE_ALIGN_FAIL: strcat(reply, L_CE_ALIGN_FAIL); break;
    case CE_ALIGN_NOT_ACTIVE: strcat(reply, L_CE_ALIGN_NOT_ACTIVE); break;
    case CE_NOT_PARKED_OR_AT_HOME: strcat(reply, L_CE_NOT_PARKED_OR_AT_HOME); break;
    case CE_PARKED: strcat(reply, L_CE_PARKED); break;
    case CE_PARK_FAILED: strcat(reply, L_CE_PARK_FAILED); break;
    case CE_NOT_PARKED: strcat(reply, L_CE_NOT_PARKED); break;
    case CE_NO_PARK_POSITION_SET: strcat(reply, L_CE_NO_PARK_POSITION_SET); break;
    case CE_GOTO_FAIL: strcat(reply, L_CE_GOTO_FAIL); break;
    case CE_LIBRARY_FULL: strcat(reply, L_CE_LIBRARY_FULL); break;
    case CE_GOTO_ERR_BELOW_HORIZON: strcat(reply, L_CE_GOTO_ERR_BELOW_HORIZON); break;
    case CE_GOTO_ERR_ABOVE_OVERHEAD: strcat(reply, L_CE_GOTO_ERR_ABOVE_OVERHEAD); break;
    case CE_SLEW_ERR_IN_STANDBY: strcat(reply, L_CE_SLEW_ERR_IN_STANDBY); break;
    case CE_SLEW_ERR_IN_PARK: strcat(reply, L_CE_SLEW_ERR_IN_PARK); break;
    case CE_GOTO_ERR_GOTO: strcat(reply, L_CE_GOTO_ERR_GOTO); break;
    case CE_GOTO_ERR_OUTSIDE_LIMITS: strcat(reply, L_CE_GOTO_ERR_OUTSIDE_LIMITS); break;
    case CE_SLEW_ERR_HARDWARE_FAULT: strcat(reply, L_CE_SLEW_ERR_HARDWARE_FAULT); break;
    case CE_MOUNT_IN_MOTION: strcat(reply, L_CE_MOUNT_IN_MOTION); break;
    case CE_GOTO_ERR_UNSPECIFIED: strcat(reply, L_CE_GOTO_ERR_UNSPECIFIED); break;
    case CE_NULL: strcpy(reply,""); break;
    default: strcat(reply,L_CE_UNK);
  }

  return reply;
}