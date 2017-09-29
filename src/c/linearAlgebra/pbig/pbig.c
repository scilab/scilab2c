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

#include "schur.h"
#include <stdio.h>
#include "string.h"
#include "stdlib.h"
#include "lapack.h"

//Projection on eigensubspace associated with eigenvalues
//with real part >= thres (flag='c') or with modulus >= thres (flag='d')
//Projection is defined by Q*M. Eigenvalues of M*A*Q = eigenvalues
//of A with real part >= thres (case 'c',...).
//If [Q1,M1]== full rank factorization (fullrf) of eye-Q*M then evals of
// M1*A*Q1 = evals of A with real part < thres (case 'c',...).
// See also psmall.
//!

void dpbiga(double *in1,int N,double *in2,double *in3,double *out1,double *out2){
		



}
