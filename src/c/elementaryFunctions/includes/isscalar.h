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

#ifndef __ISSCALAR_H__
#define __ISSCALAR_H__


#include "types.h"
#include "doubleComplex.h"
#include "floatComplex.h"

#ifdef  __cplusplus
extern "C" {
#endif

char disscalara(double* , int);
char disscalars(double);
char sisscalara( float* , int);
char sisscalars( float);
char gisscalara(char* , int);
char gisscalars(char);
char zisscalara(doubleComplex*, int);
char zisscalars(doubleComplex);

#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif
