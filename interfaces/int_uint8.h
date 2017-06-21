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

#ifndef __INT_UINT8_H__
#define __INT_UINT8_H__

#define s0uint8u80(in)			suint8s(in)

#define d0uint8u80(in)			duint8s(in)

#define i80uint8u80(in)			i8uint8s(in)

#define u160uint8u80(in)		u16uint8s(in)

#define i160uint8u80(in)		i16uint8s(in)

#define s2uint8u82(in,size,out)		suint8a(in, size[0]*size[1], out)

#define d2uint8u82(in,size,out)		duint8a(in, size[0]*size[1], out)

#define i82uint8u82(in,size,out)	i8uint8a(in, size[0]*size[1], out)

#define u162uint8u82(in,size,out)	u16uint8a(in, size[0]*size[1], out)

#define i162uint8u82(in,size,out)	i16uint8a(in, size[0]*size[1], out)

#endif /* !__INT_UINT8_H__ */
