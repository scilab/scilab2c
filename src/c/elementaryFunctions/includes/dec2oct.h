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
#ifndef __DEC2oct_H__
#define __DEC2oct_H__
#include "types.h"

 #ifdef  __cplusplus
 extern "C" {
 #endif

void ddec2octs(double in,double* out);
void i8dec2octs(int8 in,int8* out);
void i16dec2octs(int16 in,int16* out);
void u8dec2octs(uint8 in,uint8* out);
void u16dec2octs(uint16 in,uint16* out);

void ddec2octa(double* in,int size,double* out);
void i8dec2octa(int8* in,int size,int8* out);
void i16dec2octa(int16* in,int size,int16* out);
void u8dec2octa(uint8* in,int size,uint8* out);
void u16dec2octa(uint16* in,int size,uint16* out);


 #ifdef  __cplusplus 
 } /* extern "C" */
 #endif

#endif /*__DEC2oct_H__*/
