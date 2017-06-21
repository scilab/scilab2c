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
#ifndef __BASE2DEC_H__
#define __BASE2DEC_H__


 #ifdef  __cplusplus
 extern "C" {
 #endif

double gbase2decs(char* in,int size,int base);
double dbase2decs(double in,int base);
//void ghex2deca(char* in,int size,double* out);

 #ifdef  __cplusplus 
 } /* extern "C" */
 #endif

#endif /*__BASE2DEC_H__*/
