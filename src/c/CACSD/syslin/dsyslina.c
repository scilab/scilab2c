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
/*output structure is as follows :
 | A B X0 |
 | C D dom|
 where dom is 1 for 'c' and 2 for 'd'
 Another column is appended with no_of_states and no_inputs as its elements */



#include <stdlib.h>

void dsyslina(char* dom, double* A, int no_of_states, double* B, int no_of_inputs, \
	double* C, int no_of_outputs, double* D, double* X0, double* out)
{
	int row = 0,col = 0;
    int no_of_cols = no_of_states + no_of_inputs + 2;
    int no_of_rows = no_of_states + no_of_outputs;
    /*Copy matrix A into out matrix*/
    for(col = 0; col < no_of_states; col++)
    {
    	for(row = 0; row < no_of_states; row++)
    	{
    		out[col*no_of_rows + row] = A[col*no_of_states + row];
    	}
    	
    }

    /*Copy matrix B in out matrix*/
    for(col=0; col < no_of_inputs; col++)
    {
    	for(row = 0; row < no_of_states; row++)
    	{
    		out[col * no_of_rows + no_of_states*no_of_rows + row]  \
    				= B[col * no_of_states + row];
    	}
    }

    /*Copy matrix C in out matrix*/
    for(col=0; col < no_of_states; col++)
    {
    	for(row = 0; row < no_of_outputs; row++)
    	{
    		out[no_of_states + (col*no_of_rows) + row] = C[col * no_of_outputs + row];
    	}
    }

	/*Copy matrix D in out matrix*/
	if( D != NULL)
	{
	    for(col=0; col < no_of_inputs; col++)
		{
	    	for(row = 0; row < no_of_outputs; row++)
	    	{
	    		out[(no_of_states+col)*no_of_rows + no_of_states +  row] = \
	    			D[col * no_of_outputs + row];
	    	}
	    }
	}
	else
	{
	    for(col=0; col < no_of_inputs; col++)
		{
	    	for(row = 0; row < no_of_outputs; row++)
	    	{
	    		out[(no_of_states+col)*no_of_rows + no_of_states +  row] = 0;
	    	}
	    }
	}	

	/*Copy matrix X0 in out matrix*/
	if( X0 != NULL)
	{
	    for(row = 0; row < no_of_states; row++)
		{
	    	out[(no_of_rows*(no_of_cols-1))+row] = X0[row];
	    }
	}
	else
	{
	    for(row = 0; row < no_of_states; row++)
		{
	    	out[(no_of_rows*(no_of_cols-1))+row] = 0;
	    }
	}	

	if(*dom == 'c')
		out[(no_of_rows*(no_of_cols-2))	+ no_of_states] = 1; 
	else if(*dom == 'd')
		out[(no_of_rows*(no_of_cols-2)) + no_of_states] = 2;

	/*Insert no of states and inputs in last column*/
	out[(no_of_rows*(no_of_cols-1))] = no_of_states;
	out[(no_of_rows*(no_of_cols-1))+1] = no_of_inputs; 

}