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
#include <stdio.h>
#include <string.h>
#include "strchr.h"

void gstrchra(char* str,int size,char* key,int size2,char* out)
{
    int ind,i=0,j,k;
    for(j=0;j<size;j++)
    {
      if(str[j]==key[0])
      {
        ind=j;
        break;
      }
    }
    for(k=ind;k<size;k++)
    {
      out[i]=str[k];
	i++;
    }
}

