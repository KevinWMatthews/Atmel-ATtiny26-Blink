#ifndef __BitManip_H
#define __BitManip_H

#define SBI(MEMORY, BIT) ((MEMORY) |= (1<<(BIT)))
#define CBI(MEMORY, BIT) ((MEMORY) &= ~(1<<(BIT)))

#define ifbit(MEMORY, BIT) (((MEMORY) & (1<<(BIT))) && 1)

#endif
