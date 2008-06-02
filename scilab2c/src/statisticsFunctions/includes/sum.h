/*
 *  Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
 *  Copyright (C) 2008-2008 - INRIA - Bruno JOFRET
 *
 *  This file must be used under the terms of the CeCILL.
 *  This source file is licensed as described in the file COPYING, which
 *  you should have received as part of this distribution.  The terms
 *  are also available at
 *  http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 *
 */

#ifndef __SUM_H__
#define __SUM_H__

#include "floatComplex.h"
#include "doubleComplex.h"

/*
** \brief Sum of a scalar element, just returns it
*/
#define		ssums(in)			in
#define		srowsums(in)			in
#define		scolumnssums(in)		in
#define		smatlabsums(in)			in

/*
** \brief Sum of a scalar element, just returns it
*/
#define		dsums(in)			in
#define		drowsums(in)			in
#define		dcolumnssums(in)		in
#define		dmatlabsums(in)			in

/*
** \brief Sum of a scalar element, just returns it
*/
#define		csums(in)			in
#define		crowsums(in)			in
#define		ccolumnssums(in)		in
#define		cmatlabsums(in)			in

/*
** \brief Sum of a scalar element, just returns it
*/
#define		zsums(in)			in
#define		zrowsums(in)			in
#define		zcolumnssums(in)		in
#define		zmatlabsums(in)			in

/*
** \brief Sum of a float array
** \param in the float array to process
** \param size, the size of the array
** \returns the sum.
*/
float		ssuma(float *in, int size);

/*
** \brief Sum of a float array
** \param in the double array to process
** \param size, the size of the array
** \returns the sum.
*/
double		dsuma(double *in, int size);

/*
** \brief Sum of a float complex array
** \param in the float array to process
** \param size, the size of the array
** \returns the sum.
*/
floatComplex	csuma(floatComplex *in, int size);

/*
** \brief Sum of a double complex array
** \param in the double array to process
** \param size, the size of the array
** \returns the sum.
*/
doubleComplex	zsuma(doubleComplex *in, int size);

#endif /* !__SUM_H__ */
