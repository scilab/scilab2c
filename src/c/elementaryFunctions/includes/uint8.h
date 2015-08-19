/*
 *  Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
 *  Copyright (C) 2006-2008 - INRIA - Arnaud Torset
 *
 *  This file must be used under the terms of the CeCILL.
 *  This source file is licensed as described in the file COPYING, which
 *  you should have received as part of this distribution.  The terms
 *  are also available at
 *  http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 *
 */

#ifndef __UINT8_H__
#define __UINT8_H__

#include "dynlib_elementaryfunctions.h"
#include "floatComplex.h"
#include "doubleComplex.h"
#include "types.h"

#ifdef  __cplusplus
extern "C" {
#endif
/*
	uint8(X) returns the unsigned char part of the double value
*/

EXTERN_ELEMFUNCT uint8	suint8s(float in);

EXTERN_ELEMFUNCT uint8 duint8s(double in);

EXTERN_ELEMFUNCT uint8	i8uint8s(int8 in);

EXTERN_ELEMFUNCT uint8	u16uint8s(uint16 in);

EXTERN_ELEMFUNCT uint8	i16uint8s(int16 in);

EXTERN_ELEMFUNCT void	suint8a(float* in, int size, uint8* out);

EXTERN_ELEMFUNCT void	duint8a(double* in, int size, uint8* out);

EXTERN_ELEMFUNCT void	i8uint8a(int8* in, int size, uint8* out);

EXTERN_ELEMFUNCT void	u16uint8a(uint16* in, int size, uint8* out);

EXTERN_ELEMFUNCT void	i16uint8a(int16* in, int size, uint8* out);

#ifdef  __cplusplus
} /* extern "C" */
#endif


#endif /* !__UINT8_H__ */

