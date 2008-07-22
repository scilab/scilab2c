/*
 *  Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
 *  Copyright (C) 2008-2008 - INRIA - Allan SIMON
 *
 *  This file must be used under the terms of the CeCILL.
 *  This source file is licensed as described in the file COPYING, which
 *  you should have received as part of this distribution.  The terms
 *  are also available at
 *  http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 *
 */


/**** WARNING NOT WORK AT ALL FOR THE MOMENT  ***/
/**** Because of problem of conversion float-> double ****/
#include "matrixDivision.h" 
#include "lapack.h" 
#include <string.h>
#include <stdio.h>
void srdiva (	float* in1, int lines1, int columns1 ,
			    float* in2, int lines2, int columns2 ,
			 	float* out ){
	char cNorm	= 0;
	int iExit	= 0;
	int i = 0 ,j = 0 ,ij = 0 ,ji = 0;

	/*temporary variables*/
	int iWork		= 0;
	int iInfo		= 0;
	int iMax		= 0;
	double dblRcond	= 0;

	double dblEps	= 0;
	double dblAnorm	= 0;
	
	/* these 3 variable are created to permit to use the value in the fortran functions 
	   because they need double matrix as arguments and we can't cast directly the pointers
	   without having problems , i know that's ugly */
	double *dblin1	= NULL;
	double *dblin2	= NULL;
	double *dblout	= NULL;	

	double *pAf		= NULL;
	double *pAt		= NULL;
	double *pBt		= NULL;
	double *pDwork	= NULL;

	int *pRank	= NULL;
	int *pIpiv	= NULL;
	int *pJpvt	= NULL;
	int *pIwork	= NULL;
	
	

	iWork	= Max(4 * columns2, Max(Min(lines2, columns2) + 3 * lines2 + 1, 2 * Min(lines2, columns2) + lines1));


	/* Array allocations*/
	dblin1		= (double*)malloc(sizeof(double) * (unsigned int)columns2 * (unsigned int)lines2);			 
	dblin2 		= (double*)malloc(sizeof(double) * (unsigned int)columns1 * (unsigned int)lines1);
	dblout		= (double*)malloc(sizeof(double) * (unsigned int)Max(lines2,columns2) * (unsigned int)lines1);
					 
	pAf			= (double*)malloc(sizeof(double) * (unsigned int)columns2 * (unsigned int)lines2);
	pAt			= (double*)malloc(sizeof(double) * (unsigned int)columns2 *(unsigned int) lines2);
	pBt			= (double*)malloc(sizeof(double) * (unsigned int)Max(lines2,columns2) * (unsigned int)lines1);

	pRank		= (int*)malloc(sizeof(int));
	pIpiv		= (int*)malloc(sizeof(int) * (unsigned int)columns2);
	pJpvt		= (int*)malloc(sizeof(int) * (unsigned int)lines2);
	pIwork		= (int*)malloc(sizeof(int) * (unsigned int)columns2);


	cNorm		= '1';
	pDwork		= (double*)malloc(sizeof(double) * (unsigned int)iWork);
	dblEps		= getRelativeMachinePrecision() ;
	dblAnorm	= dlange_(&cNorm, &lines2, &columns1, dblin2, &lines2, pDwork);

	/*copy and cast all the float value into double value */								
	for ( i = 0 ; i < lines2 * columns2 ; i ++ )
		{
        
		dblin1[i] = (double) in1[i] ;
        printf ( "dbl in1 = %e \n" , dblin1 [i] );  
		}
	
	for ( i = 0 ; i < lines1 * columns1 ; i ++ )
		dblin2[i] = (double) in2[i] ;
        
                     
	/*tranpose A and B*/

    dtransposea(dblin1, lines2, columns2, pAt);
	dtransposea(dblin2, lines1, columns2, pBt);

	if(lines2 == columns2)
	{
		cNorm		= 'F';
		dlacpy_(&cNorm, &columns2, &columns2, pAt, &columns2, pAf, &columns2);
		dgetrf_(&columns2, &columns2, pAf, &columns2, pIpiv, &iInfo);
		if(iInfo == 0)
		{
			cNorm = '1';
			dgecon_(&cNorm, &columns2, pAf, &columns2, &dblAnorm, &dblRcond, pDwork, pIwork, &iInfo);
			if(dblRcond > sqrt(dblEps))
			{
				cNorm	= 'N';
				dgetrs_(&cNorm, &columns2, &lines1, pAf, &columns2, pIpiv, pBt, &columns2, &iInfo);
				dtransposea(pBt, columns2, lines1, dblout);
				iExit = 1;
			}
		}

	}

	if(iExit == 0)
	{
		dblRcond = sqrt(dblEps);
		cNorm = 'F';
		iMax = Max(lines2, columns2);
		memset(pJpvt, 0x00, (unsigned int)sizeof(int) * (unsigned int)lines2);
		dgelsy_(&columns2, &lines2, &lines1, pAt, &columns2, pBt, &iMax,
			pJpvt, &dblRcond, &pRank[0], pDwork, &iWork, &iInfo);

		if(iInfo == 0)
		{


		/*	TransposeRealMatrix(pBt, lines1, lines2, out, Max(lines1,columns1), lines2);*/

			/*Mega caca de la mort qui tue des ours a mains nues 
			mais je ne sais pas comment le rendre "beau" :(*/
			{
				
				for(j = 0 ; j < lines2 ; j++)
				{
					for(i = 0 ; i < lines1 ; i++)
					{
						ij = i + j * lines1;
						ji = j + i * Max(lines2, columns2);
						dblout[ij]	= pBt[ji];
					}
				}
			}
		}
	}

	for ( i = 0 ; i < Max(lines2,columns2) * lines1 ; i++ )
		out[i] = (float) dblout[i] ;
									
	free(pAf);
	free(pAt);
	free(pBt);
	free(pRank);
	free(pIpiv);
	free(pJpvt);
	free(pIwork);
	free(pDwork);

}
