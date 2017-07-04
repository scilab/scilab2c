/* Copyright (C) 2017 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Author: Siddhesh Wani, Jorawar Singh 
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
*/

#ifndef __INT_UINT32_H__
#define __INT_UINT32_H__

#define s0uint32u320(in)			suint32s(in)

#define d0uint32u320(in)			duint32s(in)

#define u80uint32u320(in)			u8uint32s(in)

#define i80uint32u320(in)			i8uint32s(in)

#define u160uint32u320(in)	    	u16uint32s(in)

#define i160uint32u320(in)			i16uint32s(in)

#define i320uint32u320(in)			i32uint32s(in)

#define s2uint32u322(in,size,out)		suint32a(in, size[0]*size[1], out)

#define d2uint32u322(in,size,out)		duint32a(in, size[0]*size[1], out)

#define u82uint32u322(in,size,out)		u8uint32a(in, size[0]*size[1], out)

#define i82uint32u322(in,size,out)		i8int32a(in, size[0]*size[1], out)

#define u162uint32u322(in,size,out)	    u16uint32a(in, size[0]*size[1], out)

#define i162uint32u322(in,size,out)		i16uint32a(in, size[0]*size[1], out)

#define i322uint32u322(in,size,out)		i32uint32a(in, size[0]*size[1], out)

#endif /* !__INT_UINT32_H__ */
