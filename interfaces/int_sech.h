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
#ifndef __INT_SECH_H__
#define __INT_SECH_H__

 #ifdef  __cplusplus
 extern "C" {
 #endif

#define d2sechd2(in,size,out)	dsecha(in,size[1],out)
#define s2sechs2(in,size,out)	ssecha(in,size[1],out)
#define d0sechd0(in)	dsechs(in)
#define s0sechs0(in)	ssechs(in)
#define z0sechz0(in)	zsechs(in)
#define z2sechz2(in,size,out)	zsechs(in,size[1],out)
#define c0sechc0(in)	csechs(in)
#define c2sechc2(in,size,out)	csechs(in,size[1],out)

 #ifdef  __cplusplus
 } /* extern "C" */
 #endif

#endif /*__INT_SECH_H__*/
