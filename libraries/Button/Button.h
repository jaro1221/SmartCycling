/*
  Button.h
*/

#ifndef Button_h
#define Button_h

#include <Wire.h>

class Button
{
  public:
Button(unsigned int index);
	//Button(unsigned int index, unsigned int fromRange, unsigned int toRange);
	
	void Check(unsigned int value);

	bool IsChecked;
  private:
    unsigned int _Index;
};

#endif

