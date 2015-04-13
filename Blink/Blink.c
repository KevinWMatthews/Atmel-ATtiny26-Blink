/*
 * Blink.c
 *
 * Created: 4/10/2015 15:33:31 PM
 *  Author: Kevin Matthews
 *
 * CPU: ATtiny26-16PU
 */


#include <avr/io.h>
#include "BitManip.h"

#define TEST_PIN (1<<PA0)

int main(void)
{
  /* Configure pin as output */
  DDRA = TEST_PIN;

  sbm(PORTA, TEST_PIN);

  while(1)
  {
  }
}
