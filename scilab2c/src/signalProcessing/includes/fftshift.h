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

#ifndef __FFTSHIFT_H__
#define __FFTSHIFT_H__


/* 
   fftshift rearrange the result of fft(x) 
   it's call like that : fftshift(y), y=ff(x)
*/
#include "floatComplex.h"
#include "doubleComplex.h"


#define sfftshifts(in)					in
#define dfftshifts(in)					in
#define cfftshifts(in)					in
#define zfftshifts(in)					in

void sfftshifta(float* in,int rows,int columns,float* out);		

void dfftshifta(double* in,int rows,int columns,double* out);

void cfftshifta ( floatComplex* in , int rows, int cols, floatComplex* out);

void zfftshifta ( doubleComplex* in , int rows, int cols, doubleComplex* out);


#define srowfftshifts(in)					in
#define drowfftshifts(in)					in
#define crowfftshifts(in)					in
#define zrowfftshifts(in)					in

void srowfftshifta(float* in,int rows,int columns,float* out);		

void drowfftshifta(double* in,int rows,int columns,double* out);

void crowfftshifta ( floatComplex* in , int rows, int cols, floatComplex* out);

void zrowfftshifta ( doubleComplex* in , int rows, int cols, doubleComplex* out);

#define scolumnfftshifts(in)					in
#define dcolumnfftshifts(in)					in
#define ccolumnfftshifts(in)					in
#define zcolumnfftshifts(in)					in

void scolumnfftshifta(float* in,int rows,int columns,float* out);		

void dcolumnfftshifta(double* in,int rows,int columns,double* out);

void ccolumnfftshifta ( floatComplex* in , int rows, int cols, floatComplex* out);

void zcolumnfftshifta ( doubleComplex* in , int rows, int cols, doubleComplex* out);



#endif /* !__FFTSHIFT_H__ */

