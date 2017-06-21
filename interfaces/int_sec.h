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
#ifndef __INT_SEC_H__
#define __INT_SEC_H__

 #ifdef  __cplusplus
 extern "C" {
 #endif

#define d2secd2(in,size,out)	dseca(in,size[1],out)
#define d0secd0(in)	dsecs(in)
#define s2secs2(in,size,out)	sseca(in,size[1],out)
#define s0secs0(in)	ssecs(in)

#define z2secz2(in,size,out)	zseca(in,size[1],out)
#define z0secz0(in)	zsecs(in)
#define c2secc2(in,size,out)	cseca(in,size[1],out)
#define c0secc0(in)	csecs(in)


 #ifdef  __cplusplus
 } /* extern "C" */
 #endif

#endif /*__INT_SEC__*/
