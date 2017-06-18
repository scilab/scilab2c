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
#include "cvcore.hpp"
#include <stdio.h>

using namespace cv;
using namespace std;

Mat imcvCreateImages(int width, int height, char *bit_depth, uint8 no_of_ch)
{
	Mat img;
	/*Create opencv matrix with given type*/
	if (strcmp(bit_depth,"CV_8U") == 0)
		img = Mat(height,width,CV_8U);
	else if (strcmp(bit_depth,"CV_8S") == 0)
		img = Mat(height,width,CV_8S);
	else if (strcmp(bit_depth,"CV_16U") == 0)
		img = Mat(height,width,CV_16U);
	else if (strcmp(bit_depth,"CV_16S") == 0)
		img = Mat(height,width,CV_16S);
	else if (strcmp(bit_depth,"CV_32F") == 0)
		img = Mat(height,width,CV_32F);
	else if (strcmp(bit_depth,"CV_32S") == 0)
		img = Mat(height,width,CV_32S);
	else if (strcmp(bit_depth,"CV_64F") == 0)
		img = Mat(height,width,CV_64F);
	

	/*Change no of channels to specified input*/
	img.reshape(no_of_ch);
	
	return img;
} 