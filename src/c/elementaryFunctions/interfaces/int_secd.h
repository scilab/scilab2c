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
#ifndef __INT_SECD_H__
#define __INT_SECD_H__

 #ifdef  __cplusplus
 extern "C" {
 #endif

#define d2secdd2(in,size,out)	dsecda(in,size[1],out)
#define d0secdd0(in)	dsecds(in)
#define s2secds2(in,size,out)	ssecda(in,size[1],out)
#define s0secds0(in)	ssecds(in)

 #ifdef  __cplusplus
 } /* extern "C" */
 #endif

#endif /*__INT_SECD_H__*/
