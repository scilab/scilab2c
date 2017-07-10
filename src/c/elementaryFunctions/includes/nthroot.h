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

#ifndef __NTHROOT_H__
#define __NTHROOT_H__


#include "types.h"
#include "doubleComplex.h"
#include "floatComplex.h"
#include "uint16.h"

#ifdef  __cplusplus
extern "C" {
#endif

void dnthroota(double* , int ,int ,  double*, int , int, double*);
void dnthroot1a(double*, int , int, double, double*);
double dnthroots(double, double);
void snthroota(float* , int ,int ,  float*, int , int, double*);
void snthroot1a(float*, int , int, float, double*);
double snthroots(float, float);

#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif
