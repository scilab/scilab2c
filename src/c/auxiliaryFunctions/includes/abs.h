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

#ifndef __ABS_H__
#define __ABS_H__

#include "dynlib_auxiliaryfunctions.h"
#include "floatComplex.h"
#include "doubleComplex.h"
#include "sqrt.h"
#include "types.h"

#ifdef  __cplusplus
extern "C" {
#endif

/**
 ** \brief Float Absolute Value function
 ** Determine the absolute value of in.
 ** \param in : the float we must determine abs.
 ** \return -in or in depending on the sign of in.
 **/
EXTERN_AUXFUNCT float	sabss(float in);

/**
 ** \brief Double Absolute Value function
 ** Determine the absolute value of in.
 ** \param in : the double we must determine abs.
 ** \return -in or +in depending on the abs of in.
 **/
EXTERN_AUXFUNCT double	dabss(double in);

/**
 ** \brief Float Complex Absolute Value function
 ** Determine the absolute value of in.
 ** \param in : the float complex we must determine abs i.e. module.
 ** \return |in|.
 **/
EXTERN_AUXFUNCT float	cabss(floatComplex in);

/**
 ** \brief Double Complex Absolute Value function
 ** Determine the absolute value of in.
 ** \param in : the double complex we must determine abs i.e. module.
 ** \return |in|.
 **/
EXTERN_AUXFUNCT double	zabss(doubleComplex in);

/**
 ** \brief Uint8 Absolute Value function
 ** Determine the absolute value of in.
 ** \param in : the uint8 we must determine abs.
 ** \return -in or in depending on the sign of in.
 **/
EXTERN_AUXFUNCT uint8	u8abss(uint8 in);

/**
 ** \brief Int8 Absolute Value function
 ** Determine the absolute value of in.
 ** \param in : the int8 we must determine abs.
 ** \return -in or in depending on the sign of in.
 **/
EXTERN_AUXFUNCT int8	i8abss(int8 in);

/**
 ** \brief Uint16 Absolute Value function
 ** Determine the absolute value of in.
 ** \param in : the uint16 we must determine abs.
 ** \return -in or in depending on the sign of in.
 **/
EXTERN_AUXFUNCT uint16	u16abss(uint16 in);

/**
 ** \brief Int16 Absolute Value function
 ** Determine the absolute value of in.
 ** \param in : the int16 we must determine abs.
 ** \return -in or in depending on the sign of in.
 **/
EXTERN_AUXFUNCT int16	i16abss(int16 in);

/**
 ** \brief Float Array Absolute Value function
 ** Determine the absolute value of in elements.
 ** \param in : the float array we must determine abs.
 ** \param out : the float array result.
 **/
EXTERN_AUXFUNCT void	sabsa(float *in, int size, float* out);

/**
 ** \brief Double Array Absolute Value function
 ** Determine the absolute value of in elements.
 ** \param in : the double array we must determine abs.
 ** \param out : the double array result.
 **/
EXTERN_AUXFUNCT void	dabsa(double *in, int size, double* out);

/**
 ** \brief Float Complex Array Absolute Value function
 ** Determine the absolute value of in elements.
 ** \param in : the float complex array we must determine abs i.e. module.
 ** \param out : the float complex array result i.e out[n] = |in[n]|.
 **/
EXTERN_AUXFUNCT void	cabsa(floatComplex *in, int size, float* out);

/**
 ** \brief Double Complex Array Absolute Value function
 ** Determine the absolute value of in.
 ** \param in : the double complex array we must determine abs i.e. module.
 ** \param out : the double complex array result  i.e out[n] = |in[n]|.
 **/
EXTERN_AUXFUNCT void	zabsa(doubleComplex *in, int size, double* out);


/**
 ** \brief Uint8 Array Absolute Value function
 ** Determine the absolute value of in elements.
 ** \param in : the uint8 array we must determine abs.
 ** \param out : the uint8 array result.
 **/
EXTERN_AUXFUNCT void	u8absa(uint8 *in, int size, uint8* out);

/**
 ** \brief Int8 Array Absolute Value function
 ** Determine the absolute value of in elements.
 ** \param in : the int8 array we must determine abs.
 ** \param out : the int8 array result.
 **/
EXTERN_AUXFUNCT void	i8absa(int8 *in, int size, int8* out);

/**
 ** \brief Uint16 Array Absolute Value function
 ** Determine the absolute value of in elements.
 ** \param in : the uint16 array we must determine abs.
 ** \param out : the uint16 array result.
 **/
EXTERN_AUXFUNCT void	u16absa(uint16 *in, int size, uint16* out);

/**
 ** \brief Int16 Array Absolute Value function
 ** Determine the absolute value of in elements.
 ** \param in : the int16 array we must determine abs.
 ** \param out : the int16 array result.
 **/
EXTERN_AUXFUNCT void	i16absa(int16 *in, int size, int16* out);


#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif /* !__ABS_H__ */
