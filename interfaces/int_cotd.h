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
#ifndef __INT_COTD_H__
#define __INT_COTD_H__

 #ifdef  __cplusplus
 extern "C" {
 #endif

#define d2cotdd2(in,size,out)	dcotda(in,size[1],out)
#define s2cotds2(in,size,out)	scotda(in,size[1],out)
#define d0cotdd0(in)	dcotds(in)
#define s0cotds0(in)	scotds(in)

 #ifdef  __cplusplus
 } /* extern "C" */
 #endif

#endif /*__INT_COTD_H__*/
