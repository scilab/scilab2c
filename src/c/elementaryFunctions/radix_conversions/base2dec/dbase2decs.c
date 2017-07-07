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
#include <string.h>
#include "base2dec.h"
#include <stdio.h>
#include <math.h>

double dbase2decs(double in,int base)
{
	int n=0,rem=0, base1=1;
	double out=0.0;
	n=(int)in;
	while (n!=0)
        {
    	    rem = n%10;
	    out = out + (rem * base1);
            n = n / 10 ;
            base1 = base1 * base;
        }
	return out;
}


