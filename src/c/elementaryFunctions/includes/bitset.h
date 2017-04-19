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

#ifndef __BITSET_H__
#define __BITSET_H__



#include "dynlib_elementaryfunctions.h"
#include "types.h"

#ifdef __cplusplus
extern "C" {
#endif


EXTERN_ELEMFUNCT uint8 u8bitsets(uint8 value,int position,int bit_value);

EXTERN_ELEMFUNCT uint16 u16bitsets(uint16 value,int position,int bit_value);

#ifdef __cplusplus

} /*extern "C" */
#endif

#endif /* !__BITSET_H__ */
