/* Copyright (C) 2016 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Author: Ukasha Noor
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
*/



#ifndef __INT_DCT_H__
#define __INT_DCT_H__



#define d2dctd2(in,size,out)		ddcta(in,size[0],size[1],-1,out)

#define d2d0dctd2(in,size,sign,out)	ddcta(in,size[0],size[1],sign,out)

#define s2dcts2(in,size,out)		sdcta(in,size[0],size[1],-1,out)

#define s2s0dcts2(in,size,sign,out)	sdcta(in,size[0],size[1],sign,out)

#define z2dctz2(in,size,out)		zdcta(in,size[0],size[1],-1,out)

#define z2d0dctz2(in,size,sign,out)	zdcta(in,size[0],size[1],sign,out)

#define c2dctc2(in,size,out)		cdcta(in,size[0],size[1],-1,out)

#define c2s0dctc2(in,size,sign,out)	cdcta(in,size[0],size[1],sign,out)

#endif
