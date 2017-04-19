 /* Copyright (C) 2016 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Author: Shamik Guha
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
 */
#ifndef __INT_INTERP1_H__
#define __INT_INTERP1_H__

 #ifdef  __cplusplus
 extern "C" {
 #endif

#define d2d2d0g2interp1d0(x,size,y,size2,xin,method,size3)	dinterp1s(x,size[1],y,size2[1],xin,method,size3[1])
//#define i80interp1g2(in,out)	i8interp1s(in,out)
//#define i160interp1g2(in,out)	i16interp1s(in,out)
//#define u80interp1g2(in,out)	u8interp1s(in,out)
//#define u160interp1g2(in,out)	u16interp1s(in,out)

//#define d2interp1g2(in,size,out)  dinterp1a(in,size[0]*size[1],out)
//#define i82interp1g2(in,size,out)  i8interp1a(in,size[0]*size[1],out)
//#define i162interp1g2(in,size,out)  i16interp1a(in,size[0]*size[1],out)
//#define u82interp1g2(in,size,out)  u8interp1a(in,size[0]*size[1],out)
//#define u162interp1g2(in,size,out)  u16interp1a(in,size[0]*size[1],out)

 #ifdef  __cplusplus
 } /* extern "C" */
 #endif

#endif /*__INT_interp1_H__*/
