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
  mock().expectOneCall("LedDriver_Setup");

  LedDriver_Setup();
  LONGS_EQUAL(PA0, LedDriverSpy_DDRA());
  LONGS_EQUAL(0, LedDriverSpy_PORTA());
  mock().checkExpectations();
}

TEST(Test_LedDriver_ATtiny26, TurnLedOn)
{
  mock().expectOneCall("LedDriver_On");

  LedDriver_On(LED1);
  LONGS_EQUAL(PA0, LedDriverSpy_PORTA());
  mock().checkExpectations();
}


// TEST(Test_LedDriver_ATtiny26, Setup)
// {
//   mock().expectOneCall("wiringATtiny26_Setup");
//         // .andReturnValue(0);  //0 for success
//   mock().expectOneCall("pinMode_Gpio1")
//         .withParameter("p1", LED)
//         .withParameter("p2", OUTPUT);

//   LedDriver_Setup();
//   mock().checkExpectations();
// }

// TEST(Test_LedDriver_ATtiny26, ToggleLed)
// {
//   int ledOnTime = 500, ledOffTime = 250;

//   mock().expectOneCall("setPin_Gpio1")
//         .withCallOrder(1)
//         .withParameter("p1", LED);
//   mock().expectOneCall("delay")
//         .withCallOrder(2)
//         .withParameter("p1", ledOnTime);
//   mock().expectOneCall("clearPin_Gpio1")
//         .withCallOrder(3)
//         .withParameter("p1", LED);
//   mock().expectOneCall("delay")
//         .withCallOrder(4)
//         .withParameter("p1", ledOffTime);

//   LedDriver_ToggleLed(ledOnTime, ledOffTime);
//   mock().checkExpectations();
// }
