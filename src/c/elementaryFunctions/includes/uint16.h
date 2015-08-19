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

#ifndef __UINT16_H__
#define __UINT16_H__

#include "dynlib_elementaryfunctions.h"
#include "floatComplex.h"
#include "doubleComplex.h"
#include "types.h"

#ifdef  __cplusplus
extern "C" {
#endif
/*
	uint16(X) returns the signed int part of the double value
*/

EXTERN_ELEMFUNCT uint16	suint16s(float in);

EXTERN_ELEMFUNCT uint16	duint16s(double in);

EXTERN_ELEMFUNCT uint16	u8uint16s(uint8 in);

EXTERN_ELEMFUNCT uint16	i8uint16s(int8 in);

EXTERN_ELEMFUNCT uint16	i16uint16s(int16 in);

EXTERN_ELEMFUNCT void	suint16a(float* in, int size, uint16* out);

EXTERN_ELEMFUNCT void	duint16a(double* in, int size, uint16* out);

EXTERN_ELEMFUNCT void	u8uint16a(uint8* in, int size, uint16* out);

EXTERN_ELEMFUNCT void	i8uint16a(int8* in, int size, uint16* out);

EXTERN_ELEMFUNCT void	i16uint16a(int16* in, int size, uint16* out);

#ifdef  __cplusplus
} /* extern "C" */
#endif


#endif /* !__UINT16_H__ */

