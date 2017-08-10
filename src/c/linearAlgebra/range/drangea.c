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
#include "range.h"

double drangea(double* inp1, int row, int col, double inp2, double* out1)
{
    double a[row*col], aprod[row*col], dim = 0, u[row*row], utrans[row*row], o[row*row], unew[row*col], otemp[row*col];
    if (inp2 == 0)
    {
	deyea(out1, row, col);
	return row;

    }

    dim = drowcompa(1,inp1,row,col,NULL,0,u);


    for(int i = 0; i < row*row; i++)
	o[i] = u[i];

    for(int i = 0; i < row*col; i++)
	a[i] = inp1[i];

    dtransposea(u,row,row, utrans);

 
    for(int i = 2; i <= inp2; i++)
    {
	
	dmulma(a, row, col, utrans, row, row, aprod);

	    for(int i = 0; i < row*col; i++)
		a[i] = aprod[i];


	double acut[row*(int)dim];

	for(int i = 0; i < row*dim; i++)
	    acut[i] = a[i];



	dim = drowcompa(1,acut,row,(int)dim,NULL,0,unew);

	for(int i = 0; i < row*col; i++)
	    u[i] = unew[i];



	dmulma(u, row, row, o, row, col, otemp);

	for(int i = 0; i < row*col; i++)
	    o[i] = otemp[i];


    }



    for(int i = 0; i < row*col; i++)
	out1[i] = o[i];

    return dim;

}
