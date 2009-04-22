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

#ifndef __INT_H__
#define __INT_H__

#include "dynlib_elementaryfunctions.h"
#include "floatComplex.h"
#include "doubleComplex.h"

#ifdef  __cplusplus
extern "C" {
#endif
/*
	int(X) returns the integer part of the real matrix X. Same as fix.
*/

EXTERN_ELEMFUNCT float	sints(float in);

EXTERN_ELEMFUNCT double dints(double in);

EXTERN_ELEMFUNCT floatComplex cints(floatComplex in);

EXTERN_ELEMFUNCT doubleComplex zints(doubleComplex in);

EXTERN_ELEMFUNCT void	sinta(float* in, int size, float* out);

EXTERN_ELEMFUNCT void	dinta(double* in, int size, double* out);

EXTERN_ELEMFUNCT void	cinta(floatComplex* in, int size, floatComplex* out);

EXTERN_ELEMFUNCT void	zinta(doubleComplex* in, int size, doubleComplex* out);

#ifdef  __cplusplus
} /* extern "C" */
#endif


#endif /* !__INT_H__ */

