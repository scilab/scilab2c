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
#ifndef __INT_base2dec_H__
#define __INT_base2dec_H__

 #ifdef  __cplusplus
 extern "C" {
 #endif

#define g2d0base2decd0(in,size,base)	gbase2decs(in,size[1],base)
#define d0d0base2decd0(in,base)	dbase2decs(in,base)
//#define g2d0base2decd2(in,size,out)	gbase2deca(in,size[1],out)

 #ifdef  __cplusplus
 } /* extern "C" */
 #endif

#endif /*__INT_base2dec_H__*/
