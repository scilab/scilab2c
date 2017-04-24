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
#include <math.h>
#include "factorial.h"

double dfactorials(double in)
{
	int i,n;
	long long int fact=1;
	n=(int)in;
        if (n < 0)
        printf("Error! Factorial of a negative number doesn't exist.");
	else if (n>170)
		printf("Inf");
        else
        {
           for(i=1; i<=n; i++)
           {
              fact=fact*i;
	      //printf("\n %lld",fact);
           }
        }

    return fact;
}
