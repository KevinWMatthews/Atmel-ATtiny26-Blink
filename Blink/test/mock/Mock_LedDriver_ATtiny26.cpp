extern "C"
{
  #include "LedDriver.h"
  #include "BitManip.h"
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

//*** Spy on ATtiny26's "memory" ***/
int LedDriverSpy_DDRA(int bit)
{
  return ifbit(DDRA, bit);
}

int LedDriverSpy_PORTA(int bit)
{
  return ifbit(PORTA, bit);
}
