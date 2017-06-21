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
#ifndef __INT_ACSCH_H__
#define __INT_ACSCH_H__

#include "acsch.h"

#ifdef  __cplusplus
extern "C" {
#endif

#define d0acschd0(in1) dacschs(in1); 

#define d2acschd2(in1,in2,in3) dacscha(in1,in2[0]*in2[1],in3);

#define s0acschs0(in1) sacschs(in1); 

#define s2acschs2(in1,in2,in3) sacscha(in1,in2[0]*in2[1],in3);


#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif /* !__ACSCH_H__ */

