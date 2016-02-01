/* Scilab2C FOSSEE IITB */

#ifndef __BITGET_H__
#define __BITGET_H__



#include "dynlib_elementaryfunctions.h"
#include "types.h"

#ifdef __cpluscplus
extern "C" {
#endif


EXTERN_ELEMFUNCT uint8 u8bitgets(uint8 value,int position);

EXTERN_ELEMFUNCT uint16 u16bitgets(uint16 value,int position);

#ifdef __cplusplus

} /*extern "C" */
#endif

#endif /* !__BITGET_H__ */
