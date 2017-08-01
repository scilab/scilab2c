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
#include "uint16.h"
#include "doubleComplex.h"
#include "addition.h"

void znancumsuma(doubleComplex *in, int size, doubleComplex* out)
{
   doubleComplex fin=0;
   


    for (int i = 0; i < size; ++i)

    {
	if(!(isnan(zreals(in[i])))  &&  !(isnan(zimags(in[i])))   )
		{
			fin= zadds(fin, in[i]);
			
		}	
	out[i]= fin;

    }

 
}
