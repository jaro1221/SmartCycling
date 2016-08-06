/*
  Menu.h
*/

#ifndef Menu_h
#define Menu_h

//#include "WProgram.h"
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

class Menu
{
  public:
    Menu();
    void Print(LiquidCrystal_I2C lcd);
	void IndexMinus();
	void IndexPlus();
  private:
	unsigned int _maxIndex;
    int _Index;
};

#endif

