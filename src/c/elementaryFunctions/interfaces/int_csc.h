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
#ifndef __INT_CSC_H__
#define __INT_CSC_H__

 #ifdef  __cplusplus
 extern "C" {
 #endif

#define d2cscd2(in,size,out)	dcsca(in,size[1],out)
#define d0cscd0(in)	dcscs(in)
#define s2cscs2(in,size,out)	scsca(in,size[1],out)
#define s0cscs0(in)	scscs(in)
#define z2cscz2(in,size,out)	zcsca(in,size[1],out)
#define z0cscz0(in)	zcscs(in)
#define c2cscc2(in,size,out)	ccsca(in,size[1],out)
#define c0cscc0(in)	ccscs(in)

 #ifdef  __cplusplus
 } /* extern "C" */
 #endif

#endif /*__INT_CSC_H__*/
