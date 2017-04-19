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
#ifndef __INT_dec2oct_H__
#define __INT_dec2oct_H__

 #ifdef  __cplusplus
 extern "C" {
 #endif

#define d0dec2octd2(in,out)	ddec2octs(in,out)
#define i80dec2octi82(in,out)	i8dec2octs(in,out)
#define i160dec2octi162(in,out)	i16dec2octs(in,out)
#define u80dec2octu82(in,out)	u8dec2octs(in,out)
#define u160dec2octu162(in,out)	u16dec2octs(in,out)

#define d2dec2octd2(in,size,out) ddec2octa(in,size[0]*size[1],out)
#define i82dec2octi82(in,size,out) i8dec2octa(in,size[0]*size[1],out)
#define i162dec2octi162(in,size,out) i16dec2octa(in,size[0]*size[1],out)
#define u82dec2octu82(in,size,out) u8dec2octa(in,size[0]*size[1],out)
#define u162dec2octu162(in,size,out) u16dec2octa(in,size[0]*size[1],out)


 #ifdef  __cplusplus
 } /* extern "C" */
 #endif

#endif /*__INT_dec2oct_H__*/
