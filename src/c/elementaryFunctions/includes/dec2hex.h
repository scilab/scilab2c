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
#ifndef __DEC2HEX_H__
#define __DEC2HEX_H__
#include "types.h"

 #ifdef  __cplusplus
 extern "C" {
 #endif

void ddec2hexs(double in,char* out);
void i8dec2hexs(int8 in,char* out);
void i16dec2hexs(int16 in,char* out);
void u8dec2hexs(uint8 in,char* out);
void u16dec2hexs(uint16 in,char* out);

void ddec2hexa(double* in,int size,char* out);
void i8dec2hexa(int8* in,int size,char* out);
void i16dec2hexa(int16* in,int size,char* out);
void u8dec2hexa(uint8* in,int size,char* out);
void u16dec2hexa(uint16* in,int size,char* out);



 #ifdef  __cplusplus 
 } /* extern "C" */
 #endif

#endif /*__DEC2HEX_H__*/
