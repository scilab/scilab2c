/* Copyright (C) 2017 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Organization: FOSSEE, IIT Bombay
 Author: Shamik Guha
 Email: toolbox@scilab.in
*/
#include <stdio.h>
#include <string.h>
#include "strrchr.h"

void gstrrchra(char* str,int size,char* key,int size2,char* out)
{
    int i,j, k=0, pos2;
   
    for (i = 0;i<size;i++)
    {
        if (key[0] == str[i])
        {
            pos2 = i;
        }
    }
	for(j=pos2;j<i;j++)
	{
		out[k]=str[j];
		k++;
	}
}
