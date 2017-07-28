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
 

#ifndef __NANSUM_H__
#define __NANSUM_H__

#include "types.h"
#include "doubleComplex.h"
#include "uint16.h"

#ifdef  __cplusplus
extern "C" {
#endif

double dnansuma(double* , int );
void   dnansumrowa(double*, int, int, double*);
void   dnansumcola(double*, int, int, double*);

float  snansuma(float* , int );
void   snansumrowa(float*, int, int, float*);
void   snansumcola(float*, int, int, float*);

doubleComplex  znansuma(doubleComplex* , int );
void   znansumrowa(doubleComplex*, int, int, doubleComplex*);
void   znansumcola(doubleComplex*, int, int, doubleComplex*);


#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif /*__MATRIX_H__*/
