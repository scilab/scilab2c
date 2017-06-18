/* Copyright (C) 2017 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Author: Siddhesh Wani
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
 */

/*Funtion to find inverse condition number of square matrix*/

#include "lapack.h"
#include "stdlib.h"
#include "string.h"

double drconda(double* in1, int rows)
{
	double *buf, *LDWORK;
	int INFO, *IPIV, *LIWORK;
	char one = '1';
	double ANORM;
	double RCOND = 1;

	buf   = (double*) malloc((double) rows*rows*sizeof(double));
	IPIV   = (int*) malloc((int) rows*sizeof(int));
	LIWORK = (int*) malloc((int) rows*sizeof(int));
	LDWORK = (double*) malloc((double) 4*rows*sizeof(double));

	/*Copy input in temp buf, as lapack modifies input*/
	memcpy(buf,in1,rows*rows*sizeof(double));

	ANORM = dlange_(&one,&rows,&rows,buf,&rows,LDWORK); 

	dgetrf_(&rows,&rows,buf,&rows,IPIV,&INFO);
	
	if(INFO == 0)
	{
		dgecon_(&one,&rows,buf,&rows,&ANORM,&RCOND,LDWORK,LIWORK,&INFO);
	}

	return RCOND;

}