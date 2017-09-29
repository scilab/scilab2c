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
 

#ifndef __MAD_H__
#define __MAD_H__

#include "types.h"
#include "doubleComplex.h"
#include "uint16.h"

#ifdef  __cplusplus
extern "C" {
#endif

double dmada(double* , int );
void   dmadrowa(double*, int, int, double*);
void   dmadcola(double*, int, int, double*);

float  smada(float* , int );
void   smadrowa(float*, int, int, float*);
void   smadcola(float*, int, int, float*);

doubleComplex  zmada(doubleComplex* , int );
void   zmadrowa(doubleComplex*, int, int, doubleComplex*);
void   zmadcola(doubleComplex*, int, int, doubleComplex*);


#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif /*__MAD_H__*/
