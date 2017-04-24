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
#include <math.h>
#include "base2dec.h"
#include <string.h>

double gbase2decs(char* in,int size,int base)
{
	size-=2;
	int i=0,val=0,j=0;
	double o=0.0;
	for(i=0; in[i]!='\0'; i++)
    	{
	//printf("%c \n",in[i]);
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
	    case 'g':
            case 'G':
                val = 16;
                break;
	    case 'h':
            case 'H':
                val = 17;
                break;
	    case 'i':
            case 'I':
                val = 18;
                break;
	    case 'j':
            case 'J':
                val = 19;
                break;
	    case 'k':
            case 'K':
                val = 20;
                break;
	    case 'l':
            case 'L':
                val = 21;
                break;
	    case 'm':
            case 'M':
                val = 22;
                break;
	    case 'n':
            case 'N':
                val = 23;
                break;
	    case 'o':
            case 'O':
                val = 24;
                break;
	    case 'p':
            case 'P':
                val = 25;
                break;
	    case 'q':
            case 'Q':
                val = 26;
                break;
	    case 'r':
            case 'R':
                val = 27;
                break;
	    case 's':
            case 'S':
                val = 28;
                break;
	    case 't':
            case 'T':
                val = 29;
                break;
	    case 'u':
            case 'U':
                val = 30;
                break;
	    case 'v':
            case 'V':
                val = 31;
                break;
	    case 'w':
            case 'W':
                val = 32;
                break;
	    case 'x':
            case 'X':
                val = 33;
                break;
	    case 'y':
            case 'Y':
                val = 34;
                break;
	    case 'z':
            case 'Z':
                val = 35;
                break;
        }
	o = o + (val * pow(base, size));
        //printf("%f\n",out[0]);
	//o=(int)out[0];
	//o=o/16;
        //printf("%d  %d  %d\n",o,val,(val * pow(16, size)));
        //j++;
        size--;
    }
	return o;
 }
