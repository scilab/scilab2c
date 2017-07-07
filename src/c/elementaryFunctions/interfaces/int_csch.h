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
#ifndef __INT_CSCH_H__
#define __INT_CSCH_H__

 #ifdef  __cplusplus
 extern "C" {
 #endif

#define d2cschd2(in,size,out)	dcscha(in,size[1],out)
#define d0cschd0(in)	dcschs(in)
#define s2cschs2(in,size,out)	scscha(in,size[1],out)
#define s0cschs0(in)	scschs(in)
#define z0cschz0(in)	zcschs(in)
#define z2cschz2(in,size,out)	zcschs(in,size[1],out)
#define c0cschc0(in)	ccschs(in)
#define c2cschc2(in,size,out)	ccschs(in,size[1],out)

 #ifdef  __cplusplus
 } /* extern "C" */
 #endif

#endif /*__INT_CSC_H__*/
