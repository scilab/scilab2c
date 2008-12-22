
/*
 *  Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
 *  Copyright (C) 2008 - INRIA - Arnaud TORSET
 *
 *  This file must be used under the terms of the CeCILL.
 *  This source file is licensed as described in the file COPYING, which
 *  you should have received as part of this distribution.  The terms
 *  are also available at
 *  http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 *
 */

#ifndef __MAGNITUDE_H__
#define __MAGNITUDE_H__

#include "floatComplex.h"
#include "doubleComplex.h"

float smagns(float in);
float smagna(float* in, int rows, int cols);

double dmagns(double in);
double dmagna(double* in, int rows, int cols);

float cmagns(floatComplex in);
float cmagna(floatComplex* in, int rows, int cols);

double zmagns(doubleComplex in);
double zmagna(doubleComplex* in, int rows, int cols);

#endif /* __MAGNITUDE_H__*/
