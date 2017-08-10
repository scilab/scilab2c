 /* Copyright (C) 2017 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Author: Brijesh Gupta C R
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
 */

#ifndef __SIND_H__
#define __SIND_H__

#include "dynlib_elementaryfunctions.h"
#include "floatComplex.h"
#include "doubleComplex.h"
#include "types.h"

#ifdef  __cplusplus
extern "C" {
#endif

double	       dsinds(double x);
float	       ssinds(float x);
void dsinda(double* x, int size, double* y);
void ssinda(float* x, int size, double* y);


#ifdef  __cplusplus
} /* extern "C" */
#endif


#endif /* !__SIND_H__ */

