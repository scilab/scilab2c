/* Copyright (C) 2016 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Author: Siddhesh Wani
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
*/

#include "matrixTranspose.h"

void i8transposea ( int8* in , int lines , int columns, int8* out ){
	
	int i    = 0 ;
	int j    = 0 ;
	
	for(i = 0 ; i <  lines ; i++)
	{
		for(j = 0 ; j <  columns ; j++)

		out[j+i*columns] = (int8)in[i+j*lines];
	}
	
}
