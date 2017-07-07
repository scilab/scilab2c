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
#include <ctype.h>
#include "convstr.h"


void gconvstrs(char* in, int size,char* flag,int size2,char* out)
{
	int i=0;//temp=0;
	for(i=0;i<size;i++)
	{
		//temp= in[i];
		if(flag[0]=='l' || flag[0]=='L')
		{	//temp=temp + 32;
			out[i]=tolower(in[i]);
		}
		else if(flag[0]=='u' || flag[0]=='U')
		{
			//temp=temp - 32;
			out[i]=toupper(in[i]);
		}
	}
}
