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
# include <stdio.h>
# include <math.h>
 
void dfactors(double in,double* out)
{
    int i=0,k=0;
    int n=(int)in;
    while (n%2 == 0)
    {
        //printf("%d ", 2);
	out[k++]=2;
        n = n/2;
    }
 
    for (i = 3; i <= sqrt(n); i = i+2)
    {
        while (n%i == 0)
        {
	    out[k++]=i;
            //printf("%d ", i);
            n = n/i;
        }
    }
 
        if (n > 2)
	{
		out[k++]=n;
        	//printf ("%d ", n);
	}
}
 
