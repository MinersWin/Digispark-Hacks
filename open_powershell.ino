#include "DigiKeyboardDe.h"
#define KEY_LEFT_ARROW 0x50

int timer = 2000;

void setup() {
  DigiKeyboardDe.update();
  DigiKeyboardDe.sendKeyStroke(0);
  DigiKeyboardDe.delay(1000);
  DigiKeyboardDe.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboardDe.delay(timer);
  DigiKeyboardDe.print("cmd");
  DigiKeyboardDe.delay(timer);
  DigiKeyboardDe.sendKeyStroke(KEY_ENTER);
  DigiKeyboardDe.delay(timer);
  DigiKeyboardDe.print("powershell");
  DigiKeyboardDe.delay(timer);
  DigiKeyboardDe.sendKeyStroke(KEY_ENTER);
  DigiKeyboardDe.delay(timer);
  DigiKeyboardDe.sendKeyStroke(KEY_ENTER);
  DigiKeyboardDe.delay(timer);
  DigiKeyboardDe.sendKeyStroke(KEY_LEFT_ARROW);
  DigiKeyboardDe.delay(timer);
  DigiKeyboardDe.sendKeyStroke(KEY_ENTER);
}

void loop() {
}
