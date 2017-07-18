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


#include "mad.h"
#include "types.h"
#include "doubleComplex.h"
#include "mean.h"
#include "addition.h"
#include "abs.h"
#include "subtraction.h"
#include "division.h"

doubleComplex zmada(doubleComplex *in, int size)
{
     doubleComplex fin = DoubleComplex(0,0); doubleComplex mean;

	mean= zmeana(in, size);

	for(int i=0; i< size; i++)
		{

			fin = zadds(fin, zabss(zdiffs(mean,in[i])));

		}

fin= zrdivs(fin,size);


    return fin;
}
