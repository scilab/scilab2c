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

/* Function to convert image object to other color space*/

#include "types.h"
#include "cvcore.h"
#include "cvimgproc.h"
#include <stdio.h>

void imcvGetImgSizes(IplImage* src, double* imgsize)
{
	if(src != NULL)
	{
		imgsize[0] = src->width;
		imgsize[1] = src->height;
	}
	else
	{
		printf("Error with input image");
	}
	
}