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

#ifndef __PROD_H__
#define __PROD_H__

#include "floatComplex.h"
#include "doubleComplex.h"

/*
** \brief Sum of a scalar element, just returns it
*/
#define		sprods(in)			in
#define		srowprods(in)			in
#define		scolumnprods(in)		in
#define		smatlabprods(in)			in

/*
** \brief Sum of a scalar element, just returns it
*/
#define		dprods(in)			in
#define		drowprods(in)			in
#define		dcolumnprods(in)		in
#define		dmatlabprods(in)			in

/*
** \brief Sum of a scalar element, just returns it
*/
#define		cprods(in)			in
#define		crowprods(in)			in
#define		ccolumnprods(in)		in
#define		cmatlabprods(in)			in

/*
** \brief Sum of a scalar element, just returns it
*/
#define		zprods(in)			in
#define		zrowprods(in)			in
#define		zcolumnprods(in)		in
#define		zmatlabprods(in)			in

/*
** \brief Sum of a float array
** \param in the float array to process
** \param size, the size of the array
** \returns the prod.
*/
float		sproda(float *in, int size);
void		srowproda(float *in, int lines, int columns, float* out);
void		scolumnproda(float *in, int lines, int columns, float* out);

/*
** \brief Sum of a double array
** \param in the double array to process
** \param size, the size of the array
** \returns the prod.
*/
double		dproda(double *in, int size);
void		drowproda(double *in, int lines, int columns, double* out);
void		dcolumnproda(double *in, int lines, int columns, double* out);

/*
** \brief Sum of a float complex array
** \param in the float array to process
** \param size, the size of the array
** \returns the prod.
*/
floatComplex	cproda(floatComplex *in, int size);
void		crowproda(floatComplex *in, int lines, int columns, floatComplex* out);
void		ccolumnproda(floatComplex *in, int lines, int columns, floatComplex* out);

/*
** \brief Sum of a double complex array
** \param in the double array to process
** \param size, the size of the array
** \returns the prod.
*/
doubleComplex	zproda(doubleComplex *in, int size);
void		zrowproda(doubleComplex *in, int lines, int columns, doubleComplex* out);
void		zcolumnproda(doubleComplex *in, int lines, int columns, doubleComplex* out);

#endif /* !__PROD_H__ */
