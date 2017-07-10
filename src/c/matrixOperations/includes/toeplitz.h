 /* Copyright (C) 2017 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Author: Brijesh Gupta C R
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
 */

#ifndef __TOEPLITZ_H__
#define __TOEPLITZ_H__
#include "types.h"
#include "doubleComplex.h"
#include "floatComplex.h"

#ifdef  __cplusplus
extern "C" {
#endif

void dtoeplitza(double* inp1,int size1,double* inp2,int size2,double* oup);
void u8toeplitza(uint8* inp1,int size1,uint8* inp2,int size2,uint8* oup);
void u16toeplitza(uint16* inp1,int size1,uint16* inp2,int size2,uint16* oup);
void ztoeplitza(doubleComplex* inp1,int size1,doubleComplex* inp2,int size2,doubleComplex* oup);
void gtoeplitza(char* inp1,int size1,char* inp2,int size2,char* oup);
void stoeplitza(float* inp1,int size1,float* inp2,int size2,float* oup);
void ctoeplitza(floatComplex* inp1,int size1,floatComplex* inp2,int size2,floatComplex* oup);
void i8toeplitza(int8* inp1,int size1,int8* inp2,int size2,int8* oup);
void i16toeplitza(int16* inp1,int size1,int16* inp2,int size2,int16* oup);

#ifdef  __cplusplus 
} /* extern "C" */
#endif

#endif /*__TOEPLITZ_H__*/
