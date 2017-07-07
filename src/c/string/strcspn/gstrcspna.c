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
#include<string.h>
#include "strcspn.h"
uint8 gstrcspna(char *str1,int size1,char *str2,int size2)
{
    int ind,i,j;;
   
    for(i=0;i<=size1;i++)
    {
      for(j=0;j<=size2;j++)
      {
        if(str2[j]==str1[i])
        {
          ind=j;
          break;
        }
      }
    }
    return (ind+1);
}
/*int main()
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
