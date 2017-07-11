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
#ifndef __INT_CROSS_H__
#define __INT_CROSS_H__

#ifdef  __cplusplus
extern "C" {
#endif



#define d2d2crossd2(in1,size1,in2,size2,out) dcrossa(in1,size1[0],size1[1],in2,size2[0],size2[1],out)
#define z2z2crossz2(in1,size1,in2,size2,out) zcrossa(in1,size1[0],size1[1],in2,size2[0],size2[1],out)
#define c2c2crossc2(in1,size1,in2,size2,out) ccrossa(in1,size1[0],size1[1],in2,size2[0],size2[1],out)
#define s2s2crosss2(in1,size1,in2,size2,out) scrossa(in1,size1[0],size1[1],in2,size2[0],size2[1],out)
#define u82u82crossu82(in1,size1,in2,size2,out) u8crossa(in1,size1[0],size1[1],in2,size2[0],size2[1],out)
#define i82i82crossi82(in1,size1,in2,size2,out) i8crossa(in1,size1[0],size1[1],in2,size2[0],size2[1],out)
#define u162u162crossu162(in1,size1,in2,size2,out) u16crossa(in1,size1[0],size1[1],in2,size2[0],size2[1],out)
#define i162i162crossi162(in1,size1,in2,size2,out) i16crossa(in1,size1[0],size1[1],in2,size2[0],size2[1],out)


#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif /*__INT_CROSS_H__*/
