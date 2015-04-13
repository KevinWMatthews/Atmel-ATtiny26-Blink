#ifndef __LedDriver_H
#define __LedDriver_H

void LedDriver_Setup(void);
void LedDriver_On(int pin);
void LedDriver_Off(int pin);
void LedDriver_Toggle(int pin, int interval);

#endif
