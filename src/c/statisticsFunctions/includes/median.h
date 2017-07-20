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
 

#ifndef __MEDIAN_H__
#define __MEDIAN_H__

#include "types.h"
#include "doubleComplex.h"
#include "uint16.h"

#ifdef  __cplusplus
extern "C" {
#endif

double dmediana(double* , int );
void   dmedianrowa(double*, int, int, double*);
void   dmediancola(double*, int, int, double*);

float  smediana(float* , int );
void   smedianrowa(float*, int, int, float*);
void   smediancola(float*, int, int, float*);

uint16  u16mediana(uint16* , int );
void   u16medianrowa(uint16*, int, int, uint16*);
void   u16mediancola(uint16*, int, int, uint16*);

doubleComplex  zmediana(doubleComplex* , int );
void   zmedianrowa(doubleComplex*, int, int, doubleComplex*);
void   zmediancola(doubleComplex*, int, int, doubleComplex*);


#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif /*__MATRIX_H__*/
