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

#ifndef __UINT32_H__
#define __UINT32_H__

#include "dynlib_elementaryfunctions.h"
#include "floatComplex.h"
#include "doubleComplex.h"
#include "types.h"

#ifdef  __cplusplus
extern "C" {
#endif
/*
	uint32(X) returns the unsigned int part of the double value
*/

EXTERN_ELEMFUNCT uint32	suint32s(float in);

EXTERN_ELEMFUNCT uint32	duint32s(double in);

EXTERN_ELEMFUNCT uint32	u8uint32s(uint8 in);

EXTERN_ELEMFUNCT uint32	i8uint32s(int8 in);

EXTERN_ELEMFUNCT uint32 u16uint32s(uint16 in);

EXTERN_ELEMFUNCT uint32	i16uint32s(int16 in);

EXTERN_ELEMFUNCT uint32 i32uint32s(int32 in);

EXTERN_ELEMFUNCT void	suint32a(float* in, int size, uint32* out);

EXTERN_ELEMFUNCT void	duint32a(double* in, int size, uint32* out);

EXTERN_ELEMFUNCT void	u8uint32a(uint8* in, int size, uint32* out);

EXTERN_ELEMFUNCT void	i8uint32a(int8* in, int size, uint32* out);

EXTERN_ELEMFUNCT void	u16uint32a(uint16* in, int size, uint32* out);

EXTERN_ELEMFUNCT void	i16uint32a(int16* in, int size, uint32* out);

EXTERN_ELEMFUNCT void	i32uint32a(int32* in, int size, uint32* out);

#ifdef  __cplusplus
} /* extern "C" */
#endif


#endif /* !__UINT32_H__ */

