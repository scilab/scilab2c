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

#ifndef __INT_UINT16_H__
#define __INT_UINT16_H__

#define s0uint16u160(in)			suint16s(in)

#define d0uint16u160(in)			duint16s(in)

#define u80uint16u160(in)			u8uint16s(in)

#define i80uint16u160(in)			i8uint16s(in)

#define i160uint16u160(in)			i16uint16s(in)

#define s2uint16u162(in,size,out)		suint16a(in, size[0]*size[1], out)

#define d2uint16u162(in,size,out)		duint16a(in, size[0]*size[1], out)

#define u82uint16u162(in,size,out)		u8uint16a(in, size[0]*size[1], out)

#define i82uint16u162(in,size,out)		i8int16a(in, size[0]*size[1], out)

#define i162uint16u162(in,size,out)		i16uint16a(in, size[0]*size[1], out)

#endif /* !__INT_UINT8_H__ */
