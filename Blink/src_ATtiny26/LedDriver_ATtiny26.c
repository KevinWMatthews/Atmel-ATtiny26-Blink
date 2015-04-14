#include "LedDriver.h"
#include "LedDriverWiring_ATtiny26.h"
#include <avr/io.h>
#include "BitManip.h"

void LedDriver_Setup(void)
{
  DDRA = 0;
  SBI(DDRA, LED1);
  SBI(DDRA, LED2);
  SBI(DDRA, LED3);
  SBI(DDRA, LED4);
  SBI(DDRA, LED5);
  PORTA = 0;
}

void LedDriver_On(int led)
{
  SBI(PORTA, led);
}

void LedDriver_Off(int led)
{
  CBI(PORTA, led);
}

void LedDriver_Toggle(int led, int interval)
{
  //TODO
}
