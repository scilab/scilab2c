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

/*Fucntion to find generalised schur decomposition of given square matrices */
#include "schur.h"
#include "lapack.h"
#include "stdlib.h"
#include "string.h"


/*flag  --> 0: nothing
		--> 1: continuous
		--> 2: discrete
*/

lapack_logical selctg2( double* in1, double* in2, double* in3);

double dgschura(double* in1, int size, double* in2, int flag, int nout, \
			double* out1, double* out2, double* out3, double* out4)
{
	char JOBVSL = 'N';
	char JOBVSR = 'N';
	char SORT = 'N';
	int SDIM = 0;
	int LDVSL = size, LDVSR = size;
    int LWORK = 8*size+16, INFO;
	double *ALPHAR, *ALPHAI, *BETA, *VSL, *VSR, *WORK;
	int *BWORK;
	double ret = 0;
	double *buf1, *buf2; /*input is copied to buf, since lapack function directly
	modifies the input variable*/

	/*Used incase of flag > 0*/ 
	LAPACK_D_SELECT3 selctg = &selctg2;  

	if(nout >= 2){
		 JOBVSL = 'V';
		 JOBVSR = 'V';
		}
	if(flag > 0) SORT = 'S';

	buf1   = (double*) malloc((double) size*size*sizeof(double));
	buf2   = (double*) malloc((double) size*size*sizeof(double));
	ALPHAR = (double*) malloc((double) size*sizeof(double));
	ALPHAI = (double*) malloc((double) size*sizeof(double));
	BETA   = (double*) malloc((double) size*sizeof(double));
	VSL = (double*) malloc((double) LDVSL*size*sizeof(double));
	VSR = (double*) malloc((double) LDVSR*size*sizeof(double));
	WORK = (double*) malloc((double) LWORK*sizeof(double));
	BWORK = (int*) malloc((double) size*sizeof(double));


	memcpy(buf1,in1,size*size*sizeof(double));
	memcpy(buf2,in2,size*size*sizeof(double));

	dgges_(&JOBVSL,&JOBVSR,&SORT,selctg,&size,buf1,&size,buf2,&size,&SDIM, \
			ALPHAR,ALPHAI,BETA,VSL,&LDVSL,VSR,&LDVSR,WORK,&LWORK,BWORK,&INFO);

	/*if (INFO != 0) 
	{
		out1 = NULL;
		return 0;
	}*/

	if(nout == 1)
	{
		return(SDIM);
	}
	else if(nout == 2)
	{
		if(flag == 0)
		{
			/*copy in1 to out1 and in2 to out2*/
			memcpy(out1,buf1,size*size*sizeof(double));
			memcpy(out2,buf2,size*size*sizeof(double));
		}
		else
		{
			/*copy VSR to out1 and return SDIM */
			memcpy(out1,VSR,size*size*sizeof(double));
			ret = SDIM;
		}
	}
	else if(nout == 3) 
	{
		/*copy VSL to out1, VSR to out2, return SDIM*/
		memcpy(out1,VSL,size*size*sizeof(double));
		memcpy(out2,VSR,size*size*sizeof(double));
		ret = SDIM;
	}
	else if(nout == 4)
	{
		if(flag == 0)
		{
			/*copy in1 to out1 and in2 to out2*/
			memcpy(out1,buf1,size*size*sizeof(double));
			memcpy(out2,buf2,size*size*sizeof(double));
			/*copy VSL to out3 and VSR to out4*/
			memcpy(out3,VSL,size*size*sizeof(double));
			memcpy(out4,VSR,size*size*sizeof(double));
		}
		else
		{
			/*copy in1 to out1 and in2 to out2*/
			memcpy(out1,buf1,size*size*sizeof(double));
			memcpy(out2,buf2,size*size*sizeof(double));
			/*copy VSR to out3 and return SDIM*/
			memcpy(out3,VSR,size*size*sizeof(double));
			ret = SDIM;
		}
	}
	else /*nout = 5*/
	{
		/*copy in1 to out1 and in2 to out2*/
		memcpy(out1,buf1,size*size*sizeof(double));
		memcpy(out2,buf2,size*size*sizeof(double));
		/*copy VSL to out3 and VSR to out4*/
		memcpy(out3,VSL,size*size*sizeof(double));
		memcpy(out4,VSR,size*size*sizeof(double));
		/*return SDIM*/
		ret = SDIM;
	}

	free(buf1);
	free(buf2);
	free(VSL);
	free(VSR);
	free(ALPHAR);
	free(ALPHAI);
	free(BETA);
	free(WORK);
	free(BWORK);

	return ret;
}

lapack_logical selctg2(double* in1, double* in2,  double* in3)
{
	if((sqrt(*in1**in1+*in2**in2)/ *in3) < 1)
		return 1;
	else 
		return 0;
}