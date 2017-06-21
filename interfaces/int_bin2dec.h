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
#ifndef __INT_bin2dec_H__
#define __INT_bin2dec_H__

 #ifdef  __cplusplus
 extern "C" {
 #endif

#define d0bin2decd0(in)	dbin2decs(in)
#define i80bin2deci80(in)	i8bin2decs(in)
//#define i160bin2deci160(in)	i16bin2decs(in)
#define u80bin2decu80(in)	u8bin2decs(in)
#define u160bin2decu160(in)	u16bin2decs(in)

#define d2bin2decd2(in,size,out) dbin2deca(in,size[0]*size[1],out)
#define i82bin2deci82(in,size,out) i8bin2deca(in,size[0]*size[1],out)
//#define i162bin2deci162(in,size,out) i16bin2deca(in,size[0]*size[1],out)
#define u82bin2decu82(in,size,out) u8bin2deca(in,size[0]*size[1],out)
#define u162bin2decu162(in,size,out) u16bin2deca(in,size[0]*size[1],out)



 #ifdef  __cplusplus
 } /* extern "C" */
 #endif

#endif /*__INT_bin2dec_H__*/
