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
#ifndef __BIN2DEC_H__
#define __BIN2DEC_H__
#include "types.h"

#ifdef  __cplusplus
extern "C" {
#endif

long double dbin2decs(long double in);
int8 i8bin2decs(int8 in);
//int16 i16bin2decs(int16 in);
uint8 u8bin2decs(uint8 in);
uint16 u16bin2decs(uint16 in);

void dbin2deca(double* in,int size,double* out);
void i8bin2deca(int8* in,int size,int8* out);
//void i16bin2deca(int16* in,int size,int16* out);
void u8bin2deca(uint8* in,int size,uint8* out);
void u16bin2deca(uint16* in,int size,uint16* out);


 #ifdef  __cplusplus 
 } /* extern "C" */
 #endif

#endif /*__BIN2DEC_H__*/
