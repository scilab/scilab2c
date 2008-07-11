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

void srdiva (	float * in1, int it1, 
				float * in2, int it2, 
				float *out, int  itOut, int size)) ;		
							
void sldiva (	float * in1, int it1, 
				float * in2, int it2, 
				float * out, int  itOut, int size)) ;


				
				
void drdiva (	double * in1, int it1, 
				double * in2, int it2, 
				double * out, int itOut, int size)) ;
				
void dldiva (	double * in1, int it1, 
				double * in2, int it2, 
				double * out, int itOut, int size)) ;
				

				
				
void crdiva (	floatComplex * in1, int it1, 
				floatComplex * in2, int it2, 
				floatComplex * out, int itOut, int size)) ;		
				
				
void cldiva (	floatComplex * in1, int it1, 
				floatComplex * in2, int it2, 
				floatComplex * out, int itOut, int size)) ;

				
				
void zrdiva (	doubleComplex * in1, int it1, 
				doubleComplex * in2, int it2, 
				doubleComplex * out, int itOut, int size)) ;
				
void zldiva (	doubleComplex * in1, int it1, 
				doubleComplex * in2, int it2, 
				doubleComplex * out, int itOut, int size)) ;

#endif /* !__MATRIXDIVISION_H__ */
