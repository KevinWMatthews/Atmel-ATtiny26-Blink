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
  DDRA = PA0;
  PORTA = 0;
}

void LedDriver_On(int led)
{
  PORTA = led;
}

void LedDriver_Off(int led)
{
  PORTA = 0;
}

// void pinMode_Gpio1(int pin, gpioMode mode)
// {
//   mock().actualCall("pinMode_Gpio1")
//         .withParameter("p1", pin)
//         .withParameter("p2", mode);
// }

// void setPin_Gpio1(int pin)
// {
//   mock().actualCall("setPin_Gpio1")
//         .withParameter("p1", pin);
// }

// void clearPin_Gpio1(int pin)
// {
//   mock().actualCall("clearPin_Gpio1")
//         .withParameter("p1", pin);
// }

// void delay(int n)
// {
//   mock().actualCall("delay")
//         .withParameter("p1", n);
// }

//*** Spy on ATtiny26's "memory" ***/
int LedDriverSpy_DDRA(void)
{
  return DDRA;
}

int LedDriverSpy_PORTA(void)
{
  return PORTA;
}
