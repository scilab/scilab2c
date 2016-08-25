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

/* Function to threshold a gray scale image*/

#include "types.h"
#include "cvcore.h"
#include "cvimgproc.h"
#include <stdio.h>

IplImage* imcvThresholds(IplImage* src, double threshold, double maxvalue, char* type)
{
	dst = imcvCreates(src->width, src->height, src->,1);
	if(strcmp(code,"CV_BGR2GRAY") == 0)
		cvCvtColor(src,dst,CV_RGB2GRAY);

	return 0;
}