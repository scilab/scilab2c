
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

#ifndef __SQUAREDMAGNITUDE_H__
#define __SQUAREDMAGNITUDE_H__

#include "floatComplex.h"
#include "doubleComplex.h"

float ssquMagns(float in);
float ssquMagna(float* in, int rows, int cols);

double dsquMagns(double in);
double dsquMagna(double* in, int rows, int cols);

float csquMagns(floatComplex in);
float csquMagna(floatComplex* in, int rows, int cols);

double zsquMagns(doubleComplex in);
double zsquMagna(doubleComplex* in, int rows, int cols);

#endif /* __SQUAREDMAGNITUDE_H__*/
