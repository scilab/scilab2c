/* Copyright (C) 2017 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Organization: FOSSEE, IIT Bombay
 Author: Brijesh Gupta C R
 Email: toolbox@scilab.in
*/
#include <stdio.h>
#include <string.h>
#include     "math.h"
#include     "window.h"
#include "ones.h"
#include "abs.h"
#define PI 3.1415927

void dwindowa(char* inp1, int size, double n, double* out)
{

    double no2, un[(int)n], xt[(int)n];

    no2 = (n-1)/2;
    for(int i = 0; i < n; i++)
	xt[i] = -no2 + i;

    donesa(un, 1, n);


    char tr[] = "tr", re[] = "re", hm[] = "hm", hn[] = "hn";
    double flagtr = 0;

    if(strncmp(re, inp1,2) == 0)
    {
	for(int i = 0; i < n; i++)
	    out[i] = un[i];
    }




    if(strncmp(tr, inp1,2) == 0)
    {
	for(int i = 0; i < n; i++)
	    out[i] = un[i] - (2 * dabss(xt[i])) / (n+1);
    }



    if(strncmp(hm, inp1,2) == 0)
    {
	for(int i = 0; i < n; i++)
	    out[i] = 0.54 * un[i] + 0.46 * cos(2*PI*xt[i]/(n-1));
    }


    if(strncmp(hn, inp1,2) == 0)
    {
	for(int i = 0; i < n; i++)
	    out[i] = 0.5 * un[i] + 0.5 * cos(2*PI*xt[i]/(n-1));
    }



}
