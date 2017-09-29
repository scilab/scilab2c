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

#ifndef __PMODULO_H__
#define __PMODULO_H__


#include "types.h"
#include "doubleComplex.h"
#include "floatComplex.h"
#include "int16.h"

#ifdef  __cplusplus
extern "C" {
#endif

void dpmoduloa(double*, int ,double*, double*);
double dpmodulos(double, double);

void spmoduloa(float*, int ,float*, float*);
float spmodulos(float, float);

void i16pmoduloa(int16*, int ,int16*, int16*);
int16 i16pmodulos(int16, int16);


#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif
