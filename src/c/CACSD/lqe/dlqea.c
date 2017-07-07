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

/*Function for calculating lqe gain. Refer 'lqe.sci' in scilab source.*/

#include <stdlib.h>
#include "lqr.h"
#include "matrixTranspose.h"

void dlqea(double* sys, int sys_rows, int sys_cols, double* X, double* K)
{

	double *sys_lqr, *K_lqr;
	int row, col;
	int sys_lqr_rows = sys_cols-2;
	int sys_lqr_cols = sys_rows + 2;
	int no_of_ip, no_of_st;

	no_of_ip = (int)sys[sys_rows*(sys_cols-1)+1];
	no_of_st = (int)sys[sys_rows*(sys_cols-1)];
	
	/*Transpose given system and calculate LQR with new system. Transpose result
	got from LQR*/

	sys_lqr = (double*) malloc(sys_lqr_rows*sys_lqr_cols*sizeof(double));

	for(col = 0; col<sys_lqr_cols; col++)
	{
		for(row = 0; row<sys_lqr_rows; row++)
		{
			sys_lqr[col*sys_lqr_rows+row] = sys[row*sys_rows+col];

		}
	}

	/*Copy initial states and type of system*/
	for(row = 0; row<sys_lqr_rows; row++)
	{
		sys_lqr[sys_lqr_rows*(sys_lqr_cols-2) + row] = sys[sys_rows*(sys_cols-2)+row];
	}

	/*Copy no of states and no of inputs*/
	sys_lqr[sys_lqr_rows*(sys_lqr_cols-1)] = no_of_st;
	sys_lqr[sys_lqr_rows*(sys_lqr_cols-1)+1] = sys_rows - no_of_st;

	/*Calculate LQR gain*/
	K_lqr = (double*) malloc(no_of_ip*no_of_st*sizeof(double));
<<<<<<< HEAD
	dlqra(sys_lqr,sys_lqr_rows,sys_lqr_cols,NULL,NULL,NULL,X,K_lqr);
=======
	dlqra(sys_lqr,sys_lqr_rows,sys_lqr_cols,X,K_lqr);
>>>>>>> 9e5793a7b05b23e6044a6d7a9ddd5db39ba375f0

	dtransposea(K_lqr,sys_rows - no_of_st,no_of_st,K);
}