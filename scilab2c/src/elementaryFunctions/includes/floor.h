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

#include "floatComplex.h"
#include "doubleComplex.h"

/*
	floor(x) returns an integer matrix made of nearest rounded down integers.
*/

float	sfloors(float in);

double dfloors(double in);

floatComplex cfloors(floatComplex in);

doubleComplex zfloors(doubleComplex in);

void	sfloora(float* in, int size, float* out);

void	dfloora(double* in, int size, double* out);

void	cfloora(floatComplex* in, int size, floatComplex* out);

void	zfloora(doubleComplex* in, int size, doubleComplex* out);

#endif /* !__FLOOR_H__ */

