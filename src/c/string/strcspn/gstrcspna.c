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
    
    uint8 ind=size1+1;
    int l,m;
    for(m=0;m<size2;m++)
    {
        int tp;
        for(l=0;l<size1;l++)
        {
            if(str2[m]==str1[l])
	    {
            tp=l;
            if(ind>tp)
            {
                ind=tp;
            }
	    }
        }
    }
    if(ind==size1+1)
    {
        ind=size1;
    }
    return ind;
}

