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
#ifndef __INT_ACOTD_H__
#define __INT_ACOTD_H__

#include "acotd.h"

#ifdef  __cplusplus
extern "C" {
#endif

#define d0acotdd0(in1) dacotds(in1); 

#define d2acotdd2(in1,in2,in3) dacotda(in1,in2[0]*in2[1],in3);

#define s0acotds0(in1) sacotds(in1); 

#define s2acotds2(in1,in2,in3) sacotda(in1,in2[0]*in2[1],in3);

#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif /* !__ACOTD_H__ */

