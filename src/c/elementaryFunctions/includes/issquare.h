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

#ifndef __ISSQUARE_H__
#define __ISSQUARE_H__


#include "types.h"
#include "doubleComplex.h"
#include "floatComplex.h"

#ifdef  __cplusplus
extern "C" {
#endif

char dissquarea(double* , int, int);
char dissquares(double);
char sissquarea( float* , int, int);
char sissquares( float);
char gissquarea(char* , int, int);
char gissquares(char);
char zissquarea(doubleComplex*, int, int);
char zissquares(doubleComplex);

#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif
