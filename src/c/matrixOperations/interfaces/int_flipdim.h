// Copyright (C) 2016 - IIT Bombay - FOSSEE
//
// This file must be used under the terms of the CeCILL.
// This source file is licensed as described in the file COPYING, which
// you should have received as part of this distribution.  The terms
// are also available at
// http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
// Author: Siddhesh Wani
// Organization: FOSSEE, IIT Bombay
// Email: toolbox@scilab.in


#ifndef __INT_FLIPDIM_H__
#define __INT_FLIPDIM_H__


#ifdef  __cplusplus
#extern "C" {
#endif

#define d0d0flipdimd0(in1, in2)			in1
#define s0s0flipdims0(in1, in2) 		in1
#define u80u80flipdimu80(in1, in2) 		in1
#define i80i80flipdimi80(in1, in2) 		in1
#define u160u160flipdimu160(in1, in2) 	in1
#define i160i160flipdimi160(in1, in2) 	in1
#define u80d0flipdimu80(in1, in2) 		in1
#define i80d0flipdimi80(in1, in2) 		in1
#define u160d0flipdimu160(in1, in2) 	in1
#define i160d0flipdimi160(in1, in2) 	in1

#define d0d0d0flipdimd0(in1, in2, in3)			in1
#define s0s0s0flipdims0(in1, in2, in3)	 		in1
#define u80u80u80flipdimu80(in1, in2, in3) 		in1
#define i80i80i80flipdimi80(in1, in2, in3) 		in1
#define u160u160u160flipdimu160(in1, in2, in3) 	in1
#define i160i160i160flipdimi160(in1, in2, in3) 	in1
#define u80d0d0flipdimu80(in1, in2, in3) 		in1
#define i80d0d0flipdimi80(in1, in2, in3) 		in1
#define u160d0d0flipdimu160(in1, in2, in3) 		in1
#define i160d0d0flipdimi160(in1, in2, in3) 		in1


#define d2d0flipdimd2(in1, size1, in2, out) dflipdima (in1, size1[0], size1[1], \
							in2, 1, out);

#define s2s0flipdims2(in1, size1, in2, out) sflipdima (in1, size1[0], size1[1], \
							in2, 1, out);

#define u82u80flipdimu82(in1, size1, in2, out) u8flipdima (in1, size1[0], size1[1], \
							in2, 1, out);

#define i82i80flipdimi82(in1, size1, in2, out) i8flipdima (in1, size1[0], size1[1], \
							in2, 1, out);

#define u162u160flipdimu162(in1, size1, in2, out) u16flipdima (in1, size1[0], size1[1], \
							in2, 1, out);

#define i162i160flipdimi162(in1, size1, in2, out) i16flipdima (in1, size1[0], size1[1], \
							in2, 1, out);

#define u82d0flipdimu82(in1, size1, in2, out) u8flipdima (in1, size1[0], size1[1], \
							in2, 1, out);

#define i82d0flipdimi82(in1, size1, in2, out) i8flipdima (in1, size1[0], size1[1], \
							in2, 1, out);

#define u162d0flipdimu162(in1, size1, in2, out) u16flipdima (in1, size1[0], size1[1], \
							in2, 1, out);

#define i162d0flipdimi162(in1, size1, in2, out) i16flipdima (in1, size1[0], size1[1], \
							in2, 1, out);

#define d2d0d0flipdimd2(in1, size1, in2, in3, out) dflipdima(in1, size1[0], size1[1], \
							in2, in3, out);

#define s2s0s0flipdims2(in1, size1, in2, in3, out) sflipdima(in1, size1[0], size1[1], \
							in2, in3, out);

#define u82u80u80flipdimu82(in1, size1, in2, in3, out) u8flipdima(in1, size1[0], size1[1], \
							in2, in3, out);

#define i82i80i80flipdimi82(in1, size1, in2, in3, out) i8flipdima(in1, size1[0], size1[1], \
							in2, in3, out);

#define u162u160u160flipdimu162(in1, size1, in2, in3, out) u16flipdima(in1, size1[0], size1[1], \
							in2, in3, out);

#define i162i160i160flipdimi162(in1, size1, in2, in3, out) i16flipdima(in1, size1[0], size1[1], \
							in2, in3, out);

#define u82d0d0flipdimu82(in1, size1, in2, in3, out) u8flipdima(in1, size1[0], size1[1], \
							in2, in3, out);

#define i82d0d0flipdimi82(in1, size1, in2, in3, out) i8flipdima(in1, size1[0], size1[1], \
							in2, in3, out);

#define u162d0d0flipdimu162(in1, size1, in2, in3, out) u16flipdima(in1, size1[0], size1[1], \
							in2, in3, out);

#define i162d0d0flipdimi162(in1, size1, in2, in3, out) i16flipdima(in1, size1[0], size1[1], \
							in2, in3, out);


#ifdef  __cplusplus
#} /* extern "C" */
#endif

#endif /*__INT_FLIPDIM_H__*/
