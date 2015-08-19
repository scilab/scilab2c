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

#ifndef __INT16_H__
#define __INT16_H__

#include "dynlib_elementaryfunctions.h"
#include "floatComplex.h"
#include "doubleComplex.h"
#include "types.h"

#ifdef  __cplusplus
extern "C" {
#endif
/*
	int16(X) returns the signed int part of the double value
*/

EXTERN_ELEMFUNCT int16	sint16s(float in);

EXTERN_ELEMFUNCT int16	dint16s(double in);

EXTERN_ELEMFUNCT int16	u8int16s(uint8 in);

EXTERN_ELEMFUNCT int16	i8int16s(int8 in);

EXTERN_ELEMFUNCT int16	u16int16s(uint16 in);

EXTERN_ELEMFUNCT void	sint16a(float* in, int size, int16* out);

EXTERN_ELEMFUNCT void	dint16a(double* in, int size, int16* out);

EXTERN_ELEMFUNCT void	u8int16a(uint8* in, int size, int16* out);

EXTERN_ELEMFUNCT void	i8int16a(int8* in, int size, int16* out);

EXTERN_ELEMFUNCT void	u16int16a(uint16* in, int size, int16* out);

#ifdef  __cplusplus
} /* extern "C" */
#endif


#endif /* !__INT16_H__ */

