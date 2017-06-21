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
#ifndef __INT_dec2base_H__
#define __INT_dec2base_H__

 #ifdef  __cplusplus
 extern "C" {
 #endif

#define d0d0dec2baseg2(in,base,out)	ddec2bases(in,base,0,out)
#define s0d0dec2baseg2(in,base,out)	sdec2bases(in,base,0,out)

#define d2d0dec2baseg2(in,size,out) ddec2basea(in,size[0]*size[1],base,0,out)
#define s2d0dec2baseg2(in,size,out) sdec2basea(in,size[0]*size[1],base,0,out)

#define d0d0d0dec2baseg2(in,base,n,out)	    ddec2bases(in,base,n,out)
#define s0d0d0dec2baseg2(in,base,n,out)	    sdec2bases(in,base,n,out)

#define d2d0d0dec2baseg2(in,size,base,n,out) ddec2basea(in,size[0]*size[1],base,n,out)
#define s2d0d0dec2baseg2(in,size,base,n,out) sdec2basea(in,size[0]*size[1],base,n,out)

 #ifdef  __cplusplus
 } /* extern "C" */
 #endif

#endif /*__INT_dec2base_H__*/
