/* Copyright (C) 2016 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Author: Abhinav Dronamraju
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
*/


#include "nancumsum.h"
#include "types.h"
#include "doubleComplex.h"
#include "uint16.h"
#include "addition.h"

void znancumsumrowa(doubleComplex *in, int row, int col, doubleComplex* out)
{ 
    doubleComplex fin=0;


for(int i=0; i< col; i++)
	{

	for(int j= 0; j< row; j ++)
		{
			if(!(isnan(zreals(in[j+i*row])))  &&  !(isnan(zimags(in[j+i*row]))) )

				{

					fin = zadds(fin, in[j+i*row]);
									


				}	
			out[j+i*row]= fin;
	
		}
	fin=0;

	}
}
