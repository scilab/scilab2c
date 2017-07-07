/* Copyright (C) 2016 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Author: Mushir
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
*/

#ifndef __BITOR_H__
#define __BITOR_H__



#include "dynlib_elementaryfunctions.h"
#include "types.h"

#ifdef __cplusplus
extern "C" {
#endif
/* bitor returns the logical OR operation
 12 = 00001100 (In Binary)
25 = 00011001 (In Binary)

Bitwise OR Operation of 12 and 25
  00001100
| 00011001
  ________
  00011101  = 29 (In decimal) */

EXTERN_ELEMFUNCT uint8 u8bitors(uint8 in1,uint8 in2);

EXTERN_ELEMFUNCT void u8bitora(uint8* in1,uint8* in2,int size,uint8* out);

EXTERN_ELEMFUNCT uint16 u16bitors(uint16 in1,uint16 in2);

EXTERN_ELEMFUNCT void u16bitora(uint16* in1,uint16* in2,int size,uint16* out);


#ifdef __cplusplus

} /*extern "C" */
#endif

#endif /* !__BITOR_H__ */
