/* Scilab2C FOSSEE IITB */

#ifndef __BITSET_H__
#define __BITSET_H__



#include "dynlib_elementaryfunctions.h"
#include "types.h"

#ifdef __cpluscplus
extern "C" {
#endif


EXTERN_ELEMFUNCT uint8 u8bitsets(uint8 value,int position,int bit_value);

EXTERN_ELEMFUNCT uint16 u16bitsets(uint16 value,int position,int bit_value);

#ifdef __cplusplus

} /*extern "C" */
#endif

#endif /* !__BITSET_H__ */
