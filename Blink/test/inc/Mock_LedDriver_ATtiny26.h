#ifndef Mock_LedDriver_ATtiny26_H
#define Mock_LedDriver_ATtiny26_H

// From <avi/io.h>
#define PA3 3
#define PA4 4
#define PA5 5
#define PA6 6
#define PA7 7

// From (for?) LedDriver_ATtiny26.h
#define LED1 PA3
#define LED2 PA4
#define LED3 PA5
#define LED4 PA6
#define LED5 PA7

int LedDriverSpy_DDRA(int bit);
int LedDriverSpy_PORTA(void);

#endif
