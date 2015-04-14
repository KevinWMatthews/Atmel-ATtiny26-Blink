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
#include "LedDriver.h"
#include "LedDriverWiring_ATtiny26.h"

int main(void)
{
  int delay_time = 200;

  /* Configure pin as output */
  LedDriver_Setup();

  while(1)
  {
    LedDriver_On(LED1);
    _delay_ms(delay_time);
    LedDriver_On(LED2);
    _delay_ms(delay_time);
    LedDriver_On(LED3);
    _delay_ms(delay_time);
    LedDriver_On(LED4);
    _delay_ms(delay_time);
    LedDriver_On(LED5);
    _delay_ms(delay_time);

    LedDriver_Off(LED1);
    _delay_ms(delay_time);
    LedDriver_Off(LED2);
    _delay_ms(delay_time);
    LedDriver_Off(LED3);
    _delay_ms(delay_time);
    LedDriver_Off(LED4);
    _delay_ms(delay_time);
    LedDriver_Off(LED5);
    _delay_ms(delay_time);
  }
}
