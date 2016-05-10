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


#ifndef __INT_CUMSUM_H__
#define __INT_CUMSUM_H__


#ifdef  __cplusplus
#extern "C" {
#endif

#define d0cumsumd0(in) 		in
#define s0cumsums0(in) 		in
#define u80cumsumu80(in) 	in
#define u160cumsumu160(in) 	in
#define i80cumsumi80(in) 	in
#define i160cumsumi160(in) 	in

#define d2cumsumd2(in1, size1, out) 	dcumsuma(in1, size1[0], size1[1], out)
#define s2cumsums2(in1, size1, out) 	scumsuma(in1, size1[0], size1[1], out)
#define u82cumsumu82(in1, size1, out) 	u8cumsuma(in1, size1[0], size1[1], out)
#define u162cumsumu162(in1, size1, out)	u16cumsuma(in1, size1[0], size1[1], out)
#define i82cumsumi82(in1, size1, out) 	i8cumsuma(in1, size1[0], size1[1], out)
#define i162cumsumi162(in1, size1, out) i16cumsuma(in1, size1[0], size1[1], out)

#define d2g2cumsumd2(in1, size1, in2, size2, out) (in2[0]=='r') ? \
						drowcumsuma(in1,size1[0],size1[1],out) : dcolumncumsuma(in1,size1[0],size1[1],out)
#define s2g2cumsums2(in1, size1, in2, size2, out) (in2[0]=='r') ? \
						srowcumsuma(in1,size1[0],size1[1],out) : scolumncumsuma(in1,size1[0],size1[1],out)
#define u82g2cumsumu82(in1, size1, in2, size2, out) (in2[0]=='r') ? \
						u8rowcumsuma(in1,size1[0],size1[1],out) : u8columncumsuma(in1,size1[0],size1[1],out)
#define i82g2cumsumi82(in1, size1, in2, size2, out) (in2[0]=='r') ? \
						i8rowcumsuma(in1,size1[0],size1[1],out) : i8columncumsuma(in1,size1[0],size1[1],out)
#define u162g2cumsumu162(in1, size1, in2, size2, out) (in2[0]=='r') ? \
						u16rowcumsuma(in1,size1[0],size1[1],out) : u16columncumsuma(in1,size1[0],size1[1],out)
#define i162g2cumsumi162(in1, size1, in2, size2, out) (in2[0]=='r') ? \
						i16rowcumsuma(in1,size1[0],size1[1],out) : i16columncumsuma(in1,size1[0],size1[1],out)



#ifdef  __cplusplus
#} /* extern "C" */
#endif

#endif /*__INT_CUMSUM_H__*/
