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

#ifndef __CEIL_H__
#define __CEIL_H__

#include "floatComplex.h"
#include "doubleComplex.h"

/*
	ceil(x) returns an integer matrix made of rounded up elements 
*/

float	sceils(float in);

double dceils(double in);

floatComplex cceils(floatComplex in);

doubleComplex zceils(doubleComplex in);

void	sceila(float* in, int size, float* out);

void	dceila(double* in, int size, double* out);

void	cceila(floatComplex* in, int size, floatComplex* out);

void	zceila(doubleComplex* in, int size, doubleComplex* out);

#endif /* !__CEIL_H__ */

