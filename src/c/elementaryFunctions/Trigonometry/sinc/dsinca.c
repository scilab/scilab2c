/* Copyright (C) 2016 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Author: Ankit Raj
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
 */
#include<stdio.h>
#include<math.h>
#include "sinc.h"
#define PI 3.14159265358979
void dsinca(double* sample,int size,double* oup)
{
	int j;
	for(j=0;j<size;j++)
	{
	if(sample[j]==0)
	{
	oup[j]=1;
	}
	else
	{
	oup[j]=(sin(sample[j]))/(sample[j]);
	}
	}
}
/*
int main()
{
	int n;
	printf("Enter the length of the array");
	scanf("%d",&n);
	double arr[100000];
	int i;
	printf("Now enter the element of the array");
	for(i=0;i<n;i++)
	{
	scanf("%ld",&arr[i]);
	}
	sinc(arr[],n);
}
*/
