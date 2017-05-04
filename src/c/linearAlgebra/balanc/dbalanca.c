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

/*Funtion to balance given square matrix to improve its condition number*/
#include "balanc.h"
#include "lapack.h"
#include "stdlib.h"
#include "string.h"
#include "eye.h"

void dbalanca(double* in1, int rows, double* in2, double* out1, \
		double* out2, double* out3, double* out4)
{
	char JOB = 'B';
	char RSIDE = 'R';
	char LSIDE = 'L';

	int ILO, IHI, INFO;
	double *buf1, *buf2, *LSCALE, *RSCALE;
	double *LWORK;


	if(in2 == NULL)
	{
		/*Single input matrix*/
		buf1   = (double*) malloc((double) rows*rows*sizeof(double));
		LSCALE = (double*) malloc((double) rows*sizeof(double));

		/*copy input to temp buf as lapack function modifies input*/
		memcpy(buf1,in1,rows*rows*sizeof(double));

		dgebal_(&JOB,&rows,buf1,&rows,&ILO,&IHI,LSCALE,&INFO);
		deyea(out2,rows,rows);
		dgebak_(&JOB,&RSIDE,&rows,&ILO,&IHI,LSCALE,&rows,out2,&rows,&INFO);
		
		/*copy computed matrix to output*/
		memcpy(out1,buf1,rows*rows*sizeof(double));
	}
	else
	{
		/*two matrices as inputs*/
		buf1   = (double*) malloc((double) rows*rows*sizeof(double));
		buf2   = (double*) malloc((double) rows*rows*sizeof(double));
		LSCALE = (double*) malloc((double) rows*sizeof(double));
		RSCALE = (double*) malloc((double) rows*sizeof(double));
		LWORK  = (double*) malloc((double) 6*rows*sizeof(double));

		/*copy input to temp buf as lapack function modifies input*/
		memcpy(buf1,in1,rows*rows*sizeof(double));
		memcpy(buf2,in2,rows*rows*sizeof(double));

		dggbal_(&JOB,&rows,buf1,&rows,buf2,&rows,&ILO,&IHI,LSCALE,RSCALE, \
					LWORK,&INFO);
		deyea(out3,rows,rows);
		deyea(out4,rows,rows);

		dgebak_(&JOB,&LSIDE,&rows,&ILO,&IHI,LSCALE,&rows,out3,&rows,&INFO);
		dgebak_(&JOB,&RSIDE,&rows,&ILO,&IHI,LSCALE,&rows,out4,&rows,&INFO);

		/*copy computed matrix to output*/
		memcpy(out1,buf1,rows*rows*sizeof(double));
		memcpy(out2,buf2,rows*rows*sizeof(double));

	}

}