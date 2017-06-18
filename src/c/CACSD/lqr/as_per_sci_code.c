
    sizeBA = 2*no_of_states + no_of_inputs;
    BigE = (double*) malloc (sizeBA*sizeBA*sizeof(double));
    BigA = (double*) malloc (sizeBA*sizeBA*sizeof(double));

    /*Setup BigE*/
    deyea(BigE,sizeBA,sizeBA);

    for(row = no_of_states*2; row<sizeBA; row++)
    {
    	BigE[row*sizeBA+row] = 0;
    }

    /*Setup BigA*/
    for(col=0; col < no_of_states; col++)
	{
    	for(row = 0; row < no_of_states; row++)
    	{
    		BigA[col*sizeBA+row] = A[col*no_of_states + row];
    	}
    }

    for(col=no_of_states; col < no_of_states*2; col++)
	{
    	for(row = 0; row < no_of_states; row++)
    	{
    		BigA[col*sizeBA+row] = 0;
    	}
    }

    for(col=2*no_of_states; col < sizeBA; col++)
	{
    	for(row = 0; row < no_of_states; row++)
    	{
    		BigA[col*sizeBA+row] = B[col*no_of_states + row];
    	}
    }

	for(col=0; col < no_of_states; col++)
	{
    	for(row = no_of_states; row < 2*no_of_states; row++)
    	{
    		BigA[col*sizeBA+row] = -1.0*Q[col*no_of_states + row];
    	}
    }

    for(col=no_of_states; col < 2*no_of_states; col++)
	{
    	for(row = no_of_states; row < 2*no_of_states; row++)
    	{
    		BigA[col*sizeBA+row] = -1.0*A[row*no_of_states + col];
    	}
    }

    for(col=2*no_of_states; col < sizeBA; col++)
	{
    	for(row = no_of_states; row < 2*no_of_states; row++)
    	{
    		BigA[col*sizeBA+row] = -1.0*S[row*no_of_inputs + col];
    	}
    }

    for(col=0; col < no_of_states; col++)
	{
    	for(row = 2*no_of_states; row < sizeBA; row++)
    	{
    		BigA[col*sizeBA+row] = S[col*no_of_inputs + row];
    	}
    }

    for(col=no_of_states; col < 2*no_of_states; col++)
	{
    	for(row = 2*no_of_states; row < sizeBA; row++)
    	{
    		BigA[col*sizeBA+row] = B[row*no_of_inputs + col];
    	}
    }


    for(col=2*no_of_states; col < sizeBA; col++)
	{
    	for(row = 2*no_of_states; row < sizeBA; row++)
    	{
    		BigA[col*sizeBA+row] = R[col*no_of_inputs + row];
    	}
    }

    /*Free up unwanted variables*/
    free(A);
    free(C);
    free(C_t);
    free(D);
    free(D_t);
    free(Q);

    /*Inverse of R*/
    Ri = (double*) malloc(no_of_inputs*no_of_inputs*sizeof(double));
    dinverma(R,Ri,no_of_inputs);

    /*Setup Left*/
    Left = (double*) malloc(sizeBA*sizeBA*sizeof(double));
    deyea(Left,sizeBA,sizeBA);

    BRi = (double*) malloc(no_of_states*no_of_inputs*sizeof(double));
    S_t = (double*) malloc(no_of_states*no_of_inputs*sizeof(double));
    StRi = (double*) malloc(no_of_states*no_of_inputs*sizeof(double));

    dtransposea(S,no_of_inputs,no_of_states,S_t);
    dmula(B,no_of_states,no_of_inputs,Ri,no_of_inputs,no_of_inputs,BRi);
    dmula(S_t,no_of_states,no_of_inputs,Ri,no_of_inputs,no_of_inputs,StRi);

    for(col=2*no_of_states; col < sizeBA; col++)
	{
    	for(row = 0; row < no_of_states; row++)
    	{
    		Left[col*sizeBA+row] = -1.0*BRi[col*no_of_states + row];
    	}
    }

    for(col=2*no_of_states; col < sizeBA; col++)
	{
    	for(row = no_of_states; row < 2*no_of_states; row++)
    	{
    		Left[col*sizeBA+row] = StRi[col*no_of_states + row];
    	}
    }

    for(col=2*no_of_states; col < sizeBA; col++)
	{
    	for(row = 2*no_of_states; row < sizeBA; row++)
    	{
    		Left[col*sizeBA+row] = Ri[col*no_of_states + row];
    	}
    }

    /*Freeup umwanted variables*/
    free(R);
    free(BRi);
    free(S_t);
    free(StRi);
    free(B);

    LA = (double*) malloc(sizeBA*sizeBA*sizeof(double));
    dmula(Left,sizeBA,sizeBA,BigA,sizeBA,sizeBA,LA);