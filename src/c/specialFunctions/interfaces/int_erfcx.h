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
#ifndef __INT_ERFCX_H__
#define __INT_ERFCX_H__

#ifdef  __cplusplus
extern "C" {
#endif



#define d0erfcxd0(in1) derfcxs(in1)
#define s0erfcxs0(in1) serfcxs(in1)
#define d2erfcxd2(in1,size,out) derfcxa(in1,size[0],size[1],out)
#define s2erfcs2(in1,size,out) serfca(in1,size[0],size[1],out)



#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif /*__INT_ERFCX_H__*/
