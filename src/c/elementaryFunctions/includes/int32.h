/* Copyright (C) 2017 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Author: Siddhesh Wani, Jorawar Singh
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
*/

#ifndef __INT32_H__
#define __INT32_H__

#include "dynlib_elementaryfunctions.h"
#include "floatComplex.h"
#include "doubleComplex.h"
#include "types.h"

#ifdef  __cplusplus
extern "C" {
#endif
/*
	int32(X) returns the signed int part of the double value
*/

EXTERN_ELEMFUNCT int32	sint32s(float in);

EXTERN_ELEMFUNCT int32	dint32s(double in);

EXTERN_ELEMFUNCT int32	u8int32s(uint8 in);

EXTERN_ELEMFUNCT int32	i8int32s(int8 in);

EXTERN_ELEMFUNCT int32	u16int32s(uint16 in);

EXTERN_ELEMFUNCT int32	i16int32s(int16 in);

EXTERN_ELEMFUNCT int32	u32int32s(uint32 in);

EXTERN_ELEMFUNCT void	sint32a(float* in, int size, int32* out);

EXTERN_ELEMFUNCT void	dint32a(double* in, int size, int32* out);

EXTERN_ELEMFUNCT void	u8int32a(uint8* in, int size, int32* out);

EXTERN_ELEMFUNCT void	i8int32a(int8* in, int size, int32* out);

EXTERN_ELEMFUNCT void	u16int32a(uint16* in, int size, int32* out);

EXTERN_ELEMFUNCT void	i16int32a(int16* in, int size, int32* out);

EXTERN_ELEMFUNCT void	u32int32a(uint32* in, int size, int32* out);

#ifdef  __cplusplus
} /* extern "C" */
#endif


#endif /* !__INT32_H__ */

