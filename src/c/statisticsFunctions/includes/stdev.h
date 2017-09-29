/* Copyright (C) 2016 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Author: Abhinav Dronamraju
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
*/
 

#ifndef __STDEV_H__
#define __STDEV_H__

#include "types.h"
#include "doubleComplex.h"
#include "uint16.h"

#ifdef  __cplusplus
extern "C" {
#endif

double dstdeva(double* , int );
void   dstdevrowa(double*, int, int, double*);
void   dstdevcola(double*, int, int, double*);

float  sstdeva(float* , int );
void   sstdevrowa(float*, int, int, float*);
void   sstdevcola(float*, int, int, float*);

#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif /*__STDEV_H__*/
