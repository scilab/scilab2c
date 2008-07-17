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


void srdiva (	float* in1, int lines1, int columns1 ,
			    float* in2, int lines2, int columns2 ,
			 	float* out ){
	
/* creation of all temp variable , maybe some of them are not accurate and could be deleted 
**/
	int iexit    = 0 ; 
	int iwork    = 0 ;
	int  info    = 0 ;
	int  imax    = 0 ;
	/*int rank =     0 ;*/
	
	int tMinLinCol1  = 0 ;
	int temp = 0;
	
	int i = 0 , j = 0 ,ij = 0 ,ji = 0;
					 
					 
	int* pIpiv   = 			(int*) malloc( sizeof(int) * (unsigned int) columns1);
	int* pIwork  = 			(int*) malloc( sizeof(int) * (unsigned int) columns1);
	/*int* pJpvt	 =			(int*) malloc( sizeof(int) * (unsigned int) lines1);*/
	
	double* work =	 		NULL;
	double anorm = 			0;					 
	double rcond = 0 ; 
	double epsilon =  getRelativeMachinePrecision() ;



					 
	float* transpOfIn1 = 	(float*) malloc(sizeof(float) * (unsigned int)  lines1 * (unsigned int)  columns1);
	float* transpOfIn2 = 	(float*) malloc(sizeof(float) * (unsigned int)  lines2 * (unsigned int)  columns2);
					 
	float* copyOfTransIn1 = 	(float*) malloc( sizeof(float) * (unsigned int)  lines1 * (unsigned int)  columns1);
					 

					 					 
	if (lines1 > columns1)
		tMinLinCol1 = columns1 ;
	else
		tMinLinCol1 = lines1;
					 
	if ( (tMinLinCol1 + 3 * lines1 + 1)  > (2*tMinLinCol1 + lines2))
		temp = tMinLinCol1 + 3 * lines1 + 1;
	else 
		temp = 2*tMinLinCol1 + lines2;
						 
	if ( 4* columns1 > temp )
		iwork =  4* columns1 ;
	else
		iwork = temp ;
	
	work  =	(double*) malloc (sizeof(double) *(unsigned int)  iwork );

	anorm = getOneNorm( &lines1, &columns1 , (double* ) in1 , work);
				 

/* end of allocation area*/
					 

	stransposea ( in1, lines1, columns1, transpOfIn1);
	stransposea ( in2, lines2, columns2, transpOfIn2)	;				 
					 
	if ( lines1 == columns1 )
	{													
		srowcata ( in1, lines1, columns1, NULL, 0 , 0 , copyOfTransIn1 ) ;
		
		
		/*/ put here algo of LU fact of in1 dgetrf ( &columns1 , &columns1 , in1 , &columns1 , pIpiv , &info )
		//return value in pIpiv*/
		dgetrf_ ( &columns1 , &columns1 , (double*) in1 , &columns1 , pIpiv , &info );
		
		if ( info == 0 )
		{
			/*/to get 1-norm of in1 put here algo dgecon  which return  rcond*/
			dgecon_("1" , &columns1, (double*) copyOfTransIn1 , &columns1, &anorm,
					&rcond, work, pIwork, &info);
			
			if ( rcond > sqrt(epsilon ))
				{/* put here algo to resolv linear equation  in1 * X = in2  , the return value go in in2
				// put here algo to copy in2 in out */
				resolveSystemLinear (&columns1, &lines2,(double*) copyOfTransIn1, pIpiv,
									 (double* )transpOfIn2, &info)	;
				stransposea ( transpOfIn2 , columns2 , lines2 , out)	;	
				iexit = 1;
				}
			
		}
						 

	}
				
	if ( iexit== 0)
	{
		rcond   = sqrt(epsilon );
		if (lines1 < columns1)
			imax = columns1 ;
		else
			imax = lines1;

		
/* if you uncomment this function you will get a fabulous random number generator 
   actually the problem come from the convertion from float* to double*
   that also cause the free() of these cast variables to crash * */
	/*	dgelsy_ (&columns1, &lines1, &lines2, (double*) transpOfIn1 , &columns1,
				  (double*) transpOfIn2, &imax, pJpvt, &rcond, &rank, work,
				   &iwork, &info);*/
		

			
			for(j = 0 ; j < lines1 ; j++)
				{
					for(i = 0 ; i < lines2 ; i++)
						{
						ij = i + j * lines2;
						if ( lines1 > columns1 )
							ji = j + i *lines1 ;
						else 
							ji = j + i *columns1; 
						out[ij]	= transpOfIn2[ji];
						}
				}
			
	

		
	

	}
	 
			 

	/*  then we free all the allocated memory */		
					 
	free ( pIpiv ) ;
	free ( pIwork) ;
	free ( work )  ;
					 
	/* the cast from float* to double* make these 3 functions crashing */
	free (transpOfIn1) ;
	free (transpOfIn2) ;	
	free (copyOfTransIn1);
				 
}

