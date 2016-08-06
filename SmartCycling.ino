#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include "Menu.h"
#include "Button.h"
//#include "Startup.cpp"

LiquidCrystal_I2C lcd(0x27, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);  // Ustawienie adresu ukladu na 0x27
//Menu menu;
//Button leftButton(1);
//Button rightButton(2);
//Button selectButton(3);
//Button backButton(4);
//Button hornButton(5);
//Button ataPlusButton(6);
//Button ataMinusButton(7);
//Button epdButton(8);

void setup()  
{
  lcd.begin(16,2);
  lcd.backlight();
  pinMode(A0, INPUT_PULLUP);
}

void loop() 
{
  int analog = analogRead(A0);
  lcd.print(analog);
  //menu.Print(lcd);
  delay(100);
  lcd.clear();
}
