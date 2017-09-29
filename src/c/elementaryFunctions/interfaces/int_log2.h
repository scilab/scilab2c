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
#ifndef __INT_LOG2_H__
#define __INT_LOG2_H__

#ifdef  __cplusplus
extern "C" {
#endif



#define d0log2d0(in1)  				dlog2s(in1)
#define d2log2d2(in1, size1, out)  		dlog2a(in1,size1[0]*size1[1], out)
#define s0log2s0(in1)  				slog2s(in1, in2)
#define s2log2s2(in1, size1, out)  		slog2a(in1,size1[0]*size1[1], out)
#define z0log2z0(in1)  				zlog2s(in1, in2)
#define z2log2z2(in1, size1, out)  		zlog2a(in1,size1[0]*size1[1], out)


#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif /*__INT_LOG2_H__*/
