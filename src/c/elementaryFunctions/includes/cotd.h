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
#ifndef __COTD_H__
#define __COTD_H__


 #ifdef  __cplusplus
 extern "C" {
 #endif

void dcotda(double* in,int size,double* out);
double dcotds(double in);
void scotda(float* in,int size,float* out);
float scotds(float in);

 #ifdef  __cplusplus 
 } /* extern "C" */
 #endif

#endif /*__COTD_H__*/
