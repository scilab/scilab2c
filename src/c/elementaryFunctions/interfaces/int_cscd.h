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
#ifndef __INT_CSCD_H__
#define __INT_CSCD_H__

 #ifdef  __cplusplus
 extern "C" {
 #endif

#define d2cscdd2(in,size,out)	dcscda(in,size[1],out)
#define d0cscdd0(in)	dcscds(in)
#define s2cscds2(in,size,out)	scscda(in,size[1],out)
#define s0cscds0(in)	scscds(in)
#define z0cscdz0(in)	zcscds(in)
#define z2cscdz2(in,size,out)	zcscds(in,size[1],out)
#define c0cscdc0(in)	ccscds(in)
#define c2cscdc2(in,size,out)	ccscds(in,size[1],out)

 #ifdef  __cplusplus
 } /* extern "C" */
 #endif

#endif /*__INT_CSCD_H__*/
