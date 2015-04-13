/*
 * Blink.c
 *
 * Created: 4/10/2015 15:33:31 PM
 *  Author: Kevin Matthews
 *
 * CPU: ATtiny26-16PU
 */

#ifndef F_CPU               /* Used by <util/delay.h> */
#define F_CPU 8000000UL     /* 8MHz internal crystal */
#endif

#include <avr/io.h>
#include <util/delay.h>
#include "BitManip.h"

#define TEST_PIN (1<<PA0)

int main(void)
{
  int delay_time = 2000;

  /* Configure pin as output */
  DDRA = TEST_PIN;

  while(1)
  {
    sbm(PORTA, TEST_PIN);
    _delay_ms(delay_time);
    cbm(PORTA, TEST_PIN);
    _delay_ms(delay_time);
  }
}
