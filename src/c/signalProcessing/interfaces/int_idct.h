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



#ifndef __INT_IDCT_H__
#define __INT_IDCT_H__



#define d2idctd2(in,size,out)	didcta(in,size[0],size[1],out)

#define z2idctz2(in,size,out)	zidcta(in,size[0],size[1],out)

#define c2idctc2(in,size,out)	cidcta(in,size[0],size[1],out)

#endif
