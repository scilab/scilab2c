 /* Copyright (C) 2016 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Author: Siddhesh Wani

 Edited by: Sandeep Gupta
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
 */

 /*This function calculates norms for matrices*/
 /*Acceptable norms are: 1, 2, 'inf', 'fro', */

#include "norm.h"
#include "svd.h"
#include <math.h>
#include <stdio.h>
#include<stdlib.h>

double dnorma (double *in, int row, int col, int norm)
{
	double res = 0, sum = 0;
	int col_count, row_count;
	double *S;
	S = (double *)malloc(min(row,col)*sizeof(double));
	switch (norm)
	{
		case 1:  /*largest column sum*/
			for(col_count = 0; col_count < col; col_count++)
			{
				sum = 0;
				for(row_count = 0; row_count < row; row_count++)
				{
					sum += in[col_count*row+row_count];
				}
				if (sum >= res) 
				 	res = sum;
			}
			break;

		case 2:  /*Largest singular value of the matrix*/
			dsvda(0,in,row,col,0,1,S,NULL,NULL);			
			res = S[0];
			break;

		case 3: /*inf: largest row sum*/
			
			for(row_count = 0; row_count < row; row_count++)
			{
				sum = 0;
				for(col_count = 0; col_count < col; col_count++)
				{
					sum += in[col_count*row + row_count];
				}
				if(sum >= res) 
					res = sum;
			}
			break;	

		case 4: /*Frobenius norm*/
			
			for(row_count = 0; row_count < row; row_count++)
			{
				for(col_count = 0; col_count < col; col_count++)
				{
					sum += in[col_count*row + row_count] * in[col_count*row + row_count];
				}
			}
			res = sqrt(sum);

			break;	
	}


	return res;
}
