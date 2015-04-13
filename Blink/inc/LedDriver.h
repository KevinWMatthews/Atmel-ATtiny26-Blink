#ifndef __LedDriver_H
#define __LedDriver_H

void LedDriver_Setup(void);
void LedDriver_On(int led);
void LedDriver_Off(int led);
void LedDriver_Toggle(int led, int interval);

#endif
