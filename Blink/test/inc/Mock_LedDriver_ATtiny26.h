#ifndef Mock_LedDriver_ATtiny26_H
#define Mock_LedDriver_ATtiny26_H

#define PA0 7     // From <avi/io.h>

#define LED1 PA0  // From LedDriver_ATtiny26.h

int LedDriverSpy_DDRA(void);
int LedDriverSpy_PORTA(void);

#endif
