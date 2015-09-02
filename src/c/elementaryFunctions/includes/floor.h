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

#ifndef __FLOOR_H__
#define __FLOOR_H__

#include "dynlib_elementaryfunctions.h"
#include "floatComplex.h"
#include "doubleComplex.h"
#include "types.h"

#ifdef  __cplusplus
extern "C" {
#endif
/*
	floor(x) returns an integer matrix made of nearest rounded down integers.
*/

EXTERN_ELEMFUNCT float	sfloors(float in);

EXTERN_ELEMFUNCT double dfloors(double in);

EXTERN_ELEMFUNCT floatComplex cfloors(floatComplex in);

EXTERN_ELEMFUNCT doubleComplex zfloors(doubleComplex in);

EXTERN_ELEMFUNCT uint8	u8floors(uint8 in);

EXTERN_ELEMFUNCT int8	i8floors(int8 in);

EXTERN_ELEMFUNCT uint16	u16floors(uint16 in);

EXTERN_ELEMFUNCT int16	i16floors(int16 in);

EXTERN_ELEMFUNCT void	sfloora(float* in, int size, float* out);

EXTERN_ELEMFUNCT void	dfloora(double* in, int size, double* out);

EXTERN_ELEMFUNCT void	cfloora(floatComplex* in, int size, floatComplex* out);

EXTERN_ELEMFUNCT void	zfloora(doubleComplex* in, int size, doubleComplex* out);

EXTERN_ELEMFUNCT void	u8floora(uint8* in, int size, uint8* out);

EXTERN_ELEMFUNCT void	i8floora(int8* in, int size, int8* out);

EXTERN_ELEMFUNCT void	u16floora(uint16* in, int size, uint16* out);

EXTERN_ELEMFUNCT void	i16floora(int16* in, int size, int16* out);

#ifdef  __cplusplus
} /* extern "C" */
#endif


#endif /* !__FLOOR_H__ */

