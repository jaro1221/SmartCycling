#include "Menu.h"

Menu::Menu()
{
	_maxIndex = 10;
	_Index = 0;
}
void Menu::Print(LiquidCrystal_I2C lcd)
{
	lcd.clear();
	switch(_Index)
	{
		case 0:
			{
				lcd.setCursor(0,0);
				lcd.print("");
				lcd.setCursor(0,1);
				lcd.print("[SPD]");
				break;
			}
		case 1:
			{
				lcd.setCursor(0,0);
				lcd.print("");
				lcd.setCursor(0,1);
				lcd.print("[AVR]");
				break;
			}
		case 2:
			{
				lcd.setCursor(0,0);
				lcd.print("");
				lcd.setCursor(0,1);
				lcd.print("[DST]");
				break;
			}
				
		case 3:
			{
				lcd.setCursor(0,0);
				lcd.print("");
				lcd.setCursor(0,1);
				lcd.print("[RID]");
				break;
			}
		case 4:
			{
				lcd.setCursor(0,0);
				lcd.print("");
				lcd.setCursor(0,1);
				lcd.print("[TMP]");
				break;
			}
		case 5:
			{
				lcd.setCursor(0,0);
				lcd.print("");
				lcd.setCursor(0,1);
				lcd.print("[TIM]");
				break;
			}
		case 6:
			{
				lcd.setCursor(0,0);
				lcd.print("");
				lcd.setCursor(0,1);
				lcd.print("[LGH]");
				break;
			}
		case 7:
			{
				lcd.setCursor(0,0);
				lcd.print("");
				lcd.setCursor(0,1);
				lcd.print("[ALR]");
				break;
			}
		case 8:
			{
				lcd.setCursor(0,0);
				lcd.print("");
				lcd.setCursor(0,1);
				lcd.print("[ATA]");
				break;
			}
		case 9:
			{
				lcd.setCursor(0,0);
				lcd.print("");
				lcd.setCursor(0,1);
				lcd.print("[EPD]");
				break;
			}
		case 10:
			{
				lcd.setCursor(0,0);
				lcd.print("");
				lcd.setCursor(0,1);
				lcd.print("[SET]");
				break;
			}
		default:
			{
				lcd.setCursor(5,0);
				lcd.print("err!");
				break;
			}
			

	}
}
void Menu::IndexMinus()
{
	if(_Index != 0)
	{
		_Index = _Index - 1;
	}
}
void Menu::IndexPlus()
{
	if(_Index != _maxIndex)
	{
		_Index = _Index + 1;
	}
}
