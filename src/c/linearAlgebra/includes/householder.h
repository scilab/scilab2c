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
#ifndef __HOUSEHOLDER_H__
#define __HOUSEHOLDER_H__
#include "types.h"

#ifdef  __cplusplus
extern "C" {
#endif

void dhouseholdera(int ninp,double *inp1,int row,double *inp2,double *out1);

#ifdef  __cplusplus 
} /* extern "C" */
#endif

#endif /*__HOUSEHOLDER_H__*/
