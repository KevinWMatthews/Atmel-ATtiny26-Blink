#include "LedDriver.h"
#include <avr/io.h>
#include "BitManip.h"

void LedDriver_On(int pin)
{
  sbi(PORTA, pin);
}

void LedDriver_Off(int pin)
{
  cbi(PORTA, pin);
}

void LedDriver_Toggle(int pin, int interval)
{
  //TODO
}
