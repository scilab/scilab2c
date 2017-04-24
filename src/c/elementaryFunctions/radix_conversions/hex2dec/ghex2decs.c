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
#include "hex2dec.h"
#include <stdio.h>
#include <math.h>

double ghex2decs(char* in,int size)
{
	size-=2;
	int i=0,val=0,j=0;
	double o=0.0;
	for(i=0; in[i]!='\0'; i++)
    	{
/* Finds the decimal equivalent of each hexadecimal digit
*/
        switch(in[i])
        {
            case '0':
                val = 0;
                break;
            case '1':
                val = 1;
                break;
            case '2':
                val = 2;
                break;
            case '3':
                val = 3;
                break;
            case '4':
                val = 4;
                break;
            case '5':
                val = 5;
                break;
            case '6':
                val = 6;
                break;
            case '7':
                val = 7;
                break;
            case '8':
                val = 8;
                break;
            case '9':
                val = 9;
                break;
            case 'a':
            case 'A':
                val = 10;
                break;
            case 'b':
            case 'B':
                val = 11;
                break;
            case 'c':
            case 'C':
                val = 12;
                break;
            case 'd':
            case 'D':
                val = 13;
                break;
            case 'e':
            case 'E':
                val = 14;
                break;
            case 'f':
            case 'F':
                val = 15;
                break;
        }
	o = o + (val * pow(16, size));
        //printf("%f\n",out[0]);
	//o=(int)out[0];
	//o=o/16;
        //printf("%d  %d  %d\n",o,val,(val * pow(16, size)));
        //j++;
        size--;
    }
	return o;
 }
