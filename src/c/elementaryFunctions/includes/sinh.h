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

#ifndef __SINH_H__
#define __SINH_H__

#include "dynlib_elementaryfunctions.h"
#include "floatComplex.h"
#include "doubleComplex.h"
#include "types.h"

#ifdef  __cplusplus
extern "C" {
#endif
/*
** Compute Sine for different types .
*/

/*
** \brief Float Sine function
** \param in : input value.
*/
EXTERN_ELEMFUNCT float		ssinhs(float in);

/*
** \brief Double Sine function
** \param in : input value.
*/
EXTERN_ELEMFUNCT double		dsinhs(double in);

/*
** \brief Float Complex Sine function
** \param in : input value.
*/
EXTERN_ELEMFUNCT floatComplex	csinhs(floatComplex in);

/*
** \brief Double Complex Sine function
** \param in : input value.
*/
EXTERN_ELEMFUNCT doubleComplex	zsinhs(doubleComplex in);


/*
** \brief Uint8 Sine function
** \param in : input value.
*/
EXTERN_ELEMFUNCT float		u8sinhs(uint8 in);

/*
** \brief Int8 Sine function
** \param in : input value.
*/
EXTERN_ELEMFUNCT float		i8sinhs(int8 in);

/*
** \brief Uint16 Sine function
** \param in : input value.
*/
EXTERN_ELEMFUNCT float		u16sinhs(uint16 in);

/*
** \brief Int16 Sine function
** \param in : input value.
*/
EXTERN_ELEMFUNCT float		i16sinhs(int16 in);

/*
** \brief Float Matrix Sine function
** \param in : input array value.
** \param out : input array value.
** \param size : the size of in and out arrays.
*/
EXTERN_ELEMFUNCT void		ssinha(float* in, int size, float* out);

/*
** \brief Double Matrix Sine function
** \param in : input array value.
** \param out : input array value.
** \param size : the size of in and out arrays.
*/
EXTERN_ELEMFUNCT void		dsinha(double* in, int size, double* out);

/*
** \brief Float Complex Matrix Sine function
** \param in : input array value.
** \param out : input array value.
** \param size : the size of in and out arrays.
*/
EXTERN_ELEMFUNCT void		csinha(floatComplex* in, int size, floatComplex* out);

/*
** \brief Double Complex Matrix Sine function
** \param in : input array value.
** \param out : input array value.
** \param size : the size of in and out arrays.
*/
EXTERN_ELEMFUNCT void		zsinha(doubleComplex* in, int size, doubleComplex* out);

/*
** \brief Uint8 Matrix Sine function
** \param in : input array value.
** \param out : input array value.
** \param size : the size of in and out arrays.
*/
EXTERN_ELEMFUNCT void		u8sinha(uint8* in, int size, float* out);

/*
** \brief Int8 Matrix Sine function
** \param in : input array value.
** \param out : input array value.
** \param size : the size of in and out arrays.
*/
EXTERN_ELEMFUNCT void		i8sinha(int8* in, int size, float* out);

/*
** \brief Uint16 Matrix Sine function
** \param in : input array value.
** \param out : input array value.
** \param size : the size of in and out arrays.
*/
EXTERN_ELEMFUNCT void		u16sinha(uint16* in, int size, float* out);

/*
** \brief Int16 Matrix Sine function
** \param in : input array value.
** \param out : input array value.
** \param size : the size of in and out arrays.
*/
EXTERN_ELEMFUNCT void		i16sinha(int16* in, int size, float* out);


#ifdef  __cplusplus
} /* extern "C" */
#endif


#endif /* !__SINH_H__ */
