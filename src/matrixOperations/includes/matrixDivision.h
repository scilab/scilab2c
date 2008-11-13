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

#ifndef __MATRIXDIVISION_H__
#define __MATRIXDIVISION_H__

#include "floatComplex.h"
#include "doubleComplex.h"
#include "lapack.h" 
#include "cat.h"
#include "matrixTranspose.h"
#include "conj.h" 
#include "min.h" 
#include "max.h" 


void srdivma (	float* in1, int lines1, int columns1 ,
			    float* in2, int lines2, int columns2 ,
			 	float* out );		

void sldivma (	float* in1, int lines1, int columns1 ,
			    float* in2, int lines2, int columns2 ,
			 	float* out );	

				
void drdivma (	double* in1, int lines1, int columns1 ,
			    double* in2, int lines2, int columns2 ,
			 	double* out );		


void dldivma (	double* in1, int lines1, int columns1 ,
				double* in2, int lines2, int columns2 ,
				double* out );

void zrdivma(	doubleComplex* in1, int lines1, int columns1 ,
				doubleComplex* in2, int lines2, int columns2 ,
				doubleComplex* out );

void zldivma(    doubleComplex* in1, int lines1, int columns1 ,
				doubleComplex* in2, int lines2, int columns2 ,
				doubleComplex* out );

void crdivma(    floatComplex* in1, int lines1, int columns1 ,
				floatComplex* in2, int lines2, int columns2 ,
				floatComplex* out );

void cldivma(	floatComplex* in1, int lines1, int columns1 ,
				floatComplex* in2, int lines2, int columns2 ,
				floatComplex* out );



#endif /* !__MATRIXDIVISION_H__ */
