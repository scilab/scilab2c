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
    int ind,i,j;
    
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

