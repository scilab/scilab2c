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
#ifndef __INT_oct2dec_H__
#define __INT_oct2dec_H__

 #ifdef  __cplusplus
 extern "C" {
 #endif

#define d0oct2decd0(in)	        doct2decs(in)
#define i80oct2deci80(in)	i8oct2decs(in)
#define i160oct2deci160(in)	i16oct2decs(in)
#define u80oct2decu80(in)	u8oct2decs(in)
#define u160oct2decu160(in)	u16oct2decs(in)

#define d2oct2decd2(in,size,out) doct2deca(in,size[0]*size[1],out)
#define i82oct2deci82(in,size,out) i8oct2deca(in,size[0]*size[1],out)
#define i162oct2deci162(in,size,out) i16oct2deca(in,size[0]*size[1],out)
#define u82oct2decu82(in,size,out) u8oct2deca(in,size[0]*size[1],out)
#define u162oct2decu162(in,size,out) u16oct2deca(in,size[0]*size[1],out)

 #ifdef  __cplusplus
 } /* extern "C" */
 #endif

#endif /*__INT_oct2dec_H__*/
