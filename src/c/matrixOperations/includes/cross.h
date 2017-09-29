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

#ifndef __CROSS_H__
#define __CROSS_H__
#include "types.h"
#include "doubleComplex.h"
#include "floatComplex.h"

#ifdef  __cplusplus
extern "C" {
#endif

void dcrossa (double* inp1, int size1_r, int size1_c, double* inp2, int size2_r, int size2_c ,double* oup);
void zcrossa (doubleComplex* inp1, int size1_r, int size1_c, doubleComplex* inp2, int size2_r, int size2_c ,doubleComplex* oup);
void ccrossa (floatComplex* inp1, int size1_r, int size1_c, floatComplex* inp2, int size2_r, int size2_c ,floatComplex* oup);
void scrossa (float* inp1, int size1_r, int size1_c, float* inp2, int size2_r, int size2_c ,float* oup);
void u8crossa (uint8* inp1, int size1_r, int size1_c, uint8* inp2, int size2_r, int size2_c ,uint8* oup);
void u16crossa (uint16* inp1, int size1_r, int size1_c, uint16* inp2, int size2_r, int size2_c ,uint16* oup);
void i8crossa (int8* inp1, int size1_r, int size1_c, int8* inp2, int size2_r, int size2_c ,int8* oup);
void i16crossa (int16* inp1, int size1_r, int size1_c, int16* inp2, int size2_r, int size2_c ,int16* oup);


#ifdef  __cplusplus 
} /* extern "C" */
#endif

#endif /*__CROSS_H__*/
