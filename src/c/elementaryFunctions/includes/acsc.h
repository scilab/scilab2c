// Copyright (C) 2017 - IIT Bombay - FOSSEE
//
// This file must be used under the terms of the CeCILL.
// This source file is licensed as described in the file COPYING, which
// you should have received as part of this distribution.  The terms
// are also available at
// http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
// Organization: FOSSEE, IIT Bombay
// Author: Ashish Kamble
// Email: toolbox@scilab.in
#ifndef __ACSC_H__
#define __ACSC_H__
#include "types.h"
#include "floatComplex.h"
#include "doubleComplex.h"

#ifdef  __cplusplus
extern "C" {
#endif

double dacscs(double x);

void dacsca(double* x, int size, double* y); 

float sacscs(float x);

void sacsca(float* x, int size, float* y); 

floatComplex cacscs(floatComplex x);

void cacsca(floatComplex* x, int size, floatComplex* y); 

doubleComplex zacscs(doubleComplex x);

void zacsca(doubleComplex* x, int size, doubleComplex* y); 



#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif /* !__ACSC_H__ */

