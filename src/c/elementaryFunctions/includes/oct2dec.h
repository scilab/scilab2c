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
#ifndef __OCT2DEC_H__
#define __OCT2DEC_H__
#include "types.h"

 #ifdef  __cplusplus
 extern "C" {
 #endif

double doct2decs(double in);
int8 i8oct2decs(int8 in);
int16 i16oct2decs(int16 in);
uint8 u8oct2decs(uint8 in);
uint16 u16oct2decs(uint16 in);

void doct2deca(double* in,int size,double* out);
void i8oct2deca(int8* in,int size,int8* out);
void i16oct2deca(int16* in,int size,int16* out);
void u8oct2deca(uint8* in,int size,uint8* out);
void u16oct2deca(uint16* in,int size,uint16* out);


 #ifdef  __cplusplus 
 } /* extern "C" */
 #endif

#endif /*__OCT2DEC_H__*/
