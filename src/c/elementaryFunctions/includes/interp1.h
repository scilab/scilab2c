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
#ifndef __INTERP1_H__
#define __INTERP1_H__
#include "types.h"

 #ifdef  __cplusplus
 extern "C" {
 #endif

double  dinterp1s(double* x, int size, double* y,int size2, double xin, char* method,int size3);
//void i8interp1s(int8 in,char* out);
//void i16interp1s(int16 in,char* out);
//void u8interp1s(uint8 in,char* out);
//void u16interp1s(uint16 in,char* out);

//void dinterp1a(double* in,int size,char* out);
//void i8interp1a(int8* in,int size,char* out);
//void i16interp1a(int16* in,int size,char* out);
//void u8interp1a(uint8* in,int size,char* out);
//void u16interp1a(uint16* in,int size,char* out);



 #ifdef  __cplusplus 
 } /* extern "C" */
 #endif

#endif /*__INTERP1_H__*/
