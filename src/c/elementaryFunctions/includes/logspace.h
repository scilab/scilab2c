/*
SCilab2C FOSSEE IIT Bombay
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

