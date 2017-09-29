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

#ifndef __ISROW_H__
#define __ISROW_H__


#include "types.h"
#include "doubleComplex.h"
#include "floatComplex.h"
#include "uint16.h"

#ifdef  __cplusplus
extern "C" {
#endif

char disrowa(double* , int);
char disrows(double);
char sisrowa( float* , int);
char sisrows( float);
char gisrowa(char* , int);
char gisrows(char);
char zisrowa(doubleComplex*, int);
char zisrows(doubleComplex);
char u16isrowa(uint16*, int);
char u16isrows(uint16);

#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif
