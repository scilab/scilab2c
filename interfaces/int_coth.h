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
#ifndef __INT_COTH_H__
#define __INT_COTH_H__

 #ifdef  __cplusplus
 extern "C" {
 #endif

#define d2cothd2(in,size,out)	dcotha(in,size[1],out)
#define s2coths2(in,size,out)	scotha(in,size[1],out)
#define d0cothd0(in)	dcoths(in)
#define s0coths0(in)	scoths(in)
#define z0cothz0(in)	zcoths(in)
#define z2cothz2(in,size,out)	zcoths(in,size[1],out)
#define c0cothc0(in)	ccoths(in)
#define c2cothc2(in,size,out)	ccoths(in,size[1],out)

 #ifdef  __cplusplus
 } /* extern "C" */
 #endif

#endif /*__INT_COTH_H__*/
