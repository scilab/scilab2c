/* Copyright (C) 2017 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Organization: FOSSEE, IIT Bombay
 Author: Brijesh Gupta C R
 Email: toolbox@scilab.in
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "lu.h"
#include "lapack.h"
#include "string.h"
#include "matrixTranspose.h"

extern 		double dgetrf_	(int*  , int*  , double*  , int* , int*  , int* );

void dlua(double*inp1, int size, double* out1, double* out2)
{
    char    TRANS = 'N';
    int     INFO=3;
    int     LDA = 3;
    int     LDB = 3;
    int     N = 3;
    int     NRHS = 1;
    int     IPIV[2] ;

    /*double  A[9] =
    {
    1, 2, 3,
    2, 3, 4,
    3, 4, 1
    };*/

    //void LAPACK_dgetrf( lapack_int* m, lapack_int* n, double* a, lapack_int* lda, lapack_int* ipiv, lapack_int *info );
//    dgetrf_(&N,&N,inp1,&LDA,IPIV,&INFO);
    
    dgetrf_(6,2,inp1,6,IPIV,&INFO);

   // checks INFO, if INFO != 0 something goes wrong, for more information see the MAN page of dgetrf.
    for(int i = 0; i < 3*3; i++)
	printf("%lf \n ", inp1[i]);

	printf("PIVOTTTTTT \n ");

    for(int i = 0; i < 2; i++)
	printf("%d \n ", IPIV[i]);


}

