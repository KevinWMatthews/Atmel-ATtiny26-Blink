extern "C"
{
  #include "LedDriver.h"        // Code under test
  // #include "wiringATtiny26.h"    // This is mocked
  // #include "HwSetupATtiny26.h"   // Supporting definitions
}

#include "CppUTest/TestHarness.h"
#include "CppUTestExt/MockSupport.h"
#include "Test_LedDriver_ATtiny26.h"

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
  FAIL("Tests wired properly!");
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
