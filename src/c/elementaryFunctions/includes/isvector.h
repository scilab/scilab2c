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

#ifndef __ISVECTOR_H__
#define __ISVECTOR_H__


#include "types.h"
#include "doubleComplex.h"
#include "floatComplex.h"

#ifdef  __cplusplus
extern "C" {
#endif

char disvectora(double* , int, int);
char disvectors(double);
char sisvectora( float* , int, int);
char sisvectors( float);
char gisvectora(char* , int, int );
char gisvectors(char);
char zisvectora(doubleComplex*, int, int);
char zisvectors(doubleComplex);

#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif
