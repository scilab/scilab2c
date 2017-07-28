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

#ifndef __NANMAX_H__
#define __NANMAX_H__


#include "types.h"
#include "doubleComplex.h"
#include "floatComplex.h"
#include "int16.h"

#ifdef  __cplusplus
extern "C" {
#endif

double dnanmaxa (double* , int);
double dnanmax1a (double* , int, int , double*);
double dnanmax2a (double* , int, double*);
void   dnanmaxrowa (double*, int , int, double*, double*);
void   dnanmaxcola (double*, int , int, double*, double*);
void   dnanmaxrow1a (double*, int , int, double*);
void   dnanmaxcol1a (double*, int , int, double*);

float snanmaxa (float* , int);
float snanmax1a (float* , int, int , float*);
float snanmax2a (float* , int, float*);
void   snanmaxrowa (float*, int , int, float*, float*);
void   snanmaxcola (float*, int , int, float*, float*);
void   snanmaxrow1a (float*, int , int, float*);
void   snanmaxcol1a (float*, int , int, float*);



#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif
