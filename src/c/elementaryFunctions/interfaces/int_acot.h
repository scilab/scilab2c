// Copyright (C) 2017 - IIT Bombay - FOSSEE
//
// This file must be used under the terms of the CeCILL.
// This source file is licensed as described in the file COPYING, which
// you should have received as part of this distribution.  The terms
// are also available at
// http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
// Organization: FOSSEE, IIT Bombay
// Author: Ashish Kamble
// Email: toolbox@scilab.in
#ifndef __INT_ACOT_H__
#define __INT_ACOT_H__

#include "acot.h"

#ifdef  __cplusplus
extern "C" {
#endif

#define d0acotd0(in1) dacots(in1); 

#define d2acotd2(in1,in2,in3) dacota(in1,in2[0]*in2[1],in3);

#define s0acots0(in1) sacots(in1); 

#define s2acots2(in1,in2,in3) sacota(in1,in2[0]*in2[1],in3);

#define c0acotd0(in1) cacots(in1); 

#define c2acotc2(in1,in2,in3) cacota(in1,in2[0]*in2[1],in3);

#define z0acotz0(in1) zacots(in1); 

#define z2acotz2(in1,in2,in3) zacota(in1,in2[0]*in2[1],in3);


#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif /* !__ACOT_H__ */

