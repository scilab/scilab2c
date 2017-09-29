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
#ifndef __ACSCH_H__
#define __ACSCH_H__
#include "types.h"

#ifdef  __cplusplus
extern "C" {
#endif

double dacschs(double x);

void dacscha(double* x, int size, double* y); 

double sacschs(float x);

void sacscha(float* x, int size, float* y); 

#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif /* !__ACSCH_H__ */

