#include "DigiKeyboardDe.h"
#define KEY_LEFT_ARROW 0x50

int timer = 3000;

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
  DigiKeyboardDe.print("ipconfig /release");
  DigiKeyboardDe.delay(1000);
  DigiKeyboardDe.sendKeyStroke(KEY_ENTER);
  DigiKeyboardDe.delay(timer);
  DigiKeyboardDe.print("ipconfig /renew");
  DigiKeyboardDe.delay(1000);
  DigiKeyboardDe.sendKeyStroke(KEY_ENTER);
  DigiKeyboardDe.delay(timer);
  DigiKeyboardDe.print("arp -d *");
  DigiKeyboardDe.delay(1000);
  DigiKeyboardDe.sendKeyStroke(KEY_ENTER);
  DigiKeyboardDe.delay(timer);
  DigiKeyboardDe.print("nbtstat -R");
  DigiKeyboardDe.delay(1000);
  DigiKeyboardDe.sendKeyStroke(KEY_ENTER);
  DigiKeyboardDe.delay(timer);
  DigiKeyboardDe.print("nbtstat -RR");
  DigiKeyboardDe.delay(1000);
  DigiKeyboardDe.sendKeyStroke(KEY_ENTER);
  DigiKeyboardDe.delay(timer);
  DigiKeyboardDe.print("ipconfig /flushdns");
  DigiKeyboardDe.delay(1000);
  DigiKeyboardDe.sendKeyStroke(KEY_ENTER);
  DigiKeyboardDe.delay(timer);
  DigiKeyboardDe.print("ipconfig /registerdns");
  DigiKeyboardDe.delay(1000);
  DigiKeyboardDe.sendKeyStroke(KEY_ENTER);
  DigiKeyboardDe.delay(1000);
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
