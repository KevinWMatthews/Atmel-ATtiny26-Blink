extern "C"
{
  #include "LedDriver.h"
}

#include "CppUTest/TestHarness.h"
#include "CppUTestExt/MockSupport.h"
#include "Mock_LedDriver_ATtiny26.h"

// ATtiny26 pins are memory-mapped
// Use this, although we may create wrapper functions later?
int DDRA = 0;
int PORTA = 0;

//*** Mock all wiringATtiny26 functions that are used by the test and production code ***//
void LedDriver_Setup(void)
{
  DDRA = 0;
  DDRA |= (1<<LED1);
  DDRA |= (1<<LED2);
  DDRA |= (1<<LED3);
  DDRA |= (1<<LED4);
  DDRA |= (1<<LED5);
  PORTA = 0;
}

void LedDriver_On(int led)
{
  PORTA |= (1<<led);
}

void LedDriver_Off(int led)
{
  PORTA &= ~(1<<led);
}

//*** Spy on ATtiny26's "memory" ***/
int LedDriverSpy_DDRA(int bit)
{
  return ((1<<bit) & DDRA) && 1;
}

int LedDriverSpy_PORTA(int bit)
{
  return ((1<<bit) & PORTA) && 1;
}
