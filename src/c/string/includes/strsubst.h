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
#ifndef __STRSUBST_H__
#define __STRSUBST_H__


 #ifdef  __cplusplus
 extern "C" {
 #endif

void gstrsubsta(char* str, int size, char* search, int size2, char* rep, int size3, char* flagmain,int size4, char* out);
//void gstrsubsta(char* str, int size, char* search, int size2, char* rep, int size3, char* out,int size5);

 #ifdef  __cplusplus 
 } /* extern "C" */
 #endif

#endif /*__STRSUBST_H__*/
