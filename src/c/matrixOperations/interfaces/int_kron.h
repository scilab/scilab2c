/* Copyright (C) 2016 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Author: Siddhesh Wani
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
*/

#ifndef __INT_KRON_H__
#define __INT_KRON_H__


#ifdef  __cplusplus
extern "C" {
#endif

#define d0d0krond0(in1, in2) in1*in2
#define s0s0krons0(in1, in2) in1*in2

#define d0d2krond2(in1, in2, size2, out) {int i; \
								for(i=0;i < size2[0]*size2[1];i++) out[i] = in2[i]*in1;}
#define s0s2krons2(in1, in2, size2, out) {int i; \
								for(i=0;i < size2[0]*size2[1];i++) out[i] = in2[i]*in1;}

#define d2d0krond2(in1, size1, in2, out) {int i; \
								for(i=0;i < size1[0]*size1[1];i++) out[i] = in1[i]*in2;}
#define s2s0krons2(in1, in2, size2, out) {int i; \
								for(i=0;i < size2[0]*size2[1];i++) out[i] = in2[i]*in1;}

#define d2d2krond2(in1, size1, in2, size2, out) dkrona(in1, size1[0], size1[1], \
								in2, size2[0], size2[1], out);
#define s2s2krons2(in1, size1, in2, size2, out) skrona(in1, size1[0], size1[1], \
								in2, size2[0], size2[1], out);

#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif /*__INT_KRON_H__*/
