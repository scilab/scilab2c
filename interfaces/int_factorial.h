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
#ifndef __INT_FACTORIAL_H__
#define __INT_FACTORIAL_H__

 #ifdef  __cplusplus
 extern "C" {
 #endif

#define d0factoriald0(in)	dfactorials(in)
#define s0factorials0(in)	sfactorials(in)

#define d2factoriald2(in,size,out) dfactoriala(in,size[0]*size[1],out)
#define s2factorials2(in,size,out) sfactoriala(in,size[0]*size[1],out)



 #ifdef  __cplusplus
 } /* extern "C" */
 #endif

#endif /*__INT_FACTORIAL_H__*/
