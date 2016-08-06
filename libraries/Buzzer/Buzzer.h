/*
  Button.h
*/

#ifndef Button_h
#define Button_h

#include <Wire.h>

class Button
{
  public:
    Button(int index);
	bool IsChecked();
	void Function();
  private:
    unsigned int _Index;
};

#endif

