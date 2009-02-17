/*
 *  Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
 *  Copyright (C) 2008 - INRIA - Arnaud TORSET
 *
 *  This file must be used under the terms of the CeCILL.
 *  This source file is licensed as described in the file COPYING, which
 *  you should have received as part of this distribution.  The terms
 *  are also available at
 *  http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 *
 */
 
 
#ifndef __SPEC_H__
#define __SPEC_H__

#include "doubleComplex.h"
#include "floatComplex.h"

/* spec gives only the eigenvalues
   If you want the eigenvalues and the eigenvectors, use spec2 */

/* spec */
#define sspecs(in) 	FloatComplex(in,0)
#define dspecs(in) 	DoubleComplex(in,0)
#define cspecs(in) 	in
#define zspecs(in) 	in

void sspeca(float* in, int rows, floatComplex* out);
void dspeca(double* in, int rows, doubleComplex* out);
void cspeca(floatComplex* in, int rows, floatComplex* out);
void zspeca(doubleComplex* in, int rows,doubleComplex* out);



/* spec2 */
#define sspec2s(in,out)  	sspecs(1);*out=FloatComplex(in,0); 
#define dspec2s(in,out)  	dspecs(1);*out=DoubleComplex(in,0); 
#define cspec2s(in,out)   	cspecs(FloatComplex(1,0));*out=FloatComplex(creals(in),cimags(in)); 
#define zspec2s(in,out)  	zspecs(DoubleComplex(1,0));*out=DoubleComplex(zreals(in),zimags(in)); 

void sspec2a(float* in, int rows, floatComplex* eigenvalues,floatComplex* eigenvectors);
void dspec2a(double* in, int rows, doubleComplex* eigenvalues,doubleComplex* eigenvectors);
void cspec2a(floatComplex* in, int rows, floatComplex* eigenvalues,floatComplex* eigenvectors);
void zspec2a(doubleComplex* in, int rows,doubleComplex* eigenvalues,doubleComplex* eigenvectors);


#endif /* __SPEC_H__ */
