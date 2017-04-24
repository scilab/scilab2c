/*
 *  Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
 *  Copyright (C) 2006-2008 - INRIA - Arnaud Torset
 *  Author - Shamik Guha
 *  This file must be used under the terms of the CeCILL.
 *  This source file is licensed as described in the file COPYING, which
 *  you should have received as part of this distribution.  The terms
 *  are also available at
 *  http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 *
 */

#ifndef __GET_FLOAT_H__
#define __GET_FLOAT_H__

#include "dynlib_elementaryfunctions.h"
#include "floatComplex.h"
#include "doubleComplex.h"
#include "types.h"

#ifdef  __cplusplus
extern "C" {
#endif
/*
	float(X) returns the unsigned char part of the double value
*/

EXTERN_ELEMFUNCT float	sfloats(float in);

EXTERN_ELEMFUNCT float dfloats(double in);

EXTERN_ELEMFUNCT float	i8floats(int8 in);

EXTERN_ELEMFUNCT float	u16floats(uint16 in);

EXTERN_ELEMFUNCT float	i16floats(int16 in);

EXTERN_ELEMFUNCT void	sfloata(float* in, int size, float* out);

EXTERN_ELEMFUNCT void	dfloata(double* in, int size, float* out);

EXTERN_ELEMFUNCT void	i8floata(int8* in, int size, float* out);

EXTERN_ELEMFUNCT void	u16floata(uint16* in, int size, float* out);

EXTERN_ELEMFUNCT void	i16floata(int16* in, int size, float* out);

#ifdef  __cplusplus
} /* extern "C" */
#endif


#endif /* !__GET_FLOAT_H__ */

