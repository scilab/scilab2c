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

#ifndef __MULTIPLICATION_H__
#define __MULTIPLICATION_H__

#include "floatComplex.h"
#include "doubleComplex.h"

/*
**
** WARNING WE ASSUME MATRIXES TO BE CONSCISTENT
** size1 = size2;
**
*/

/*
** \brief Compute a multiplication with floats.
** \param in1 : input float.
** \param in2 : input float.
** \return : in1 + in2
*/
float	smuls(float in1, float in2);

/*
** \brief Compute a multiplication element ways for floats.
** \param in1 : input array.
** \param size1 : size of in1 array.
** \param in2 : input arry.
** \param size2 : size of in2 array.
** \param out : array that contains the multiplication in1 + in2.
*/
void	smula(float *in1, int size1,
	       float *in2, int size2,
	       float *out);

/*
** \brief Compute a multiplication with double.
** \param in1 : input double.
** \param in2 : input double.
** \return : in1 + in2
*/
double	dmuls(double in1, double in2);

/*
** \brief Compute a multiplication element ways for double.
** \param in1 : input array.
** \param size1 : size of in1 array.
** \param in2 : input arry.
** \param size2 : size of in2 array.
** \param out : array that contains the multiplication in1 + in2.
*/
void	dmula(double *in1, int size1,
	       double *in2, int size2,
	       double * out);

/*
** \brief Compute a multiplication with floats Complex.
** \param in1 : input float complex.
** \param in2 : input float complex.
** \return : in1 + in2
*/
floatComplex	smuls(floatComplex in1, floatComplex in2);

/*
** \brief Compute a multiplication element ways for complex single precision.
** \param in1 : input array.
** \param size1 : size of in1 array.
** \param in2 : input arry.
** \param size2 : size of in2 array.
** \param out : array that contains the multiplication in1 + in2.
*/
void	cmula(floatComplex *in1, int size1,
	       floatComplex *in2, int size2,
	       floatComplex *out);

/*
** \brief Compute a multiplication with double complex.
** \param in1 : input double complex.
** \param in2 : input double conplex.
** \return : in1 + in2
*/
doubleComplex	dmuls(doubleComplex in1, doubleComplex in2);

/*
** \brief Compute a multiplication element ways for complex double precision.
** \param in1 : input array.
** \param size1 : size of in1 array.
** \param in2 : input arry.
** \param size2 : size of in2 array.
** \param out : array that contains the multiplication in1 + in2.
*/
void	zmula(doubleComplex *in1, int size1,
	       doubleComplex *in2, int size2,
	       doubleComplex *out);

#endif /* !__MULTIPLICATION_H__ */
