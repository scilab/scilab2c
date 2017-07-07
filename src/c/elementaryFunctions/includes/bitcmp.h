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

#ifndef __BITCMP_H__
#define __BITCMP_H__



#include "dynlib_elementaryfunctions.h"
#include "types.h"

#ifdef __cplusplus
extern "C" {
#endif
/* bitcmp returns the complement
35=00100011 (In Binary)

Bitwise complement Operation of 35
~ 00100011 
  ________
  11011100  = 220 (In decimal)
*/

EXTERN_ELEMFUNCT uint8 u8bitcmps(uint8 in1,uint8 in2);

EXTERN_ELEMFUNCT void u8bitcmpa(uint8* in1,uint8 in2,int size,uint8* out);

EXTERN_ELEMFUNCT uint16 u16bitcmps(uint16 in1,uint16 in2);

EXTERN_ELEMFUNCT void u16bitcmpa(uint16* in1,uint16 in2,int size,uint16* out);



#ifdef __cplusplus

} /*extern "C" */
#endif

#endif /* !__BITCMP_H__ */
