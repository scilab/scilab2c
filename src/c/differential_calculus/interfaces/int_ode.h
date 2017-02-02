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

#define d0d0d0fn0oded0(in1, in2, in3, func_name) dodes(in1, in2, in3, \
					func_name, "rkf",1, 1.0e-2, 1.0e-2, 1.0e-6, NULL)

#define d2d0d0fn0oded2(in1, size1, in2, in3, func_name, out) dodea(in1, \
					in2, in3, func_name, "rkf",size1[1], 1.0e-2, 1.0e-2, \
					1.0e-6, size1, out)

#define d0d0d2fn0oded2(in1, in2, in3, size3, func_name, out) dodea(in1, in2, \
					in3, func_name, "rkf", 1, 1.0e-2, 1.0e-2, 1.0e-6, size3, out)

#define d2d0d2fn0oded2(in1, size1, in2, in3, size3, func_name, out) dodea(in1, \
					in2, in3, func_name, "rkf",size1[1], 1.0e-2, 1.0e-2, \
					1.0e-6, size1, out)

#define g2d0d0d0fn0oded0(solvertype, typesize, in1, in2, in3, func_name) dodes(in1, in2, in3, \
					func_name, solvertype, 1, 1.0e-2, 1.0e-2, 1.0e-6, NULL)

#define g2d2d0d0fn0oded2(solvertype, typesize, in1, size1, in2, in3, func_name, out) \
					dodea(in1, in2, in3, func_name, solvertype, size1[1], \
					1.0e-2, 1.0e-2, 1.0e-6, size1, out)

#define g2d0d0d2fn0oded2(solvertype, typesize, in1, in2, in3, size3, func_name, out) \
					dodea(in1, in2, in3, func_name, solvertype,1, 1.0e-2, 1.0e-2, \
					1.0e-6, size3, out)

#define g2d2d0d2fn0oded2(solvertype, typesize, in1, size1, in2, in3, size3, func_name, out) dodea(in1, \
					in2, in3, func_name, solvertype, size1[1], 1.0e-2, 1.0e-2, \
					1.0e-6, size1, out)

#define d0d0d0d0d0fn0oded0(in1, in2, in3, in4, in5, func_name) \
					dodes(in1, in2, in3, func_name, "rkf",1, in5, in4, 1.0e-6, NULL)

#define d2d0d0d0d0fn0oded2(in1, size1, in2, in3, in4, in5, func_name, out) \
					dodea(in1, in2, in3, func_name, "rkf", size1[1], in5, in4, \
					1.0e-6, size1, out)

#define d0d0d2d0d0fn0oded2(in1, in2, in3, size3, in4, in5, func_name, out) \
					dodea(in1, in2, in3, func_name, "rkf", 1, in5, in4, 1.0e-6, size3, out)

#define d2d0d2d0d0fn0oded2(in1, size1, in2, in3, size3, in4, in5, func_name, out) \
					dodea(in1, in2, in3, func_name, "rkf", size1[1], in5, in4, \
					1.0e-6, size1, out)

#ifdef  __cplusplus
} /* extern "C" */
#endif


#endif /*__INT_ODE_H__*/