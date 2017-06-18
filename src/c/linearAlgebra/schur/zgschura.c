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

/*Fucntion to find generalised schur decomposition of given square complex matrices */

#include "schur.h"
#include "lapack.h"
#include "stdlib.h"
#include "string.h"
#include <math.h>
#include "doubleComplex.h"
#include "matrixTranspose.h"

/*flag  --> 0: nothing
		--> 1: continuous
		--> 2: discrete
*/

lapack_logical selctg21( doubleComplex* in1, doubleComplex* in2, doubleComplex* in3);
lapack_logical selctg22( doubleComplex* in1, doubleComplex* in2, doubleComplex* in3);

doubleComplex dgschura(doubleComplex* in1, int size, doubleComplex* in2, int flag, int nout, \
			doubleComplex* out1, doubleComplex* out2, doubleComplex* out3, doubleComplex* out4)
{
	char JOBVSL = 'N';
	char JOBVSR = 'N';
	char SORT = 'N';
	int SDIM = 0;
	int LDVSL = size, LDVSR = size;
    int LWORK = 2*size, INFO;
	doubleComplex *ALPHA, *BETA, *VSL, *VSR, *WORK;
	double *RWORK;
	int *BWORK;
	doubleComplex ret = 0;
	doubleComplex *buf1, *buf2; /*input is copied to buf, since lapack function directly
	modifies the input variable*/
	
	/*Used incase of flag > 0*/ 
	LAPACK_D_SELECT3 selctg = &selctg21;  

	if(nout >= 2){
		 JOBVSL = 'V';
		 JOBVSR = 'V';
	}
	if(flag > 0) SORT = 'S';

	buf1   = (doubleComplex*) malloc((doubleComplex) size*size*sizeof(doubleComplex));
	buf2   = (doubleComplex*) malloc((doubleComplex) size*size*sizeof(doubleComplex));
	ALPHA = (doubleComplex*) malloc((doubleComplex) size*sizeof(doubleComplex));
	RWORK = (double *)malloc((double)8*size*sizeof(double));
	BETA   = (doubleComplex*) malloc((doubleComplex) size*sizeof(doubleComplex));
	VSL = (doubleComplex*) malloc((doubleComplex) LDVSL*size*sizeof(doubleComplex));
	VSR = (doubleComplex*) malloc((doubleComplex) LDVSR*size*sizeof(doubleComplex));
	WORK = (doubleComplex*) malloc((doubleComplex) LWORK*sizeof(doubleComplex));
	BWORK = (int*) malloc((doubleComplex) size*sizeof(doubleComplex));


	memcpy(buf1,in1,size*size*sizeof(doubleComplex));
	memcpy(buf2,in2,size*size*sizeof(doubleComplex));
	
	zgges_(&JOBVSL,&JOBVSR,&SORT,selctg,&size,buf1,&size,buf2,&size,&SDIM, \
			ALPHA,BETA,VSL,&LDVSL,VSR,&LDVSR,WORK,&LWORK,RWORK,BWORK,&INFO);

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
			memcpy(out1,buf1,size*size*sizeof(doubleComplex));
			memcpy(out2,buf2,size*size*sizeof(doubleComplex));
		}
		else
		{
			/*copy VSR to out1 and return SDIM */
			memcpy(out1,VSR,size*size*sizeof(doubleComplex));
			ret = SDIM;
		}
	}
	else if(nout == 3) 
	{
		/*copy VSL to out1, VSR to out2, return SDIM*/
		memcpy(out1,VSL,size*size*sizeof(doubleComplex));
		memcpy(out2,VSR,size*size*sizeof(doubleComplex));
		ret = SDIM;
	}
	else if(nout == 4)
	{
		if(flag == 0)
		{
			/*copy in1 to out1 and in2 to out2*/
			memcpy(out1,buf1,size*size*sizeof(doubleComplex));
			memcpy(out2,buf2,size*size*sizeof(doubleComplex));
			/*copy VSL to out3 and VSR to out4*/
			memcpy(out3,VSL,size*size*sizeof(doubleComplex));
			memcpy(out4,VSR,size*size*sizeof(doubleComplex));
		}
		else
		{
			/*copy in1 to out1 and in2 to out2*/
			memcpy(out1,buf1,size*size*sizeof(doubleComplex));
			memcpy(out2,buf2,size*size*sizeof(doubleComplex));
			/*copy VSR to out3 and return SDIM*/
			memcpy(out3,VSR,size*size*sizeof(doubleComplex));
			ret = SDIM;
		}
	}
	else /*nout = 5*/
	{
		/*copy in1 to out1 and in2 to out2*/
		memcpy(out1,buf1,size*size*sizeof(doubleComplex));
		memcpy(out2,buf2,size*size*sizeof(doubleComplex));
		/*copy VSL to out3 and VSR to out4*/
		memcpy(out3,VSL,size*size*sizeof(doubleComplex));
		memcpy(out4,VSR,size*size*sizeof(doubleComplex));
		/*return SDIM*/
		ret = SDIM;
	}

	free(buf1);
	free(buf2);
	free(VSL);
	free(VSR);
	free(ALPHA);
	free(BETA);
	free(WORK);
	free(BWORK);

	return ret;
}

lapack_logical selctg21(doubleComplex* in1, doubleComplex* in2,  doubleComplex* in3)
{
	if((sqrt(*in1**in1+*in2**in2)/ *in3) < 1)
		return 1;
	else 
		return 0;
}

lapack_logical selctg22(doubleComplex* in1, doubleComplex* in2,  doubleComplex* in3)
{
	if((sqrt(*in1**in1+*in2**in2)/ *in3) < 1)
		return 1;
	else 
		return 0;
}
