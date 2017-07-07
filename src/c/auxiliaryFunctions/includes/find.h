/*
 *  Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
 *  Copyright (C) 2007-2008 - INRIA - Bruno JOFRET
 *
 *  This file must be used under the terms of the CeCILL.
 *  This source file is licensed as described in the file COPYING, which
 *  you should have received as part of this distribution.  The terms
 *  are also available at
 *  http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 *
 */

#ifndef __FIND_H__
#define __FIND_H__

#include "dynlib_auxiliaryfunctions.h"
#include "floatComplex.h"
#include "doubleComplex.h"
#include "types.h"

#ifdef  __cplusplus
extern "C" {
#endif
/*
** \brief Float Find function
** max is an integer giving the maximum number of indices to return. (use -1 to search them all)
*/
EXTERN_AUXFUNCT void sfinda(float* x, int size, float *out, int max);

/*
** \brief Double Find function
** max is an integer giving the maximum number of indices to return. (use -1 to search them all)
*/
EXTERN_AUXFUNCT void dfinda(double*x, int size, double *out, int max);

/*
** \brief Float Complex Find function
** max is an integer giving the maximum number of indices to return. (use -1 to search them all)
*/
EXTERN_AUXFUNCT void cfinda(floatComplex* z, int size, float *out, int max);

/*
** \brief Double Complex Find function
** max is an integer giving the maximum number of indices to return. (use -1 to search them all)
*/
EXTERN_AUXFUNCT void zfinda(doubleComplex* z, int size, double *out, int max);

/*
** \brief uint8 Find function
** max is an integer giving the maximum number of indices to return. (use -1 to search them all)
*/
EXTERN_AUXFUNCT void u8finda(uint8 *x, int size, uint8 *out, int max);

/*
** \brief uint16 Find function
** max is an integer giving the maximum number of indices to return. (use -1 to search them all)
*/
EXTERN_AUXFUNCT void u16finda(uint16 *x, int size, uint16 *out, int max);

/*
** \brief int8 Find function
** max is an integer giving the maximum number of indices to return. (use -1 to search them all)
*/
EXTERN_AUXFUNCT void i8finda(int8 *x, int size, int8 *out, int max);

/*
** \brief int16 Find function
** max is an integer giving the maximum number of indices to return. (use -1 to search them all)
*/
EXTERN_AUXFUNCT void i16finda(int16 *x, int size, int16 *out, int max);



#ifdef  __cplusplus
} /* extern "C" */
#endif


#endif /* !__FIND_H__ */
