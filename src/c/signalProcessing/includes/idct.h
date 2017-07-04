/* Copyright (C) 2016 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Author: Ukasha Noor
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
*/


#ifndef __IDCT_H__
#define __IDCT_H__

#include <math.h>
#include "types.h"
#include "doubleComplex.h"
#include "addition.h"

#ifdef  __cplusplus
extern "C" {
#endif

void didcta(double *in,int row,int col,double *out);

void sidcta(float *in,int row,int col,float *out);

void zidcta(doubleComplex *in,int row,int col,doubleComplex *out);

void cidcta(floatComplex *in,int row,int col,floatComplex *out);

#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif
