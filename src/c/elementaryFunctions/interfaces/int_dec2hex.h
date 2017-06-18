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
#ifndef __INT_dec2hex_H__
#define __INT_dec2hex_H__

 #ifdef  __cplusplus
 extern "C" {
 #endif

#define d0dec2hexg2(in,out)	ddec2hexs(in,out)
#define i80dec2hexg2(in,out)	i8dec2hexs(in,out)
#define i160dec2hexg2(in,out)	i16dec2hexs(in,out)
#define u80dec2hexg2(in,out)	u8dec2hexs(in,out)
#define u160dec2hexg2(in,out)	u16dec2hexs(in,out)

#define d2dec2hexg2(in,size,out)  ddec2hexa(in,size[0]*size[1],out)
#define i82dec2hexg2(in,size,out)  i8dec2hexa(in,size[0]*size[1],out)
#define i162dec2hexg2(in,size,out)  i16dec2hexa(in,size[0]*size[1],out)
#define u82dec2hexg2(in,size,out)  u8dec2hexa(in,size[0]*size[1],out)
#define u162dec2hexg2(in,size,out)  u16dec2hexa(in,size[0]*size[1],out)

 #ifdef  __cplusplus
 } /* extern "C" */
 #endif

#endif /*__INT_dec2hex_H__*/
