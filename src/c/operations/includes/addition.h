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

#ifndef __ADDITION_H__
#define __ADDITION_H__

#include "dynlib_operations.h"
#include "floatComplex.h"
#include "doubleComplex.h"
#include "types.h"

#ifdef  __cplusplus
extern "C" {
#endif

/*
**
** WARNING WE ASSUME MATRIXES TO BE CONSCISTENT
** size1 = size2;
**
*/

/*
** \brief Compute an addition with floats.
** \param in1 : input float.
** \param in2 : input float.
** \return : in1 + in2
*/
EXTERN_OPERATIONS float	sadds(float in1, float in2);

/*
** \brief Compute an addition element ways for floats.
** \param in1 : input array.
** \param size1 : size of in1 array.
** \param in2 : input arry.
** \param size2 : size of in2 array.
** \param out : array that contains the addition in1 + in2.
*/
EXTERN_OPERATIONS void	sadda(float *in1, int size1,
	       float *in2, int size2,
	       float *out);

/*
** \brief Compute an addition with double.
** \param in1 : input double.
** \param in2 : input double.
** \return : in1 + in2
*/
EXTERN_OPERATIONS double	dadds(double in1, double in2);

/*
** \brief Compute an addition element ways for double.
** \param in1 : input array.
** \param size1 : size of in1 array.
** \param in2 : input arry.
** \param size2 : size of in2 array.
** \param out : array that contains the addition in1 + in2.
*/
EXTERN_OPERATIONS void	dadda(double *in1, int size1,
	       double *in2, int size2,
	       double * out);

/*
** \brief Compute an addition with floats Complex.
** \param in1 : input float complex.
** \param in2 : input float complex.
** \return : in1 + in2
*/
EXTERN_OPERATIONS floatComplex	cadds(floatComplex in1, floatComplex in2);

/*
** \brief Compute an addition element ways for complex single precision.
** \param in1 : input array.
** \param size1 : size of in1 array.
** \param in2 : input arry.
** \param size2 : size of in2 array.
** \param out : array that contains the addition in1 + in2.
*/
EXTERN_OPERATIONS void	cadda(floatComplex *in1, int size1,
	       floatComplex *in2, int size2,
	       floatComplex *out);

/*
** \brief Compute an addition with double complex.
** \param in1 : input double complex.
** \param in2 : input double conplex.
** \return : in1 + in2
*/
EXTERN_OPERATIONS doubleComplex	zadds(doubleComplex in1, doubleComplex in2);

/*
** \brief Compute an addition element ways for complex double precision.
** \param in1 : input array.
** \param size1 : size of in1 array.
** \param in2 : input arry.
** \param size2 : size of in2 array.
** \param out : array that contains the addition in1 + in2.
*/
EXTERN_OPERATIONS void	zadda(doubleComplex *in1, int size1,
	       doubleComplex *in2, int size2,
	       doubleComplex *out);

/*
** \brief Compute an addition with uint8.
** \param in1 : input uint8.
** \param in2 : input uint8.
** \return : in1 + in2
*/
EXTERN_OPERATIONS uint8	u8adds(uint8 in1, uint8 in2);

/*
** \brief Compute an addition element wise for uint8.
** \param in1 : input array.
** \param size1 : size of in1 array.
** \param in2 : input arry.
** \param size2 : size of in2 array.
** \param out : array that contains the addition in1 + in2.
*/
EXTERN_OPERATIONS void	u8adda(uint8 *in1, int size1,
	       uint8 *in2, int size2,
	       uint8 *out);

/*
** \brief Compute an addition with int8.
** \param in1 : input int8.
** \param in2 : input int8.
** \return : in1 + in2
*/
EXTERN_OPERATIONS int8	i8adds(int8 in1, int8 in2);

/*
** \brief Compute an addition element wise for int8.
** \param in1 : input array.
** \param size1 : size of in1 array.
** \param in2 : input arry.
** \param size2 : size of in2 array.
** \param out : array that contains the addition in1 + in2.
*/
EXTERN_OPERATIONS void	i8adda(int8 *in1, int size1,
	       int8 *in2, int size2,
	       int8 *out);

/*
** \brief Compute an addition with uint16.
** \param in1 : input uint16.
** \param in2 : input uint16.
** \return : in1 + in2
*/
EXTERN_OPERATIONS uint16 u16adds(uint16 in1, uint16 in2);

/*
** \brief Compute an addition element wise for uint16.
** \param in1 : input array.
** \param size1 : size of in1 array.
** \param in2 : input arry.
** \param size2 : size of in2 array.
** \param out : array that contains the addition in1 + in2.
*/
EXTERN_OPERATIONS void	u16adda(uint16 *in1, int size1,
	       uint16 *in2, int size2,
	       uint16 *out);

/*
** \brief Compute an addition with int16.
** \param in1 : input int16.
** \param in2 : input int16.
** \return : in1 + in2
*/
EXTERN_OPERATIONS int16	i16adds(int16 in1, int16 in2);

/*
** \brief Compute an addition element wise for int16.
** \param in1 : input array.
** \param size1 : size of in1 array.
** \param in2 : input arry.
** \param size2 : size of in2 array.
** \param out : array that contains the addition in1 + in2.
*/
EXTERN_OPERATIONS void	i16adda(int16 *in1, int size1,
	       int16 *in2, int size2,
	       int16 *out);

#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif /* !__ADDITION_H__ */
