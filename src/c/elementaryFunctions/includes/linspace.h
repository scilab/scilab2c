/* Copyright (C) 2016 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Author: Siddhesh Wani
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
*/

#ifndef __LINSPACE_H__
#define __LINSPACE_H__

#include "dynlib_elementaryfunctions.h"
#ifdef  __cplusplus
extern "C" {
#endif


EXTERN_ELEMFUNCT void  dlinspaces(double low_limit,double up_limit,double range_num, double* out);

<<<<<<< HEAD
EXTERN_ELEMFUNCT void  slinspaces(float low_limit,float up_limit,float range_num, float* out);

EXTERN_ELEMFUNCT void  dlinspacea(double *low_limit,int row,double *up_limit,double range_num, double* out);

EXTERN_ELEMFUNCT void  slinspacea(float *low_limit,int row,float *up_limit,float range_num, float* out);
=======
EXTERN_ELEMFUNCT void  dlinspacea(double *low_limit,int row,double *up_limit,double range_num, double* out);

>>>>>>> 9e5793a7b05b23e6044a6d7a9ddd5db39ba375f0




#ifdef  __cplusplus
} /* extern "C" */
#endif


#endif /* !__LINSPACE_H__ */

