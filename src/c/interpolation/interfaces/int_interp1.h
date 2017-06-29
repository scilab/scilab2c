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

/* THIS IS AN AUTOMATICALLY GENERATED FILE : DO NOT EDIT BY HAND. */


#ifndef __INT_INTERP1_H__
#define __INT_INTERP1_H__

#include "interp1.h"
#include <string.h>

#define d2d2d2interp1d2(x,size1,fx,size2,q,size3,out)           	dinterp13a(x,size1[0]*size1[1],fx,size2[0]*size2[1],q,size3[0]*size3[1],"linear",6,out)

#define d2d2d2g2interp1d2(x,size1,fx,size2,q,size3,ch,size4,out)	dinterp13a(x,size1[0]*size1[1],fx,size2[0]*size2[1],q,size3[0]*size3[1],ch,size4[0]*size4[1],out)

#define s2s2s2interp1s2(x,size1,fx,size2,q,size3,out)			sinterp13a(x,size1[0]*size1[1],fx,size2[0]*size2[1],q,size3[0]*size3[1],"linear",6,out)

#define s2s2s2g2interp1s2(x,size1,fx,size2,q,size3,ch,size4,out)	sinterp13a(x,size1[0]*size1[1],fx,size2[0]*size2[1],q,size3[0]*size3[1],ch,size4[0]*size4[1],out)


#endif

