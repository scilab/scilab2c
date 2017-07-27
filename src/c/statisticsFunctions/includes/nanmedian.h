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

#ifndef __NANMEDIAN_H__
#define __NANMEDIAN_H__


#include "types.h"
#include "doubleComplex.h"
#include "floatComplex.h"
#include "int16.h"

#ifdef  __cplusplus
extern "C" {
#endif

double dnanmediana (double* , int);
void   dnanmedianrowa (double*, int , int, double*);
void   dnanmediancola (double*, int , int, double*);

float  snanmediana (float* , int);
void   snanmedianrowa (float*, int , int, float*);
void   snanmediancola (float*, int , int, float*);



#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif
