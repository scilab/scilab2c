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


#ifndef __INT_TRIL_H__
#define __INT_TRIL_H__


#ifdef  __cplusplus
#extern "C" {
#endif

#define d0trild0(in) 		in
#define s0trils0(in) 		in
#define u80trilu80(in) 		in
#define u160trilu160(in) 	in
#define i80trili80(in) 		in
#define i160trili160(in) 	in

#define d0d0trild0(in1, in2) (in2 == 0 ? in1 : 0) 
#define s0s0trils0(in1, in2) (in2 == 0 ? in1 : 0)
#define u80u80trilu80(in1, in2) (in2 == 0 ? in1 : 0)
#define i80i80trili80(in1, in2) (in2 == 0 ? in1 : 0)
#define u160u160trilu160(in1, in2) (in2 == 0 ? in1 : 0)
#define i160i160trili160(in1, in2) (in2 == 0 ? in1 : 0)
#define u80d0trilu80(in1, in2) (in2 == 0 ? in1 : 0)
#define i80d0trili80(in1, in2) (in2 == 0 ? in1 : 0)
#define u160d0trilu160(in1, in2) (in2 == 0 ? in1 : 0)
#define i160d0trili160(in1, in2) (in2 == 0 ? in1 : 0)

#define d2trild2(in, size, out) dtrila(in, size[0], size[1], 0, out); 
#define s2trils2(in, size, out) strila(in, size[0], size[1], 0, out); 
#define u82trilu82(in, size, out) u8trila(in, size[0], size[1], 0, out); 
#define u162trilu162(in, size, out) u16trila(in, size[0], size[1], 0, out); 
#define i82trili82(in, size, out) i8trila(in, size[0], size[1], 0, out); 
#define i162trili162(in, size, out) i16trila(in, size[0], size[1], 0, out); 

#define d2d0trild2(in1, size1, in2, out) dtrila(in1, size1[0], size1[1], in2, out); 
#define s2s0trils2(in1, size1, in2, out) strila(in1, size1[0], size1[1], in2, out); 
#define u82u80trilu82(in1, size1, in2, out) u8trila(in1, size1[0], size1[1], (double)in2, out); 
#define i82i80trili82(in1, size1, in2, out) i8trila(in1, size1[0], size1[1], (double)in2, out); 
#define u162u160trilu162(in1, size1, in2, out) u16trila(in1, size1[0], size1[1], (double)in2, out); 
#define i162i160trili162(in1, size1, in2, out) i16trila(in1, size1[0], size1[1], (double)in2, out); 
#define u82d0trilu82(in1, size1, in2, out) u8trila(in1, size1[0], size1[1], in2, out); 
#define i82d0trili82(in1, size1, in2, out) i8trila(in1, size1[0], size1[1], in2, out); 
#define u162d0trilu162(in1, size1, in2, out) u16trila(in1, size1[0], size1[1], in2, out); 
#define i162d0trili162(in1, size1, in2, out) i16trila(in1, size1[0], size1[1], in2, out); 


#ifdef  __cplusplus
#} /* extern "C" */
#endif

#endif /*__INT_TRIL_H__*/
