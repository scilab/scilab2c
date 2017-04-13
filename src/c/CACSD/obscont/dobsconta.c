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

/*Function for calculating observer controller. 
  Refer 'obscont.sci' in scilab source.*/

#include <stdlib.h>
#include "matrixMultiplication.h"
#include "addition.h"

void dobsconta(double* sys, int sys_rows, int sys_cols, double* Kc, double* Kf, \
			double *K, double *r)
{
	int no_of_states, no_of_inputs, no_of_outputs, dom = 1;
    int row,col;
    no_of_states = sys[sys_rows*(sys_cols-1)];
    no_of_inputs = sys[sys_rows*(sys_cols-1) + 1];
    no_of_outputs = sys_rows - no_of_states;

 	int no_of_cols;
    int no_of_rows;
   
    double *A, *B, *C, *D;
    double *BKc, *KfC, *KfD,*DKc;
    double *buf, *buf1, *buf2;

    A = (double*) malloc (no_of_states*no_of_states*sizeof(double));
    B = (double*) malloc (no_of_states*no_of_inputs*sizeof(double));
    C = (double*) malloc (no_of_states*no_of_outputs*sizeof(double));
    D = (double*) malloc (no_of_inputs*no_of_outputs*sizeof(double));

	BKc = (double*) malloc (no_of_states*no_of_states*sizeof(double));
	KfC = (double*) malloc (no_of_states*no_of_states*sizeof(double));
	KfD = (double*) malloc (no_of_states*no_of_inputs*sizeof(double));
	DKc = (double*) malloc (no_of_outputs*no_of_states*sizeof(double));
	buf = (double*) malloc (no_of_states*no_of_states*sizeof(double));
	buf1 = (double*) malloc (no_of_states*no_of_inputs*sizeof(double));
	buf2 = (double*) malloc (no_of_outputs*no_of_states*sizeof(double));

	/*Get A from system matrix*/
    for(col = 0; col < no_of_states; col++)
    {
        for(row = 0; row < no_of_states; row++)
        {
            A[col*no_of_states + row] = sys[col*sys_rows + row];
        }
    }

    /*Get matrix B from system matrix*/
    for(col=0; col < no_of_inputs; col++)
    {
        for(row = 0; row < no_of_states; row++)
        {
            B[col * no_of_states + row] = \
                sys[col * sys_rows + no_of_states*sys_rows + row];
        }
    }

    /*Get matrix C from system matrix*/
    for(col=0; col < no_of_states; col++)
    {
        for(row = 0; row < no_of_outputs; row++)
        {
            C[col * no_of_outputs + row] = \
                sys[no_of_states + (col*sys_rows) + row];
        }
    }

    /*Get matrix D from system matrix*/
    for(col=0; col < no_of_inputs; col++)
    {
        for(row = 0; row < no_of_outputs; row++)
        {
            D[col * no_of_outputs + row] = \
                sys[(no_of_states+col)*sys_rows + no_of_states +  row];
        }
    }

    dom = sys[(sys_rows*(sys_cols-2)) + no_of_states];

    dmulma(B,no_of_states,no_of_inputs,Kc,no_of_inputs,no_of_states,BKc);
    dmulma(Kf,no_of_states,no_of_outputs,C,no_of_outputs,no_of_states,KfC);
    dmulma(Kf,no_of_states,no_of_outputs,D,no_of_outputs,no_of_inputs,KfD);

    /*Variables are reused to save memory*/
    /*A+BKc*/
    dadda(A,no_of_states*no_of_states,BKc,no_of_states*no_of_states,buf);
    /*A+BKc+KfC*/
    dadda(KfC,no_of_states*no_of_states,buf,no_of_states*no_of_states,A);
    /*KfDKc*/
    dmulma(KfD,no_of_states,no_of_inputs,Kc,no_of_inputs,no_of_states,BKc);
    /*A+BKc+KfC+KfDKc*/
    dadda(A,no_of_states*no_of_states,BKc,no_of_states*no_of_states,buf);
   
    /*Dimensions of K*/
    no_of_cols = no_of_states + no_of_inputs + 2;
    no_of_rows = no_of_states + no_of_outputs;

    if(r == NULL)
    {
  	    /*Dimensions of K*/
	    no_of_cols = no_of_states + no_of_outputs + 2;
	    no_of_rows = no_of_states + no_of_inputs;

    	for(col = 0; col < no_of_states; col++)
	    {
	    	for(row = 0; row < no_of_states; row++)
	    	{
	    		K[col*no_of_rows + row] = buf[col*no_of_states + row];
	    	}
	    	
	    }

	    /*Copy matrix -Kf in out matrix*/
	    for(col=0; col < no_of_outputs; col++)
	    {
	    	for(row = 0; row < no_of_states; row++)
	    	{
	    		K[col * no_of_rows + no_of_states*no_of_rows + row]  \
	    				= -1.0*Kf[col * no_of_states + row];
	    	}
	    }

	    /*Copy matrix Kc in out matrix*/
	    for(col=0; col < no_of_states; col++)
	    {
	    	for(row = 0; row < no_of_inputs; row++)
	    	{
	    		K[no_of_states + (col*no_of_rows) + row] = Kc[col * no_of_inputs + row];
	    	}
	    }

	    K[(no_of_rows*(no_of_cols-2))	+ no_of_states] = dom; 
    	/*Insert no of states and inputs in last column*/
		K[(no_of_rows*(no_of_cols-1))] = no_of_states;
		K[(no_of_rows*(no_of_cols-1))+1] = no_of_outputs;
		/*For K, no_of_outputs is no of inputs*/ 

    }
    else
    {
    	/*Dimensions of K*/
	    no_of_cols = no_of_states + no_of_inputs + no_of_outputs + 2;
    	no_of_rows = no_of_states + no_of_outputs + no_of_inputs;

    	r[0] = no_of_outputs;
    	r[1] = no_of_inputs;

    	for(col = 0; col < no_of_states; col++)
	    {
	    	for(row = 0; row < no_of_states; row++)
	    	{
	    		K[col*no_of_rows + row] = buf[col*no_of_states + row];
	    	}
	    	
	    }

	    /*Copy matrix -Kf in out matrix*/
	    for(col=0; col < no_of_outputs; col++)
	    {
	    	for(row = 0; row < no_of_states; row++)
	    	{
	    		K[col * no_of_rows + no_of_states*no_of_rows + row]  \
	    				= -1.0*Kf[col * no_of_states + row];
	    	}
	    }

	    /*B+Kf*D*/
	    dadda(B,no_of_states*no_of_inputs,KfD,no_of_states*no_of_inputs,buf1);

	    /*Copy matrix (B+KfD) in out matrix*/
	    for(col=0; col < no_of_inputs; col++)
	    {
	    	for(row = 0; row < no_of_states; row++)
	    	{
	    		K[col * no_of_rows + (no_of_states+no_of_outputs)*no_of_rows \
	    			 + row] = buf1[col * no_of_states + row];
	    	}
	    }

	    /*DKc*/
	    dmulma(D,no_of_outputs,no_of_inputs,Kc,no_of_inputs,no_of_states,DKc);
	    /*C+DKc*/
	    dadda(C,no_of_outputs*no_of_states,DKc,no_of_outputs*no_of_states,buf2);

	    /*Copy matrix Kc in out matrix*/
	    for(col=0; col < no_of_states; col++)
	    {
	    	for(row = 0; row < no_of_inputs; row++)
	    	{
	    		K[no_of_states + (col*no_of_rows) + row] \
	    				= Kc[col * no_of_inputs + row];
	    	}
	    }

	    /*Copy -(C+DKc) in out matrix*/
		for(col=0; col < no_of_states; col++)
	    {
	    	for(row = 0; row < no_of_outputs; row++)
	    	{
	    		K[(no_of_states+no_of_inputs) + (col*no_of_rows) + row] \
	    				= -1.0*buf2[col * no_of_outputs + row];
	    	}
	    }

	    /*Block 22 for K*/
		for(col=0; col < no_of_outputs; col++)
	    {
	    	for(row = 0; row < no_of_inputs; row++)
	    	{
	    		K[no_of_states + (col*no_of_rows) + no_of_states*no_of_rows \
	    			 + row] = 0;
	    	}
	    }	    

	    for(col=0; col < no_of_inputs; col++)
	    {
	    	for(row = 0; row < no_of_inputs; row++)
	    	{
	    		if(row == col)
	    			K[no_of_states + (col*no_of_rows) + \
	    				(no_of_states+no_of_outputs)*no_of_rows + row] = 1;
	    		else
	    			K[no_of_states + (col*no_of_rows) + \
	    				(no_of_states+no_of_outputs)*no_of_rows + row] = 0;
	    	}
	    }	    

		for(col=0; col < no_of_outputs; col++)
	    {
	    	for(row = 0; row < no_of_outputs; row++)
	    	{
	    		if(row == col)
	    			K[no_of_states + no_of_inputs + (col*no_of_rows) + \
	    				no_of_states*no_of_rows + row] = 1;
	    		else
	    			K[no_of_states + no_of_inputs + (col*no_of_rows) + \
	    				no_of_states*no_of_rows + row] = 0;
	    	}
	    }	    


	    for(col=0; col < no_of_inputs; col++)
	    {
	    	for(row = 0; row < no_of_outputs; row++)
	    	{
	    		K[no_of_states + no_of_inputs + (col*no_of_rows) + \
	    				(no_of_states+no_of_outputs)*no_of_rows + row] \
	    				= -1.0*D[col*no_of_inputs + row];
	    	}
	    }	    


    	K[(no_of_rows*(no_of_cols-2))+ no_of_states] = dom; 
    	/*Insert no of states and inputs in last column*/
		K[(no_of_rows*(no_of_cols-1))] = no_of_states;
		K[(no_of_rows*(no_of_cols-1))+1] = no_of_outputs + no_of_inputs;
		/*For K, (no_of_outputs+no_of_inputs) is no of inputs*/ 


    }


    free(A);
    free(B);
    free(C);
    free(D);
    free(BKc);
    free(KfC);
    free(KfD);
    free(DKc);
    free(buf);
    free(buf1);
    free(buf2);
}
