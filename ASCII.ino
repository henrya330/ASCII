#include<LiquidCrystal.h>
LiquidCrystal lcd(7,8,9,10,11,12);
void setup()
{
lcd.begin(16 , 2);
lcd.clear();
}
void loop()
{
  int count=33;
  char ascii=0x00+33;    //Starting from 34th
                         // Character
  while(count!=235)
  {
    lcd.setCursor(0, 0);
    lcd.print("DECIMAL = ");
    lcd.print(count);
    lcd.setCursor(0 , 1);
    lcd.print("ASCII = ");
    lcd.print(ascii);
    count++;
    ascii++;
    delay(1000);
    lcd.clear();
  }
}
