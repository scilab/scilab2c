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

/*This function finds the hessenberg form of a matrix A.*/

#include "hess.h"
#include <stdio.h>
#include "string.h"
#include "stdlib.h"
#include "lapack.h"
#include "matrixTranspose.h"
#include "matrixMultiplication.h"

void dspec1a(double *in1,double *in2,int size,int nout,double *out1,double *out2,double *out3,double *out4){
	char JOBVL;
	char JOBVR;
	int N;
	double *A;
	int LDA;
	double *B;
	int LDA;
	double *ALPHAR;
	double *ALPHAI;
	double *BETA;
	double *VL;
	int LDVL;
	double *VR;
	int LDVR;
	double *WORK;
	int LWORK;
	int INFO;
}
