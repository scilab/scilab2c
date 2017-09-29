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
 

#ifndef __NNZ_H__
#define __NNZ_H__

#include "types.h"
#include "doubleComplex.h"
#include "uint16.h"

#ifdef  __cplusplus
extern "C" {
#endif

uint16 dnnza(double* , int , int);
uint16 dnnzs(double);
uint16 snnza( float* , int , int);
uint16 snnzs( float);
uint16 znnza(doubleComplex *, int , int);
uint16 znnzs(doubleComplex);


#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif /*__NNZ_H__*/
