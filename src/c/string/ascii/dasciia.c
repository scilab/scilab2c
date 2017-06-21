/* Copyright (C) 2017 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Author: Ankit Raj
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
*/
#include<stdio.h>
#include "ascii.h"
void dasciia(double* inp,int size,char* oup)
{
	int i;
	for(i=0;i<size;i++)
	{
	oup[i]=(char)inp[i];
	}
}
