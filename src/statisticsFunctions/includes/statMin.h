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

#ifndef __STAT_MIN_H__
#define __STAT_MIN_H__


/*
** \brief Sum of a scalar element, just returns it
*/
#define		smins(in)			in
#define		srowmins(in)			in
#define		scolumnmins(in)		in
#define		smatlabmins(in)			in

/*
** \brief Sum of a scalar element, just returns it
*/
#define		dmins(in)			in
#define		drowmins(in)			in
#define		dcolumnmins(in)		in
#define		dmatlabmins(in)			in

/*
** \brief Sum of a float array
** \param in the float array to process
** \param size, the size of the array
** \returns the min.
*/
float		smina(float *in, int size);
void		srowmina(float *in, int lines, int columns, float* out);
void		scolumnmina(float *in, int lines, int columns, float* out);

/*
** \brief Sum of a double array
** \param in the double array to process
** \param size, the size of the array
** \returns the min.
*/
double		dmina(double *in, int size);
void		drowmina(double *in, int lines, int columns, double* out);
void		dcolumnmina(double *in, int lines, int columns, double* out);

#endif /* !__STAT_MIN_H__ */
