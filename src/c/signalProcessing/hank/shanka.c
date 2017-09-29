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

void shanka(int m, int n, float*seq_conv, int row, int col, float*out)
{
    int mr, nr; 
    mr= m* row;
    nr= n* row;
    float ones1[1*nr];
    float ones2[m*1];
    float temp1[mr*1];
    float temp2[1*nr];
    float middle1[m*nr];
    float middle2[m*nr];
    float index[m*nr];
    float final[row*m*nr];


     sonesa(ones1, 1 , nr);
     sonesa(ones2, m , 1);
int j=0;
for(int i=1; i< mr+1; i= i+row)
	{
	temp1[j]=i;
	j++;
	//printf("%d", i);
	}
for(int j=0;j< nr; j++)
	temp2[j]=j;

     skrona(ones1, 1 , nr, temp1, m , 1 , middle1);
     skrona(temp2, 1 , nr, ones2, m , 1 , middle2);

     sadda(middle1, m*nr, middle2, m*nr, index);


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
	printf("%f\t", ones1[k]);
printf("\n");

printf("ones2\n");
for(int k=0; k<m*1; k++)
	printf("%f\t", ones2[k]);
printf("\n");

printf("temp1\n");
for(int k=0; k<m*1; k++)
	printf("%f\t", temp1[k]);
printf("\n");

printf("temp2\n");
for(int k=0; k<nr*1; k++)
	printf("%f\t", temp2[k]);
printf("\n");

printf("middle1\n");
for(int k=0; k<m*nr; k++)
	printf("%f\t", middle1[k]);
printf("\n");

printf("middle2\n");
for(int k=0; k<m*nr; k++)
	printf("%f\t", middle2[k]);
printf("\n");

printf("index\n");
for(int k=0; k<m*nr; k++)
	printf("%f\t", index[k]);
printf("\n");

printf("final\n");
for(int k=0; k<row*m*nr; k++)
	printf("%f\t", final[k]);
printf("\n");
*/

  smatrixa(final, row, m*nr, mr, (row*m*nr)/mr, out);
     
}
