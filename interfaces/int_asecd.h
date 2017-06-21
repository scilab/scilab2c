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
#ifndef __INT_ASECD_H__
#define __INT_ASECD_H__

#include "asecd.h"

#ifdef  __cplusplus
extern "C" {
#endif

#define d0asecdd0(in1) dasecds(in1); 

#define d2asecdd2(in1,in2,in3) dasecda(in1,in2[0]*in2[1],in3);

#define s0asecds0(in1) sasecds(in1); 

#define s2asecds2(in1,in2,in3) sasecda(in1,in2[0]*in2[1],in3);


#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif /* !__ASECD_H__ */

