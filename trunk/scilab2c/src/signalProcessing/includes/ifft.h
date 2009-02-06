/*
 *  Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
 *  Copyright (C) 2008-2008 - INRIA - Allan SIMON
 *
 *  This file must be used under the terms of the CeCILL.
 *  This source file is licensed as described in the file COPYING, which
 *  you should have received as part of this distribution.  The terms
 *  are also available at
 *  http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 *
 */

#ifndef __IFFT_H__
#define __IFFT_H__

#include "floatComplex.h"
#include "doubleComplex.h"

#define siffts(in)					in
#define diffts(in)					in
#define ciffts(in)					in
#define ziffts(in)					in

#define sifftma(in,rows,columns,out)		{float* temp;\
								temp=malloc((uint)(rows*columns)*sizeof(float));\
								sfilla(temp,rows,columns,0);\
								cifftma(FloatComplexMatrix(in,temp,rows*columns),rows,columns,out);\
								}
#define difftma(in,rows,columns,out)		{double* temp;\
								temp=malloc((uint)(rows*columns)*sizeof(double));\
								dfilla(temp,rows,columns,0);\
								zifftma(DoubleComplexMatrix(in,temp,rows*columns),rows,columns,out);\
								}

/*
** compute the inverse fast fourier transform of a vector
** param in  : the input matrix in complex double precision
** param rows: number of rows of the input matrix
** param cols: number of cols of the input matrix
** param out : the transformed matrix in complex double precision
*/


void zifftma ( doubleComplex* in , int rows, int cols, doubleComplex* out);
/*
** compute the inverse fast fourier transform of a vector
** param in  : the input matrix in complex float precision
** param rows: number of rows of the input matrix
** param cols: number of cols of the input matrix
** param out : the transformed matrix in complex float precision
*/

void cifftma ( floatComplex* in , int rows, int cols, floatComplex* out);


#endif /* !__IFFT_H__ */

