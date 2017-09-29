 /* Copyright (C) 2017 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Author: Sandeep Gupta
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
 */

#ifndef __INT_FULLRF_H__
#define __INT_FULLRF_H__

#ifdef  __cplusplus
extern "C" {
#endif

#define d2fullrfd2d2d0(in1,size,out1,out2) dfullrfa(1,in1,size[0],size[1],0,out1,out2);
#define d2d0fullrfd2d2d0(in1,size,in2,out1,out2) dfullrfa(2,in1,size[0],size[1],in2,out1,out2);

#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif /*__INT_FULLRF_H__*/

