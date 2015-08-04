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

#ifndef __INT8_H__
#define __INT8_H__

#include "dynlib_elementaryfunctions.h"
#include "floatComplex.h"
#include "doubleComplex.h"
#include "types.h"

#ifdef  __cplusplus
extern "C" {
#endif
/*
	int8(X) returns the signed char part of the double value
*/

EXTERN_ELEMFUNCT int8	sint8s(float in);

EXTERN_ELEMFUNCT int8 dint8s(double in);

EXTERN_ELEMFUNCT void	sint8a(float* in, int size, int8* out);

EXTERN_ELEMFUNCT void	dint8a(double* in, int size, int8* out);

#ifdef  __cplusplus
} /* extern "C" */
#endif


#endif /* !__INT8_H__ */

