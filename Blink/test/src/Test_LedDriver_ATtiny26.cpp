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
  LONGS_EQUAL(1, LedDriverSpy_DDRA(LED1));

  LONGS_EQUAL(0, LedDriverSpy_PORTA());
}

// TEST(Test_LedDriver_ATtiny26, TurnLedOn)
// {
//   LedDriver_On(LED1);
//   LONGS_EQUAL(PA0, LedDriverSpy_PORTA());
// }

// TEST(Test_LedDriver_ATtiny26, TurnLedOff)
// {
//   // Turn the LED  on first so we're sure that it goes off
//   LedDriver_On(LED1);
//   LedDriver_Off(LED1);
//   LONGS_EQUAL(0, LedDriverSpy_PORTA());
// }
