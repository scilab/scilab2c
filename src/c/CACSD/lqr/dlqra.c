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

/*Function for calculating lqr gain. Refer 'lqr.sci' in scilab source.*/

#include <stdlib.h>
#include "matrixTranspose.h"
#include "matrixMultiplication.h"
#include "eye.h"
#include "matrixInversion.h" 
#include "subtraction.h"
#include "addition.h"
#include "schur.h"
#include "matrixDivision.h" 

void dlqra(double* sys, int sys_rows, int sys_cols, double* Q, double* R, \
            double* S, double* K, double* X)
{
    int no_of_states, no_of_inputs, no_of_outputs, dom = 1;
    int row,col;
    no_of_states = (int)sys[sys_rows*(sys_cols-1)];
    no_of_inputs = (int)sys[sys_rows*(sys_cols-1) + 1];
    no_of_outputs = sys_rows - no_of_states;

    double *A, *B, *C, *D;
    double *B_t, *C_t, *D_t;
    //double *Q, *R, *S;
    double *Ri, *LA, *LE;
    double *BRi, *StRi, *S_t;
    double *buf1, *buf2, *buf3, *buf4, *buf5, *buf6;
    
    int ks;
    double *wsmall, *X12, *phi12;

    A = (double*) malloc (no_of_states*no_of_states*sizeof(double));
    B = (double*) malloc (no_of_states*no_of_inputs*sizeof(double));
    C = (double*) malloc (no_of_states*no_of_outputs*sizeof(double));
    D = (double*) malloc (no_of_inputs*no_of_outputs*sizeof(double));

    B_t = (double*) malloc (no_of_states*no_of_inputs*sizeof(double));
    C_t = (double*) malloc (no_of_states*no_of_outputs*sizeof(double));
    D_t = (double*) malloc (no_of_inputs*no_of_outputs*sizeof(double));

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

    dom = (int)sys[(sys_rows*(sys_cols-2)) + no_of_states];

    dtransposea(B,no_of_states,no_of_inputs,B_t);
    dtransposea(C,no_of_outputs,no_of_states,C_t);
    dtransposea(D,no_of_outputs,no_of_inputs,D_t);

    if(Q == NULL)
    {/*If Q is not provided*/
        Q = (double*) malloc (no_of_states*no_of_states*sizeof(double));
        dmulma(C_t,no_of_states,no_of_outputs,C,no_of_outputs,no_of_states,Q);
    }
    
    if(R == NULL)
    {/*If R is not provided*/
        R = (double*) malloc (no_of_inputs*no_of_inputs*sizeof(double));
        dmulma(D_t,no_of_inputs,no_of_outputs,D,no_of_outputs,no_of_inputs,R);
    }

    if(S == NULL)
    {/*If Q is not provided*/    
        S = (double*) malloc (no_of_inputs*no_of_states*sizeof(double));
        dmulma(D_t,no_of_inputs,no_of_outputs,C,no_of_outputs,no_of_states,S);
    }

    /*Free up unwanted variables*/
    free(C);
    free(C_t);
    free(D);
    free(D_t);
    

    /*Inverse of R*/
    Ri = (double*) malloc(no_of_inputs*no_of_inputs*sizeof(double));
    dinverma(R,Ri,no_of_inputs);

    BRi = (double*) malloc(no_of_states*no_of_inputs*sizeof(double));
    S_t = (double*) malloc(no_of_states*no_of_inputs*sizeof(double));
    StRi = (double*) malloc(no_of_states*no_of_inputs*sizeof(double));

    dtransposea(S,no_of_inputs,no_of_states,S_t);
    dmulma(B,no_of_states,no_of_inputs,Ri,no_of_inputs,no_of_inputs,BRi);
    dmulma(S_t,no_of_states,no_of_inputs,Ri,no_of_inputs,no_of_inputs,StRi);

    buf1 = (double*) malloc(no_of_states*no_of_states*sizeof(double));
    buf2 = (double*) malloc(no_of_states*no_of_states*sizeof(double));

    if(dom == 1)
    {
        /*Setup LA*/
        LA = (double*) malloc(4*no_of_states*no_of_states*sizeof(double));
        /*Block 11  --> A - B*Ri*S*/
        dmulma(BRi,no_of_states,no_of_inputs,S,no_of_inputs,no_of_states,buf1);
        ddiffa(A,no_of_states*no_of_states,buf1,no_of_states*no_of_states,buf2);
        for(col=0; col < no_of_states; col++)
        {
            for(row = 0; row < no_of_states; row++)
            {
                LA[col*2*no_of_states+row] = buf2[col*no_of_states + row];
            }
        }
        
        /*Block 22= Block 11' --> -A' + S'*Ri*B'*/
        dtransposea(buf2,no_of_states,no_of_states,buf1);
        for(col=no_of_states; col < 2*no_of_states; col++)
        {
            for(row = no_of_states; row < 2*no_of_states; row++)
            {
                LA[col*2*no_of_states+row] =  \
                        -1.0*buf1[(col-no_of_states)*no_of_states + (row-no_of_states)];
            }
        }
        
        /*Block 12 --> -B*Ri*B'*/
        dmulma(BRi,no_of_states,no_of_inputs,B_t,no_of_inputs,no_of_states,buf1);
        for(col=no_of_states; col < 2*no_of_states; col++)
        {
            for(row = 0; row < no_of_states; row++)
            {
                LA[col*2*no_of_states+row] = \
                    -1.0*buf1[(col-no_of_states)*no_of_states + row];
            }
        }
        
        /*Block 21 --> -Q + S'*Ri*S*/
        dmulma(StRi,no_of_states,no_of_inputs,S,no_of_inputs,no_of_states,buf1);
        ddiffa(buf1,no_of_states*no_of_states,Q,no_of_states*no_of_states,buf2);
        for(col=0; col < no_of_states; col++)
        {
            for(row = no_of_states; row < 2*no_of_states; row++)
            {
                LA[col*2*no_of_states+row] = \
                        buf2[col*no_of_states + (row-no_of_states)];
            }
        }


        /*Freeup umwanted variables*/
        free(A);    
        //free(Q);
        //free(R);
        free(BRi);
        free(S_t);
        free(StRi);
        free(B);

        /*Find schur decomposition of LA*/
        wsmall = (double*) malloc(4*no_of_states*no_of_states*sizeof(double));
        ks = (int)dschura(LA,2*no_of_states,1,2,wsmall,NULL);

        X12 = (double*) malloc(no_of_states*no_of_states*sizeof(double));
        phi12 = (double*) malloc(no_of_states*no_of_states*sizeof(double));
        
        for(col=0; col < no_of_states; col++)
        {
            for(row = 0; row < no_of_states; row++)
            {
                X12[col*no_of_states + row] = wsmall[col*2*no_of_states+row];
            }
        }

        for(col=0; col < no_of_states; col++)
        {
            for(row = no_of_states; row < 2*no_of_states; row++)
            {
                phi12[col*no_of_states + (row-no_of_states)] = \
                        wsmall[col*2*no_of_states+row];
            }
        }

        drdivma(phi12,no_of_states,no_of_states,X12,no_of_states,no_of_states,X);

        buf3 = (double*) malloc(no_of_inputs*no_of_states*sizeof(double));
        buf4 = (double*) malloc(no_of_inputs*no_of_states*sizeof(double));

        dmulma(B_t,no_of_inputs,no_of_states,X,no_of_states,no_of_states,buf3);
        dadda(buf3,no_of_inputs*no_of_states,S,no_of_inputs*no_of_states,buf4);
        dmulma(Ri,no_of_inputs,no_of_inputs,buf4,no_of_inputs,no_of_states,buf3);

        for(row = 0;row<no_of_inputs*no_of_states;row++)
        {
            K[row] = -buf3[row];
        }

    }
    else if(dom == 2)
    {
        /*Setup LA and LE*/
        LA = (double*) malloc(4*no_of_states*no_of_states*sizeof(double));
        deyea(LA,2*no_of_states,2*no_of_states);
        LE = (double*) malloc(4*no_of_states*no_of_states*sizeof(double));
        deyea(LE,2*no_of_states,2*no_of_states);

        /*Block 11  --> A - B*Ri*S*/
        dmulma(BRi,no_of_states,no_of_inputs,S,no_of_inputs,no_of_states,buf1);
        ddiffa(A,no_of_states*no_of_states,buf1,no_of_states*no_of_states,buf2);
        for(col=0; col < no_of_states; col++)
        {
            for(row = 0; row < no_of_states; row++)
            {
                LA[col*2*no_of_states+row] = buf2[col*no_of_states + row];
            }
        }
        
        /*Block 22= Block 11' --> A' - S'*Ri*B'*/
        dtransposea(buf2,no_of_states,no_of_states,buf1);
        for(col=no_of_states; col < 2*no_of_states; col++)
        {
            for(row = no_of_states; row < 2*no_of_states; row++)
            {
                LE[col*2*no_of_states+row] =  \
                        buf1[(col-no_of_states)*no_of_states + (row-no_of_states)];
            }
        }
        
        /*Block 21 --> -Q + S'*Ri*S*/
        dmulma(StRi,no_of_states,no_of_inputs,S,no_of_inputs,no_of_states,buf1);
        ddiffa(buf1,no_of_states*no_of_states,Q,no_of_states*no_of_states,buf2);
        for(col=0; col < no_of_states; col++)
        {
            for(row = no_of_states; row < 2*no_of_states; row++)
            {
                LA[col*2*no_of_states+row] = \
                        buf2[col*no_of_states + (row-no_of_states)];
            }
        }

        
        /*Block 12 --> B*Ri*B'*/
        dmulma(BRi,no_of_states,no_of_inputs,B_t,no_of_inputs,no_of_states,buf1);
        for(col=no_of_states; col < 2*no_of_states; col++)
        {
            for(row = 0; row < no_of_states; row++)
            {
                LE[col*2*no_of_states+row] = \
                    buf1[(col-no_of_states)*no_of_states + row];
            }
        }


        //free(Q);
        free(BRi);
        free(S_t);
        free(StRi);

        /*Find schur decomposition of LA*/
        wsmall = (double*) malloc(4*no_of_states*no_of_states*sizeof(double));
        ks = (int)dgschura(LA,2*no_of_states,LE,2,2,wsmall,NULL,NULL,NULL);

        X12 = (double*) malloc(no_of_states*no_of_states*sizeof(double));
        phi12 = (double*) malloc(no_of_states*no_of_states*sizeof(double));
        
        for(col=0; col < no_of_states; col++)
        {
            for(row = 0; row < no_of_states; row++)
            {
                X12[col*no_of_states + row] = wsmall[col*2*no_of_states+row];
            }
        }

        for(col=0; col < no_of_states; col++)
        {
            for(row = no_of_states; row < 2*no_of_states; row++)
            {
                phi12[col*no_of_states + (row-no_of_states)] = \
                        wsmall[col*2*no_of_states+row];
            }
        }

        drdivma(phi12,no_of_states,no_of_states,X12,no_of_states,no_of_states,X);

        buf5 = (double*) malloc(no_of_inputs*no_of_inputs*sizeof(double));
        buf6 = (double*) malloc(no_of_inputs*no_of_inputs*sizeof(double));
        buf3 = (double*) malloc(no_of_inputs*no_of_states*sizeof(double));
        buf4 = (double*) malloc(no_of_inputs*no_of_states*sizeof(double));

         /*inv(B'XB+R)*/
        dmulma(B_t,no_of_inputs,no_of_states,X,no_of_states,no_of_states,buf3);
        dmulma(buf3,no_of_inputs,no_of_states,B,no_of_states,no_of_inputs,buf6);
        dadda(buf6,no_of_inputs*no_of_inputs,R,no_of_inputs*no_of_inputs,buf5);
        dinverma(buf5,buf6,no_of_inputs);
        /*B'XA+S*/
        dmulma(B_t,no_of_inputs,no_of_states,X,no_of_states,no_of_states,buf3);
        dmulma(buf3,no_of_inputs,no_of_states,A,no_of_states,no_of_states,buf4);
        dadda(buf4,no_of_inputs*no_of_states,S,no_of_inputs*no_of_states,buf3); 

        dmulma(buf6,no_of_inputs,no_of_inputs,buf3,no_of_inputs,no_of_states,buf4);

        for(row = 0;row<no_of_inputs*no_of_states;row++)
        {
            K[row] = -buf4[row];
        }

        free(A);
        free(B);
        //free(R);
        free(buf5);
        free(buf6);
        
    }

    free(B_t);
    //free(S);
    free(wsmall);
    free(X12);
    free(phi12);
    free(buf1);
    free(buf2);
    free(buf3);
    free(buf4);

}