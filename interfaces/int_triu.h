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

#ifndef __INT_TRIU_H__
#define __INT_TRIU_H__


#ifdef  __cplusplus
extern "C" {
#endif

#define d0triud0(in) 		in
#define s0trius0(in) 		in
#define u80triuu80(in) 		in
#define u160triuu160(in) 	in
#define i80triui80(in) 		in
#define i160triui160(in) 	in

#define d0d0triud0(in1, in2) (in2 == 0 ? in1 : 0) 
#define s0s0trius0(in1, in2) (in2 == 0 ? in1 : 0)
#define u80u80triuu80(in1, in2) (in2 == 0 ? in1 : 0)
#define i80i80triui80(in1, in2) (in2 == 0 ? in1 : 0)
#define u160u160triuu160(in1, in2) (in2 == 0 ? in1 : 0)
#define i160i160triui160(in1, in2) (in2 == 0 ? in1 : 0)
#define u80d0triuu80(in1, in2) (in2 == 0 ? in1 : 0)
#define i80d0triui80(in1, in2) (in2 == 0 ? in1 : 0)
#define u160d0triuu160(in1, in2) (in2 == 0 ? in1 : 0)
#define i160d0triui160(in1, in2) (in2 == 0 ? in1 : 0)

#define d2triud2(in, size, out) dtriua(in, size[0], size[1], 0, out); 
#define s2trius2(in, size, out) striua(in, size[0], size[1], 0, out); 
#define u82triuu82(in, size, out) u8triua(in, size[0], size[1], 0, out); 
#define u162triuu162(in, size, out) u16triua(in, size[0], size[1], 0, out); 
#define i82triui82(in, size, out) i8triua(in, size[0], size[1], 0, out); 
#define i162triui162(in, size, out) i16triua(in, size[0], size[1], 0, out); 

#define d2d0triud2(in1, size1, in2, out) dtriua(in1, size1[0], size1[1], in2, out); 
#define s2s0trius2(in1, size1, in2, out) striua(in1, size1[0], size1[1], in2, out); 
#define u82u80triuu82(in1, size1, in2, out) u8triua(in1, size1[0], size1[1], (double)in2, out); 
#define i82i80triui82(in1, size1, in2, out) i8triua(in1, size1[0], size1[1], (double)in2, out); 
#define u162u160triuu162(in1, size1, in2, out) u16triua(in1, size1[0], size1[1], (double)in2, out); 
#define i162i160triui162(in1, size1, in2, out) i16triua(in1, size1[0], size1[1], (double)in2, out); 
#define u82d0triuu82(in1, size1, in2, out) u8triua(in1, size1[0], size1[1], in2, out); 
#define i82d0triui82(in1, size1, in2, out) i8triua(in1, size1[0], size1[1], in2, out); 
#define u162d0triuu162(in1, size1, in2, out) u16triua(in1, size1[0], size1[1], in2, out); 
#define i162d0triui162(in1, size1, in2, out) i16triua(in1, size1[0], size1[1], in2, out); 


#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif /*__INT_TRIU_H__*/
