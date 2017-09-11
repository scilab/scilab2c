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

#ifndef __STRANGE_H__
#define __STRANGE_H__


#include "types.h"
#include "doubleComplex.h"
#include "floatComplex.h"
#include "uint16.h"

#ifdef  __cplusplus
extern "C" {
#endif

double dstrangea (double* , int);
void   dstrangerowa (double*, int , int, double*);
void   dstrangecola (double*, int , int, double*);

float  sstrangea (float* , int);
void   sstrangerowa (float*, int , int, float*);
void   sstrangecola (float*, int , int, float*);

uint16  u16strangea (uint16* , int);
void   u16strangerowa (uint16*, int , int, uint16*);
void   u16strangecola (uint16*, int , int, uint16*);


#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif
