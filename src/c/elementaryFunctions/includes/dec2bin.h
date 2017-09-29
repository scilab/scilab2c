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
#ifndef __DEC2BIN_H__
#define __DEC2BIN_H__
#include "types.h"

 #ifdef  __cplusplus
 extern "C" {
 #endif

void ddec2bins(double in,int n,double* out);
void i8dec2bins(int8 in,int n,int8* out);
void i16dec2bins(int16 in,int n,int16* out);
void u8dec2bins(uint8 in,int n,uint8* out);
void u16dec2bins(uint16 in,int n,uint16* out);

void ddec2bina(double* in,int size,int n,double* out);
void i8dec2bina(int8* in,int size,int n,int8* out);
void i16dec2bina(int16* in,int size,int n,int16* out);
void u8dec2bina(uint8* in,int size,int n,uint8* out);
void u16dec2bina(uint16* in,int size,int n,uint16* out);

 #ifdef  __cplusplus 
 } /* extern "C" */
 #endif

#endif /*__DEC2BIN_H__*/
