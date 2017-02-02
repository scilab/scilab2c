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

/*Fucntion to find schur decomposition of given square matrix */
#include "schur.h"
#include "lapack.h"
#include "stdlib.h"
#include "string.h"


/*flag  --> 0: nothing
		--> 1: continuous
		--> 2: discrete
*/

lapack_logical selctg1( double* in1, double* in2);

double dschura(double* in1, int size, int flag, int nout, double* out1, \
		double* out2)
{
	char JOBVS = 'N';
	char SORT = 'N';
	int SDIM = 0;
	int LVDS = size;
    int LWORK = 3*size, INFO;
	double *WR, *WI, *VS, *WORK;
	int *BWORK;
	double ret = 0;
	double *buf; /*input is copied to buf, since lapack function direclty
	modifies the input variable*/

	/*Used incase of flag > 0*/ 
	LAPACK_D_SELECT2 selctg = &selctg1;  

	if(nout >= 2) JOBVS = 'V';
	if(flag > 0) SORT = 'S';

	buf = (double*) malloc((double) size*size*sizeof(double));
	WR = (double*) malloc((double) size*sizeof(double));
	WI = (double*) malloc((double) size*sizeof(double));
	VS = (double*) malloc((double) LVDS*size*sizeof(double));
	WORK = (double*) malloc((double) LWORK*sizeof(double));
	BWORK = (int*) malloc((double) size*sizeof(double));


	memcpy(buf,in1,size*size*sizeof(double));

	dgees_(&JOBVS,&SORT,selctg,&size,buf,&size,&SDIM,WR,WI,VS,&LVDS, \
		WORK,&LWORK,BWORK,&INFO);

	/*if (INFO != 0)
	{
		out1 = NULL;
		return 0;	
	} */

	if(nout == 1)
	{
		/*Copy result in in1 to out1*/
		memcpy(out1,buf,size*size*sizeof(double));
	}
	else if(nout == 2)
	{
		if(flag == 0)
		{
			/*copy in1 to out2 and VS to out1*/
			memcpy(out2,buf,size*size*sizeof(double));
			memcpy(out1,VS,size*size*sizeof(double));
		}
		else
		{
			/*copy VS to out1 and SDIM to out2*/
			memcpy(out1,VS,size*size*sizeof(double));
			ret = SDIM;
		}
	}
	else 
	{
		/*copy VS to out1, SDIM to out2, in1 to out3*/
		memcpy(out1,VS,size*size*sizeof(double));
		memcpy(out2,buf,size*size*sizeof(double));
		ret = SDIM;
	}

	free(buf);
	free(WI);
	free(WR);
	free(VS);
	free(WORK);
	free(BWORK);

	return ret;
}

lapack_logical selctg1(double* in1, double* in2)
{

	if(sqrt(*in1**in1+*in2**in2) < 1)
		return 1;
	else 
		return 0;
}