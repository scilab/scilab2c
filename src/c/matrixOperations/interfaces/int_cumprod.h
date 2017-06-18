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

#ifndef __INT_CUMPROD_H__
#define __INT_CUMPROD_H__


#ifdef  __cplusplus
extern "C" {
#endif

#define d0cumprodd0(in) in
#define s0cumprods0(in) in
#define u80cumprodu80(in) in
#define u160cumprodu160(in) in
#define i80cumprodi80(in) in
#define i160cumprodi160(in) in

#define d2cumprodd2(in1, size1, out) dcumproda(in1, size1[0], size1[1], out)
#define s2cumprods2(in1, size1, out) scumproda(in1, size1[0], size1[1], out)
#define u82cumprodu82(in1, size1, out) u8cumproda(in1, size1[0], size1[1], out)
#define u162cumprodu162(in1, size1, out) u16cumproda(in1, size1[0], size1[1], out)
#define i82cumprodi82(in1, size1, out) i8cumproda(in1, size1[0], size1[1], out)
#define i162cumprodi162(in1, size1, out) i16cumproda(in1, size1[0], size1[1], out)

#define d2g2cumprodd2(in1, size1, in2, size2, out) (in2[0]=='r') ? \
						drowcumproda(in1,size1[0],size1[1],out) : dcolumncumproda(in1,size1[0],size1[1],out)
#define s2g2cumprods2(in1, size1, in2, size2, out) (in2[0]=='r') ? \
						srowcumproda(in1,size1[0],size1[1],out) : scolumncumproda(in1,size1[0],size1[1],out)
#define u82g2cumprodu82(in1, size1, in2, size2, out) (in2[0]=='r') ? \
						u8rowcumproda(in1,size1[0],size1[1],out) : u8columncumproda(in1,size1[0],size1[1],out)
#define i82g2cumprodi82(in1, size1, in2, size2, out) (in2[0]=='r') ? \
						i8rowcumproda(in1,size1[0],size1[1],out) : i8columncumproda(in1,size1[0],size1[1],out)
#define u162g2cumprodu162(in1, size1, in2, size2, out) (in2[0]=='r') ? \
						u16rowcumproda(in1,size1[0],size1[1],out) : u16columncumproda(in1,size1[0],size1[1],out)
#define i162g2cumprodi162(in1, size1, in2, size2, out) (in2[0]=='r') ? \
						i16rowcumproda(in1,size1[0],size1[1],out) : i16columncumproda(in1,size1[0],size1[1],out)



#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif /*__INT_CUMPROD_H__*/
