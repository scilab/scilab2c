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
 
 
#ifndef __CHOL_H__
#define __CHOL_H__
 
#include "doubleComplex.h"
#include "floatComplex.h"
 

	
double dchols(double in);
void dchola(double *in, int size, double *out);
 
float schols(float in);
void schola(float *in, int size, float *out);
 
#define zchols(in) 		dchols(zreals(in))

void zchola (doubleComplex *in, int size, doubleComplex *out); 
 
#define cchols(in) 		schols(creals(in))
void cchola(floatComplex *in, int size, floatComplex *out); 


#endif /* __CHOL_H__ */
 
