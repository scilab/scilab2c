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
#ifndef __INT_SCALING_H__
#define __INT_SCALING_H__

#ifdef  __cplusplus
extern "C" {
#endif



#define d2d0d2scalingd2(in1, size1, in2, in3, size2, out)  		dscalinga(in1, size1[0], size1[1], in2, in3, size2[0]*size2[1], out)
#define s2s0s2scalings2(in1, size1, in2, in3, size2, out)  		sscalinga(in1, size1[0], size1[1], in2, in3, size2[0]*size2[1], out)
#define s2d0s2scalings2(in1, size1, in2, in3, size2, out)  		sscalinga(in1, size1[0], size1[1], in2, in3, size2[0]*size2[1], out)
#define z2z0z2scalingz2(in1, size1, in2, in3, size2, out)  		zscalinga(in1, size1[0], size1[1], in2, in3, size2[0]*size2[1], out)
#define z2d0d2scalingz2(in1, size1, in2, in3, size2, out)  		zscalinga(in1, size1[0], size1[1], in2, in3, size2[0]*size2[1], out)
#define z2z0d2scalingz2(in1, size1, in2, in3, size2, out)  		zscalinga(in1, size1[0], size1[1], in2, in3, size2[0]*size2[1], out)
#define z2d0z2scalingz2(in1, size1, in2, in3, size2, out)  		zscalinga(in1, size1[0], size1[1], in2, in3, size2[0]*size2[1], out)



#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif /*__INT_SCALING_H__*/
