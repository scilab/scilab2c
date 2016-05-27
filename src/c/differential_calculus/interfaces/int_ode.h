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

#ifndef __INT_ODE_H__
#define __INT_ODE_H__

#ifdef  __cplusplus
extern "C" {
#endif

#define d0d0d0g2oded0(in1, in2, in3, in4) dodes(in1, in2, in3, in4, 1, 1.0e-2,\
											 1.0e-2, 1.0e-6)

#define d2d0d0f0oded2(in1, size1, in2, in3, func_name, out) dodea(in1, in2, in3, func_name, \
							size1[1], 1.0e-2, 1.0e-2, 1.0e-6, size1, out)

#ifdef  __cplusplus
} /* extern "C" */
#endif


#endif /*__INT_ODE_H__*/