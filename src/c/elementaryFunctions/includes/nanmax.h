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
void   dnanmaxrowa (double*, int , int, double*);
void   dnanmaxcola (double*, int , int, double*);

float snanmaxa (float* , int);
void   snanmaxrowa (float*, int , int, float*);
void   snanmaxcola (float*, int , int, float*);



#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif
