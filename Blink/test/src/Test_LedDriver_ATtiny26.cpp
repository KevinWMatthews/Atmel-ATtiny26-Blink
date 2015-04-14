extern "C"
{
  #include "LedDriver.h"        // Code under test
}

#include "CppUTest/TestHarness.h"
#include "CppUTestExt/MockSupport.h"
#include "Test_LedDriver_ATtiny26.h"
#include "Mock_LedDriver_ATtiny26.h"

TEST_GROUP(Test_LedDriver_ATtiny26)
{
  void setup()
  {
    LedDriver_Setup();
  }

  void teardown()
  {
    mock().clear();
  }
};

//*** The Tests! ***//
TEST(Test_LedDriver_ATtiny26, Setup)
{
  LedDriver_Setup();
  LONGS_EQUAL(0b11111000, LedDriverSpy_DDRA());

  LONGS_EQUAL(0, LedDriverSpy_PORTA());
}

// Overtest my mock because it's hard-wired right now
TEST(Test_LedDriver_ATtiny26, TurnLedOn)
{
  LedDriver_On(LED1);
  LONGS_EQUAL(1, LedDriverSpy_PORTAbit(LED1));

  LedDriver_On(LED2);
  LONGS_EQUAL(1, LedDriverSpy_PORTAbit(LED2));

  LedDriver_On(LED3);
  LONGS_EQUAL(1, LedDriverSpy_PORTAbit(LED3));

  LedDriver_On(LED4);
  LONGS_EQUAL(1, LedDriverSpy_PORTAbit(LED4));

  LedDriver_On(LED5);
  LONGS_EQUAL(1, LedDriverSpy_PORTAbit(LED5));
}

// Overtest the mock right now
TEST(Test_LedDriver_ATtiny26, TurnLedOff)
{
  // Turn the LED  on first so we're sure that it goes off
  LedDriver_On(LED1);
  LedDriver_On(LED2);
  LedDriver_On(LED3);
  LedDriver_On(LED4);
  LedDriver_On(LED5);

  LedDriver_Off(LED3);
  LONGS_EQUAL(0b11011000, LedDriverSpy_PORTA());
}
