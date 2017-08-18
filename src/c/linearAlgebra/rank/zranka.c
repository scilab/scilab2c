/* Copyright (C) 2017 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Author: Abhinav Dronamraju
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
 */

/*Funtion to find inverse condition number of square matrix*/

#include "lapack.h"
#include "stdlib.h"
#include "stdio.h"
#include "string.h"
#include "rank.h"
#include "svd.h"
#include "doubleComplex.h"
#include "addition.h"

#define eps 2.22044604925e-16 

doubleComplex zranka(doubleComplex* in1, int rows, int cols)
{
 doubleComplex out1[rows*rows];
 doubleComplex out2[rows*cols];
 doubleComplex out3[cols*cols];
 doubleComplex rk=0;


    zsvda(in1,rows,cols, 0, 3, out1, out2, out3);

double tol = (double)max(rows,cols)*eps*zreals(out2[0]) ;

/*
for(int i=0; i< rows*rows; i++)
	printf("%lf + i*%lf \t", zreals(out1[i]), zimags(out1[i]));
printf("\n");

for(int i=0; i< rows*cols; i++)
	printf("%lf + i*%lf \t", zreals(out2[i]), zimags(out2[i]));
printf("\n");

for(int i=0; i< cols*cols; i++)
	printf("%lf + i*%lf \t", zreals(out3[i]), zimags(out3[i]));
printf("\n");

*/

if(rows<cols)
{
		for(int i=0;i< rows;i++)
			{
				if( zreals(out2[i+i*rows]) > tol)
				{
				rk = zadds(rk,1);	
				}
			}

}

else
{

			for(int i=0;i< cols;i++)
			{
				if( zreals(out2[i+i*rows]) > tol)
				{
				rk = zadds(rk,1);	
				}
			}



}

 return rk;

} 
