/* Copyright (C) 2016 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Author: Abhinav Dronamraju
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
*/
 

#include "hank.h"
#include "types.h"
#include "ones.h"
#include "kron.h"
#include "addition.h"
#include "matrix.h"

void dhanka(int m, int n, double*seq_conv, int row, int col, double*out)
{

// Variable Declaration Start
    int mr, nr; 
    mr= m* row;
    nr= n* row;
    double ones1[1*nr];
    double ones2[m*1];
    double temp1[mr*1];
    double temp2[1*nr];
    double middle1[m*nr];
    double middle2[m*nr];
    double index[m*nr];
    double final[row*m*nr];
// Variable Declaration End

// Algorithm Start
     donesa(ones1, 1 , nr);
     donesa(ones2, m , 1);
int j=0;
for(int i=1; i< mr+1; i= i+row)
	{
	temp1[j]=i;
	j++;
	printf("%d", i);
	}
for(int j=0;j< nr; j++)
	temp2[j]=j;

     dkrona(ones1, 1 , nr, temp1, m , 1 , middle1);
     dkrona(temp2, 1 , nr, ones2, m , 1 , middle2);

     dadda(middle1, m*nr, middle2, m*nr, index);


for(int i=0; i< m*nr; i++)
	{

          for(int j=0; j<row; j++)
		{
                   int rank=index[i];
		   final[(i*row)+j]= seq_conv[  j+(rank-1)*row];
			
		}

        }

/*
printf("ones1\n");
for(int k=0; k<1*nr; k++)
	printf("%lf\t", ones1[k]);
printf("\n");

printf("ones2\n");
for(int k=0; k<m*1; k++)
	printf("%lf\t", ones2[k]);
printf("\n");

printf("temp1\n");
for(int k=0; k<m*1; k++)
	printf("%lf\t", temp1[k]);
printf("\n");

printf("temp2\n");
for(int k=0; k<nr*1; k++)
	printf("%lf\t", temp2[k]);
printf("\n");

printf("middle1\n");
for(int k=0; k<m*nr; k++)
	printf("%lf\t", middle1[k]);
printf("\n");

printf("middle2\n");
for(int k=0; k<m*nr; k++)
	printf("%lf\t", middle2[k]);
printf("\n");

printf("index\n");
for(int k=0; k<m*nr; k++)
	printf("%lf\t", index[k]);
printf("\n");

printf("final\n");
for(int k=0; k<row*m*nr; k++)
	printf("%lf\t", final[k]);
printf("\n");
*/

  dmatrixa(final, row, m*nr, mr, (row*m*nr)/mr, out);
//Algorith Ends
     
}
