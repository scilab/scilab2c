 /* Copyright (C) 2017 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Author: Sandeep Gupta
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
 */

#ifndef __SVA_H__
#define __SVA_H__
#include "types.h"

#ifdef  __cplusplus
extern "C" {
#endif

void dsvaa(int ninp,double *in1,int row,int col,double in2,double *out1, \
	double *out2,double *out3);	

#ifdef  __cplusplus 
} /* extern "C" */
#endif

#endif /*__SVA_H__*/

