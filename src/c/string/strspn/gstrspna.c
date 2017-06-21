/* Copyright (C) 2017 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Organization: FOSSEE, IIT Bombay
 Author: Ankit Raj
 Email: toolbox@scilab.in
*/
#include<stdio.h>
#include "strspn.h"

int max(int a,int b){
	if(a>b) return a;
	return b;
}
uint8 gstrspna(char *str1,int size1,char *str2,int size2)
{
    int i,j,ct=0,k=0,m=0;
	for(i=0;i<size2;i++)
	{
	    if(str1[0]==str2[i])
	    {
	        k=i;
		ct=0;
		j=0;
	        while(str1[j]==str2[k])
	        {
	            ct++;
	            j++;
	            k++;
		    if(j >= size1) break;
	        }
		if(j==size1)
		{
		ct=ct-1;
		}
		m = max(m,ct);
	    }
	}
return m;
}
/*
int main()
{
    int n1,n2;
    char inp1[100000],inp2[100000];
    printf("Enter the length of the first string");
    scanf("%d",&n1);
    for(int i=0;i<=(n1+1);i++)
    {
      scanf("%c",&inp1[i]);
    }
    printf("Enter the length of the second string");
    scanf("%d",&n2 );
    for(int j=0;j<=(n2+1);j++)
    {
      scanf("%c",&inp2[j]);
    }
    strcspnfn(inp1,n1+1,inp2,n2+1);
}
*/
