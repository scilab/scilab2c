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
#include<stdio.h>
#include "primes.h"
void dprimess(double in, double* out)
{
     int i=0,j=0,k=0,n=0,counter=0;
     n=(int)in;
     for(i=2;i<=n;i++)
     {
             counter=0;
             for(j=2;j<i;j++)
             {
                     if(i%j==0)
                     {
                               counter=1;
                               break;
                     }
             }
            if(counter==0)
             {
                 out[k++]=i;
		 
             }
     }
}
