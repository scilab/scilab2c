/* Copyright (C) 2016 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Author: Brijesh Gupta C R
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "erfinv.h"

# define PI 3.1415927

float serfinvs (float inp1)
{
    float a[] = {0.88622692374517353,-1.6601283962374516,0.92661860147244357,-0.14110320437680104};	//Coefficients for the formula to calculate inverse error
    float b[] = {-2.13505380615258078,1.46060340345661088,-0.33198239813321595,0.01197270616590528};	//Coefficients for the formula to calculate inverse error
    float c[] = {-1.994216456587148,-1.87267416351196,3.60874665878559364,1.82365845766309853};		//Coefficients for the formula to calculate inverse error
    float d[] = {3.74146294065960872,1.81848952562894617};						//Coefficients for the formula to calculate inverse error

    if ((inp1 > 1) || (inp1 < -1))
    {
	double na = 0.0/0.0;	
	return (float)na;
    }    
    if ((inp1 >= -0.7) && (inp1 <= 0.7))
    {
        float sq = inp1 * inp1;
        return (inp1 * (((a[3]*sq+a[2]) * sq+a[1]) * sq+a[0]) /  ((((b[3]*sq+b[2]) * sq+b[1]) * sq+b[0]) * sq+1));	//Inverse error formula
    }

    else if ((inp1 > 0.7) && (inp1 < 1))
    {
        float z = sqrt(-log((1-inp1)/2));
        return ((((c[3]*z+c[2]) * z+c[1]) * z+c[0]) / ((d[1]*z+d[0]) * z+1));		//Inverse error formula
    }

    else if ((inp1 > -1) && (inp1 < 0.7))
    {
        float z = sqrt(-log((1+inp1)/2));
        return (-(((c[3]*z+c[2]) * z+c[1]) * z+c[0]) / ((d[1]*z+d[0]) * z+1));		//Inverse error formula
    }
}

