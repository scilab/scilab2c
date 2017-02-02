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

/*Function for declaring state space system*/

#include <stdlib.h>

void dsyslina(double* A, int no_of_states, double* B, int no_of_inputs, \
	double* C, int no_of_outputs, double* D, double* X0, double* out)
{
	int row = 0,col = 0;
    int no_of_cols = no_of_states + no_of_inputs + 1;

    /*Copy matrix A into out matrix*/
    for(row = 0; row < no_of_states; row++)
    {
    	for(col = 0; col < no_of_states; col++)
    	{
    		out[row*no_of_cols + col] = A[row*no_of_states + col];
    	}
    	
    }

    /*Copy matrix B in out matrix*/
    for(row = 0; row < no_of_states; row++)
    {
    	for(col=0; col < no_of_inputs; col++)
    	{
    		out[row * no_of_cols + no_of_states + col] = B[row * no_of_inputs + col];
    	}
    }

    /*Copy matrix C in out matrix*/
    for(row = 0; row < no_of_outputs; row++)
    {
    	for(col=0; col < no_of_states; col++)
    	{
    		out[(no_of_states + row)*no_of_cols + col] = C[row * no_of_states + col];
    	}
    }

	/*Copy matrix D in out matrix*/
	if( D != NULL)
	{
	    for(row = 0; row < no_of_outputs; row++)
		{
	    	for(col=0; col < no_of_inputs; col++)
	    	{
	    		out[(no_of_states+row)*no_of_cols + no_of_states+col] = \
	    			D[row * no_of_inputs + col];
	    	}
	    }
	}
	else
	{
	    for(row = 0; row < no_of_outputs; row++)
		{
	    	for(col=0; col < no_of_inputs; col++)
	    	{
	    		out[(no_of_states+row)*no_of_cols + no_of_states+col] = 0;
	    	}
	    }
	}	

	/*Copy matrix X0 in out matrix*/
	if( X0 != NULL)
	{
	    for(row = 0; row < no_of_states; row++)
		{
	    	out[(row+1)*(no_of_cols) - 1] = X0[row];
	    	
	    }
	}
	else
	{
	    for(row = 0; row < no_of_states; row++)
		{
	    	out[(row+1)*(no_of_cols) - 1] = 0;
	    	
	    }
	}	



}