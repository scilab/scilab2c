/* Copyright (C) 2016 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Author: Mushir
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
*/

#ifndef __LOGSPACE_H__
#define __LOGSPACE_H__

#include "dynlib_elementaryfunctions.h"
#ifdef  __cplusplus
extern "C" {
#endif


EXTERN_ELEMFUNCT void  dlogspaces(double low_limit,double up_limit,double range_num, double* out);

EXTERN_ELEMFUNCT void  dlogspacea(double *low_limit,int row,double *up_limit,double range_num, double* out);

#ifdef  __cplusplus
} /* extern "C" */
#endif


#endif /* !__LOGSPACE_H__ */

