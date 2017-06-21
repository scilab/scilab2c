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
#include <stdio.h>
#include "strrev.h"

void gstrreva(char* str,int size,char* out)
{
    int i=-1,j=0;
   
    while(str[++i]!='\0');

    while(i>=0)
     out[j++] = str[--i];

    out[j]='\0';
  
}
