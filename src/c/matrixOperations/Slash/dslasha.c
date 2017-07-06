/* Copyright (C) 2017 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Author: Sandeep Gupta
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
 */

/*This function finds the A/B. */

/* X = slash(A,B) <=> X = A/B */

#include <stdio.h>
#include "string.h"
#include "stdlib.h"
#include "lapack.h"
#include "matrixTranspose.h"
#include "matrixMultiplication.h"

void dslasha(double *A,int m1,int n1,double *B,int m2,int n2,double *out){
	if(m1 != n1 && m1 != m2 && m2 != n2){
		return;	
	}
	
	double AF;
	AF = (double *)malloc();

}
