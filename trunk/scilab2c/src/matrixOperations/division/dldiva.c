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



#include "matrixDivision.h" 
#include "lapack.h" 
#include <stdio.h>
#include <string.h>

void dldiva (	double* in1, int lines1, int columns1 ,double* in2, int lines2, int columns2 ,double* out ){
	
	int iExit = 0 ; 
	int info  = 0 ;
	int iWork = 0 ;
	int tMinLinCol1 = 0 ;
	int tMaxLinCol1 = 0 ;
	int temp = 0 ;
	int rank = 0 ;
	
	
	int* pIpiv = NULL ;
	int* pIwork	= NULL;
	int *pJpvt	= NULL;
	
	char cNorm = 0;
	
	double rcond	= 0;
	double anorm	= 0;
	double epsilon  = 0;
	
	double* cpyOfIn1		= NULL ;
	double* modifyIn2		= NULL ;
	double* pDwork			= NULL ;
	
	
/* adaptation of the original code in scilab 
   iWorkMin	= Max(4 * _iCols1, Max(Min(_iRows1, _iCols1) + 3 * _iRows1 + 1,
										2 * Min(_iRows1, _iCols1) + _iRows2)); 
*/
	if (lines1 > columns1)
		{
		 tMinLinCol1 = columns1 ;
		 tMaxLinCol1 = lines1 ;
		}
	else
		{
		 tMinLinCol1 = lines1;
		 tMaxLinCol1 = columns1;
		}
	
	if ( (tMinLinCol1 + 3 * lines1 + 1)  > (2*tMinLinCol1 + lines2))
		temp = tMinLinCol1 + 3 * lines1 + 1;
	else 
		temp = 2*tMinLinCol1 + lines2;
						 
	if ( 4* columns1 > temp )
		iWork =  4* columns1 ;
	else
		iWork = temp ;
	
	pDwork 		= (double*)malloc(sizeof(double) * (unsigned int) iWork);
	
	cpyOfIn1  	= (double*)malloc(sizeof(double) * (unsigned int) lines1 
												 * (unsigned int) columns1);
	modifyIn2 	= (double*)malloc(sizeof(double) * (unsigned int) tMaxLinCol1 
												 * (unsigned int) columns1);
	
	pIpiv		= (int*)malloc(sizeof(int) * (unsigned int) columns1);
	pIwork		= (int*)malloc(sizeof(int) * (unsigned int) columns1);
	pJpvt		= (int*)malloc(sizeof(int) * (unsigned int) columns1);
	
	epsilon 	= getRelativeMachinePrecision() ;
	
	cNorm		= '1';
	anorm		= dlange_ (&cNorm , &lines1, &columns1, in1, &lines1, pDwork);
	
	if ( lines1 == columns1 )
		{
		 cNorm = 'F' ;
		 dlacpy_ ( &cNorm , &columns1 , &columns1, in1, &columns1, cpyOfIn1,
		 		 &columns1 );
		 dgetrf_ (&columns1, &columns1, cpyOfIn1, &columns1, pIpiv, &info);
			
		 if ( info == 0 )
		 	{
		 	 cNorm = '1' ;
			 dgecon_ ( &cNorm, &columns1, cpyOfIn1, &columns1, &anorm,
						 &rcond, pDwork, pIwork, &info);
				
			 if ( rcond > sqrt (epsilon ))
				{
			 	 cNorm = 'N' ;
				 dgetrs_ ( &cNorm, &columns1, &columns2, cpyOfIn1, &columns1,
						   pIpiv, in2, &columns1, &info);
				 cNorm = 'F' ;
				 dlacpy_ ( &cNorm, &columns1, &columns2, in2, &columns1,
						   out, &columns1 );
				 iExit = 1 ;
					
				}	
			}			
		}



	if ( iExit == 0 )
		{
		 rcond = sqrt ( epsilon ) ;
		 cNorm = 'F' ;
		 dlacpy_ ( &cNorm , &lines1, &columns2, in2, &lines1, modifyIn2, &tMaxLinCol1);
		 memset ( pJpvt , 0x00, sizeof(int) * (unsigned int) columns1) ;
		 dgelsy_ ( &lines1, &columns1, &columns2, in1, &lines1 ,
				   modifyIn2 , &tMaxLinCol1, pJpvt, &rcond, &rank,
				   pDwork, &iWork, &info );
		
		 if (info ==0 )
			{
			 cNorm = 'F' ;
			 dlacpy_ ( &cNorm, &columns1, &columns2, modifyIn2, &tMaxLinCol1,
					  out , &columns1 );
				
			}
		}
	
	free (pIpiv) ;
	free (pIwork);
	free (pJpvt);
	free (cpyOfIn1 ) ;
	free (modifyIn2 ) ;
	free ( pDwork ) ;		
}
