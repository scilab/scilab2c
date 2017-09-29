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
 

#ifndef __MATRIX_H__
#define __MATRIX_H__

#include "types.h"
#include "doubleComplex.h"
#include "uint16.h"


#ifdef  __cplusplus
extern "C" {
#endif

void dmatrixa(double* , int , int , int , int , double*);
void smatrixa( float* , int , int , int , int , float*);
void u16matrixa(uint16 *, int , int , int , int ,uint16 *out);
void zmatrixa(doubleComplex *, int , int , int , int  ,doubleComplex *);


#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif /*__MATRIX_H__*/
