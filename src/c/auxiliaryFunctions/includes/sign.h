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

#ifndef __SIGN_H__
#define __SIGN_H__

#include <math.h>

#include "dynlib_auxiliaryfunctions.h"
#include "floatComplex.h"
#include "doubleComplex.h"
#include "types.h"

#ifdef  __cplusplus
extern "C" {
#endif

/**
 ** \brief Float Signe function
 ** Determine the sign of in (assume that 0 is positive).
 ** \param in : the float we must determine sign.
 ** \return -1 or +1 depending on the sign of in.
 **/
EXTERN_AUXFUNCT float		ssigns(float in);

/**
 ** \brief Double Signe function
 ** Determine the sign of in (assume that 0 is positive).
 ** \param in : the double we must determine sign.
 ** \return -1 or +1 depending on the sign of in.
 **/
EXTERN_AUXFUNCT double		dsigns(double in);

/**
 ** \brief Float Complex Signe function
 ** Determine the sign of in (assume that 0 is positive).
 ** \param in : the float we must determine sign.
 ** \return -1 or +1 depending on the sign of in.
 **/
EXTERN_AUXFUNCT floatComplex	csigns(floatComplex in);

/**
 ** \brief Double Complex Signe function
 ** Determine the sign of in (assume that 0 is positive).
 ** \param in : the double we must determine sign.
 ** \return -1 or +1 depending on the sign of in.
 **/
EXTERN_AUXFUNCT doubleComplex	zsigns(doubleComplex in);

/**
 ** \brief Uint8 Sign function
 ** Determine the sign of in (assume that 0 is positive).
 ** \param in : the uint8 we must determine sign.
 ** \return -1 or +1 depending on the sign of in.
 **/
EXTERN_AUXFUNCT int8		u8signs(uint8 in);

/**
 ** \brief Int8 Sign function
 ** Determine the sign of in (assume that 0 is positive).
 ** \param in : the int8 we must determine sign.
 ** \return -1 or +1 depending on the sign of in.
 **/
EXTERN_AUXFUNCT int8		i8signs(int8 in);

/**
 ** \brief Uint16 Sign function
 ** Determine the sign of in (assume that 0 is positive).
 ** \param in : the uint16 we must determine sign.
 ** \return -1 or +1 depending on the sign of in.
 **/
EXTERN_AUXFUNCT int16		u16signs(uint16 in);

/**
 ** \brief Int16 Sign function
 ** Determine the sign of in (assume that 0 is positive).
 ** \param in : the uint16 we must determine sign.
 ** \return -1 or +1 depending on the sign of in.
 **/
EXTERN_AUXFUNCT int16		i16signs(int16 in);

/**
 ** \brief Float Signe Array function
 ** Determine the sign of an array in (assume that 0 is positive).
 ** \param in : the float array we must determine sign.
 ** \param size : the number of elements.
 ** \return -1 or +1 depending on the sign of in elements.
 **/
EXTERN_AUXFUNCT void	ssigna(float *in, int size, float *out);

/**
 ** \brief Double Signe Array function
 ** Determine the sign of an array in (assume that 0 is positive).
 ** \param in : the double array we must determine sign.
 ** \param size : the number of elements.
 ** \return -1 or +1 depending on the sign of in elements.
 **/
EXTERN_AUXFUNCT void	dsigna(double *in, int size, double *out);

/**
 ** \brief Float Signe Complex Array function
 ** Determine the sign of an array in (assume that 0 is positive).
 ** \param in : the float complex array we must determine sign.
 ** \param size : the number of elements.
 ** \return -1 or +1 depending on the sign of in elements.
 **/
EXTERN_AUXFUNCT void	csigna(floatComplex *in, int size, floatComplex *out);

/**
 ** \brief Double Signe Complex Array function
 ** Determine the sign of an array in (assume that 0 is positive).
 ** \param in : the double complex array we must determine sign.
 ** \param size : the number of elements.
 ** \return -1 or +1 depending on the sign of in elements.
 **/
EXTERN_AUXFUNCT void	zsigna(doubleComplex *in, int size, doubleComplex *out);

/**
 ** \brief Uint8 Sign Array function
 ** Determine the sign of an array in (assume that 0 is positive).
 ** \param in : the uint8 array we must determine sign.
 ** \param size : the number of elements.
 ** \return -1 or +1 depending on the sign of in elements.
 **/
EXTERN_AUXFUNCT void	u8signa(uint8 *in, int size, int8 *out);

/**
 ** \brief Int8 Sign Array function
 ** Determine the sign of an array in (assume that 0 is positive).
 ** \param in : the int8 array we must determine sign.
 ** \param size : the number of elements.
 ** \return -1 or +1 depending on the sign of in elements.
 **/
EXTERN_AUXFUNCT void	i8signa(int8 *in, int size, int8 *out);

/**
 ** \brief Uint16 Sign Array function
 ** Determine the sign of an array in (assume that 0 is positive).
 ** \param in : the uint16 array we must determine sign.
 ** \param size : the number of elements.
 ** \return -1 or +1 depending on the sign of in elements.
 **/
EXTERN_AUXFUNCT void	u16signa(uint16 *in, int size, int16 *out);

/**
 ** \brief Int16 Sign Array function
 ** Determine the sign of an array in (assume that 0 is positive).
 ** \param in : the int16 array we must determine sign.
 ** \param size : the number of elements.
 ** \return -1 or +1 depending on the sign of in elements.
 **/
EXTERN_AUXFUNCT void	i16signa(int16 *in, int size, int16 *out);


#ifdef  __cplusplus
} /* extern "C" */
#endif


#endif /* !__SIGN_H__ */
