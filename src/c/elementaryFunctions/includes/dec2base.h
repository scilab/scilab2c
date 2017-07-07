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
#ifndef __DEC2BASE_H__
#define __DEC2BASE_H__
#include "types.h"

 #ifdef  __cplusplus
 extern "C" {
 #endif

void ddec2bases(double in,int base,int n,char* out);
void ddec2basea(double* in,int size,int base,int n,char* out);
void sdec2bases(float in,int base,int n,char* out);
void sdec2basea(float* in,int size,int base,int n,char* out);

 #ifdef  __cplusplus 
 } /* extern "C" */
 #endif

#endif /*__DEC2BASE_H__*/
