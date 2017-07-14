/* Copyright (C) 2017 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Author: Brijesh Gupta C R
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
 */
#ifndef __INT_ERFC_H__
#define __INT_ERFC_H__

#ifdef  __cplusplus
extern "C" {
#endif



#define d0erfcd0(in1) derfcs(in1)
#define s0erfcs0(in1) serfcs(in1)
#define d2erfcd2(in1,size,out) derfca(in1,size[0],size[1],out)
#define s2erfcs2(in1,size,out) serfca(in1,size[0],size[1],out)



#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif /*__INT_ERFC_H__*/
