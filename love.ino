/*
 * Author: MK Rill
 * Date:2017/12/06
 * IDE V1.6.9
 * Function:
 */
#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup()                                                                                     
{
  lcd.begin(16,2);
  lcd.print("  Hello ");
  lcd.setCursor(0,1);
  lcd.print("  Nerd ");
  delay(2000);
  lcd.clear();
}
void loop()
{ 
  lcd.clear();                   //clear display
  lcd.print("Guess What...");            //display "Hum=%"
  lcd.setCursor(0,1) ;           //Display position
  lcd.print("I love you!");            //display"Temp="
  lcd.write(0xDF);              //Display custom characters '°'
  lcd.print(":)");
  delay(500);                   //After 500ms ,the screen will be refreshed
}

