/*
 *  Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
 *  Copyright (C) 2006-2008 - INRIA - Bruno JOFRET
 *
 *  This file must be used under the terms of the CeCILL.
 *  This source file is licensed as described in the file COPYING, which
 *  you should have received as part of this distribution.  The terms
 *  are also available at
 *  http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 *
 */

#ifndef __COS_H__
#define __COS_H__

#include "dynlib_elementaryfunctions.h"
#include "floatComplex.h"
#include "doubleComplex.h"
#include "types.h"

#ifdef  __cplusplus
extern "C" {
#endif
/*
** Compute Cosine for different types .
*/

/*
** \brief Float Cosine function
** \param in : input value.
*/
EXTERN_ELEMFUNCT float		scoss(float in);

/*
** \brief Double Cosine function
** \param in : input value.
*/
EXTERN_ELEMFUNCT double		dcoss(double in);

/*
** \brief Float Complex Cosine function
** \param in : input value.
*/
EXTERN_ELEMFUNCT floatComplex	ccoss(floatComplex in);

/*
** \brief Double Complex Cosine function
** \param in : input value.
*/
EXTERN_ELEMFUNCT doubleComplex	zcoss(doubleComplex in);

/*
** \brief Uint8 Cosine function
** \param in : input value.
*/
EXTERN_ELEMFUNCT float		u8coss(uint8 in);

/*
** \brief Int8 Cosine function
** \param in : input value.
*/
EXTERN_ELEMFUNCT float		i8coss(int8 in);

/*
** \brief Uint16 Cosine function
** \param in : input value.
*/
EXTERN_ELEMFUNCT float		u16coss(uint16 in);

/*
** \brief Int8 Cosine function
** \param in : input value.
*/
EXTERN_ELEMFUNCT float		i16coss(int16 in);

/*
** \brief Float Matrix Cosine function
** \param in : input array value.
** \param out : output array value.
** \param size : the size of in and out arrays.
*/
EXTERN_ELEMFUNCT void		scosa(float* in, int size, float* out);

/*
** \brief Double Matrix Cosine function
** \param in : input array value.
** \param out : output array value.
** \param size : the size of in and out arrays.
*/
EXTERN_ELEMFUNCT void		dcosa(double* in, int size, double* out);

/*
** \brief Float Complex Matrix Cosine function
** \param in : input array value.
** \param out : output array value.
** \param size : the size of in and out arrays.
*/
EXTERN_ELEMFUNCT void		ccosa(floatComplex* in, int size, floatComplex* out);

/*
** \brief Double Complex Matrix Cosine function
** \param in : input array value.
** \param out : output array value.
** \param size : the size of in and out arrays.
*/
EXTERN_ELEMFUNCT void		zcosa(doubleComplex* in, int size, doubleComplex* out);

/*
** \brief uint8 Matrix Cosine function
** \param in : input array value.
** \param out : output array value.
** \param size : the size of in and out arrays.
*/
EXTERN_ELEMFUNCT void		u8cosa(uint8* in, int size, float* out);

/*
** \brief int8 Matrix Cosine function
** \param in : input array value.
** \param out : output array value.
** \param size : the size of in and out arrays.
*/
EXTERN_ELEMFUNCT void		i8cosa(int8* in, int size, float* out);

/*
** \brief uint16 Matrix Cosine function
** \param in : input array value.
** \param out : output array value.
** \param size : the size of in and out arrays.
*/
EXTERN_ELEMFUNCT void		u16cosa(uint16* in, int size, float* out);

/*
** \brief int16 Matrix Cosine function
** \param in : input array value.
** \param out : output array value.
** \param size : the size of in and out arrays.
*/
EXTERN_ELEMFUNCT void		i16cosa(int16* in, int size, float* out);

#ifdef  __cplusplus
} /* extern "C" */
#endif


#endif /* !__COS_H__ */
