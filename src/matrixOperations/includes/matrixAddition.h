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

#ifndef __MATRIXADDITION_H__
#define __MATRIXADDITION_H__

#include "floatComplex.h"
#include "doubleComplex.h"
#include "addition.h"

/*
**
** WARNING WE ASSUME MATRIXES TO BE CONSCISTENT
** size1 = size2;
**
*/


/*
** \brief Compute an addition element ways for floats.
** \param in1 : input array.
** \param size1 : size of in1 array.
** \param in2 : input arry.
** \param size2 : size of in2 array.
** \param out : array that contains the addition in1 + in2.
*/
void	saddma(float *in1, int size1,
	       float *in2, int size2,
	       float *out);
/*
** \brief Compute an addition element ways for double.
** \param in1 : input array.
** \param size1 : size of in1 array.
** \param in2 : input arry.
** \param size2 : size of in2 array.
** \param out : array that contains the addition in1 + in2.
*/
void	daddma(double *in1, int size1,
	       double *in2, int size2,
	       double * out);

/*
** \brief Compute an addition element ways for complex single precision.
** \param in1 : input array.
** \param size1 : size of in1 array.
** \param in2 : input arry.
** \param size2 : size of in2 array.
** \param out : array that contains the addition in1 + in2.
*/
void	caddma(floatComplex *in1, int size1,
	       floatComplex *in2, int size2,
	       floatComplex *out);

/*
** \brief Compute an addition element ways for complex double precision.
** \param in1 : input array.
** \param size1 : size of in1 array.
** \param in2 : input arry.
** \param size2 : size of in2 array.
** \param out : array that contains the addition in1 + in2.
*/
void	zaddma(doubleComplex *in1, int size1,
	       doubleComplex *in2, int size2,
	       doubleComplex *out);

#endif /* !__MATRIXADDITION_H__ */
