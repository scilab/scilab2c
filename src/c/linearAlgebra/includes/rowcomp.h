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
#ifndef __ROWCOMP_H__
#define __ROWCOMP_H__
#include "types.h"

#ifdef  __cplusplus
extern "C" {
#endif

double drowcompa(int ninp,double *A,int row,int col,char *flag,double tol,double *w);

#ifdef  __cplusplus 
} /* extern "C" */
#endif

#endif /*__ROWCOMP_H__*/
