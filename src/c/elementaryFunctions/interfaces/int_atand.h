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
#ifndef __INT_ATAND_H__
#define __INT_ATAND_H__

#include "atand.h"

#ifdef  __cplusplus
extern "C" {
#endif

#define d0atandd0(in1) datands(in1); 

#define d2atandd2(in1,in2,in3) datanda(in1,in2[0]*in2[1],in3);

#define s0atands0(in1) satands(in1); 

#define s2atands2(in1,in2,in3) satanda(in1,in2[0]*in2[1],in3);


#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif /* !__ATAND_H__ */

