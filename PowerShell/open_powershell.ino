#include "DigiKeyboard.h"
#define KEY_LEFT_ARROW 0x50

int timer = 2000;

void setup() {
  DigiKeyboard.update();
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(timer);
  DigiKeyboard.print("cmd");
  DigiKeyboard.delay(timer);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(timer);
  DigiKeyboard.print("powershell");
  DigiKeyboard.delay(timer);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(timer);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(timer);
  DigiKeyboard.sendKeyStroke(KEY_LEFT_ARROW);
  DigiKeyboard.delay(timer);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
}

void loop() {
}
