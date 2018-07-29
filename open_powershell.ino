#include "DigiKeyboardDe.h"
#define KEY_LEFT_ARROW 0x50

void setup() {
  DigiKeyboardDe.update();
  DigiKeyboardDe.sendKeyStroke(0);
  DigiKeyboardDe.delay(1000);
  DigiKeyboardDe.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboardDe.delay(1000);
  DigiKeyboardDe.print("cmd");
  DigiKeyboardDe.delay(1000);
  DigiKeyboardDe.sendKeyStroke(KEY_ENTER);
  DigiKeyboardDe.delay(1000);
  DigiKeyboardDe.print("powershell");
  DigiKeyboardDe.delay(1000);
  DigiKeyboardDe.sendKeyStroke(KEY_ENTER);
  DigiKeyboardDe.delay(1000);
  DigiKeyboardDe.delay(1000);
  DigiKeyboardDe.sendKeyStroke(KEY_ENTER);
  DigiKeyboardDe.delay(1000);
  DigiKeyboardDe.sendKeyStroke(KEY_LEFT_ARROW);
  DigiKeyboardDe.delay(1000);
  DigiKeyboardDe.sendKeyStroke(KEY_ENTER);
  DigiKeyboardDe.delay(1000);
}

void loop() {
}
