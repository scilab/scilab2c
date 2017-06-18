/* Copyright (C) 2016 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Author: Shamik Guha
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
 */
#ifndef __FACTORIAL_H__
#define __FACTORIAL_H__
#include "types.h"

#ifdef  __cplusplus
extern "C" {
#endif

double dfactorials(double in);
//int8 i8factorials(int8 in);
//int16 i16factorials(int16 in);
//uint8 u8factorials(uint8 in);
//uint16 u16factorials(uint16 in);

void dfactoriala(double* in,int size,double* out);
//void i8factoriala(int8* in,int size,int8* out);
//void i16factoriala(int16* in,int size,int16* out);
//void u8factoriala(uint8* in,int size,uint8* out);
//void u16factoriala(uint16* in,int size,uint16* out);


 #ifdef  __cplusplus 
 } /* extern "C" */
 #endif

#endif /*__FACTORIAL_H__*/
