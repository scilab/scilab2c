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

#ifndef __ACOT_H__
#define __ACOT_H__
#include "types.h"
#include "floatComplex.h"
#include "doubleComplex.h"

#ifdef  __cplusplus
extern "C" {
#endif

double dacots(double x);

void dacota(double* x, int size, double* y); 

float sacots(float x);

void sacota(float* x, int size, float* y); 

floatComplex cacots(floatComplex x);

void cacota(floatComplex* x, int size, floatComplex* y);

doubleComplex zacots(doubleComplex x);

void zacota(doubleComplex* x, int size, doubleComplex* y);

#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif /* !__ACOT_H__ */

