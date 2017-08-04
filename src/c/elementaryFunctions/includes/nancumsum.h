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
 

#ifndef __NANCUMSUM_H__
#define __NANCUMSUM_H__

#include "types.h"
#include "doubleComplex.h"
#include "uint16.h"

#ifdef  __cplusplus
extern "C" {
#endif

void   dnancumsuma(double* , int , double*);
void   dnancumsumrowa(double*, int, int, double*);
void   dnancumsumcola(double*, int, int, double*);

void   snancumsuma(float* , int, float* );
void   snancumsumrowa(float*, int, int, float*);
void   snancumsumcola(float*, int, int, float*);

void   znancumsuma(doubleComplex* , int , doubleComplex*);
void   znancumsumrowa(doubleComplex*, int, int, doubleComplex*);
void   znancumsumcola(doubleComplex*, int, int, doubleComplex*);


#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif /*__NANCUMSUM_H__*/
