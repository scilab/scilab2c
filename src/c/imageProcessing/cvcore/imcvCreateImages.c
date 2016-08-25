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

/* Function to create openCV image object from given specifications*/

#include "types.h"
#include "cvcore.h"
#include <stdio.h>

IplImage* imcvCreateImages(int width, int height, char *bit_depth, uint8 no_of_ch)
{
	CvSize imageSize = cvSize (width,height);
	IplImage* img = NULL;
	if (strcmp(bit_depth,"IPL_DEPTH_1U") == 0)
		img = cvCreateImage(imageSize,IPL_DEPTH_1U,no_of_ch);
	else if (strcmp(bit_depth,"IPL_DEPTH_8U") == 0)
		img = cvCreateImage(imageSize,IPL_DEPTH_8U,no_of_ch);
	else if (strcmp(bit_depth,"IPL_DEPTH_8S") == 0)
		img = cvCreateImage(imageSize,IPL_DEPTH_8S,no_of_ch);
	else if (strcmp(bit_depth,"IPL_DEPTH_16U") == 0)
		img = cvCreateImage(imageSize,IPL_DEPTH_8U,no_of_ch);
	else if (strcmp(bit_depth,"IPL_DEPTH_16S") == 0)
		img = cvCreateImage(imageSize,IPL_DEPTH_8S,no_of_ch);
	else if (strcmp(bit_depth,"IPL_DEPTH_32U") == 0)
		img = cvCreateImage(imageSize,IPL_DEPTH_8U,no_of_ch);
	else if (strcmp(bit_depth,"IPL_DEPTH_32S") == 0)
		img = cvCreateImage(imageSize,IPL_DEPTH_8S,no_of_ch);

	return img;
} 