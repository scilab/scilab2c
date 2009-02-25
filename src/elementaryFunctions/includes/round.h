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

#ifndef __ROUND_H__
#define __ROUND_H__

#include "floatComplex.h"
#include "doubleComplex.h"

/*
	round(x) rounds the elements of x to the nearest integers.
*/

float	srounds(float in);

double drounds(double in);

floatComplex crounds(floatComplex in);

doubleComplex zrounds(doubleComplex in);

void	srounda(float* in, int size, float* out);

void	drounda(double* in, int size, double* out);

void	crounda(floatComplex* in, int size, floatComplex* out);

void	zrounda(doubleComplex* in, int size, doubleComplex* out);

#endif /* !__ROUND_H__ */

