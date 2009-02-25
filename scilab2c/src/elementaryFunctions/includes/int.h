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

#include "floatComplex.h"
#include "doubleComplex.h"

/*
	int(X) returns the integer part of the real matrix X. Same as fix.
*/

float	sints(float in);

double dints(double in);

floatComplex cints(floatComplex in);

doubleComplex zints(doubleComplex in);

void	sinta(float* in, int size, float* out);

void	dinta(double* in, int size, double* out);

void	cinta(floatComplex* in, int size, floatComplex* out);

void	zinta(doubleComplex* in, int size, doubleComplex* out);

#endif /* !__INT_H__ */

