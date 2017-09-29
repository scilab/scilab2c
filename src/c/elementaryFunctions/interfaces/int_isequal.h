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
#ifndef __INT_ISEQUAL_H__
#define __INT_ISEQUAL_H__

#ifdef  __cplusplus
extern "C" {
#endif



#define d0d0isequalg0(in1,in2) disequals(in1,in2)
#define d2d2isequalg0(in1, s1, in2, s2) disequala(in1, s1[0], s1[1], in2, s2[0], s2[1])
#define s0s0isequalg0(in1,in2) sisequals(in1,in2)
#define s2s2isequalg0(in1, s1, in2, s2) sisequala(in1, s1[0], s1[1], in2, s2[0], s2[1])
#define z0z0isequalg0(in1,in2) zisequals(in1,in2)
#define z2z2isequalg0(in1, s1, in2, s2) zisequala(in1, s1[0], s1[1], in2, s2[0], s2[1])
#define u160u160isequalg0(in1,in2) u16isequals(in1,in2)
#define u162u162isequalg0(in1, s1, in2, s2) u16isequala(in1, s1[0], s1[1], in2, s2[0], s2[1])


#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif /*__INT_ISEQUAL_H__*/
