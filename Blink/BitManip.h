#ifndef __BitManip_H
#define __BitManip_H

#define sbm(VAR, BITMASK) ((VAR) |= (BITMASK))    /* Set BitMask */
#define cbm(VAR, BITMASK) ((VAR) &= ~(BITMASK))   /* Clear BitMask */

#endif
