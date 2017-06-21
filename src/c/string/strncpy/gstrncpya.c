/* Copyright (C) 2017 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Organization: FOSSEE, IIT Bombay
 Author: Ankit Raj
 Email: toolbox@scilab.in
*/
#include<stdio.h>
#include "strncpy.h"
void gstrncpya(char *str,int size,double key,char *oup)
{
    int j;
    char c;
    for(j=0;j<key;j++)
    {
	c=str[j];
      oup[j]=c;
    }
}


