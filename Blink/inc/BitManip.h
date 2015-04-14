#ifndef __BitManip_H
#define __BitManip_H

#define SBI(MEMORY, BIT) ((MEMORY) |= (1<<(BIT)))
#define CBI(MEMORY, BIT) ((MEMORY) &= ~(1<<(BIT)))

#define sbm(VAR, BITMASK) ((VAR) |= (BITMASK))    /* Set BitMask */
#define cbm(VAR, BITMASK) ((VAR) &= ~(BITMASK))   /* Clear BitMask */

#define ifbit(MEMORY, BIT) (((MEMORY) & (1<<(BIT))) && 1)

#endif
