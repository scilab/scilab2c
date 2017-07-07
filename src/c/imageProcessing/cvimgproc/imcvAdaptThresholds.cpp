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

/* Function to adaptive threshold a gray scale image*/

#include "types.h"
#include "cvcore.hpp"
#include "cvimgproc.hpp"


using namespace cv;

Mat imcvAdaptThresholds(Mat src, double t_value, double maxvalue, char* AdaptiveMethod, \
							char* ThreholdType, double blocksize, double cont)
{

	Mat dst(src.rows, src.cols, src.type());

	if(strcmp(AdaptiveMethod,"ADAPTIVE_THRESH_MEAN_C") == 0)
	{
		if(strcmp(ThreholdType, "THRESH_BINARY") == 0)
			adaptiveThreshold(src,dst,maxvalue,ADAPTIVE_THRESH_MEAN_C, \
				THRESH_BINARY,blocksize,cont);
		else if(strcmp(ThreholdType, "THRESH_BINARY_INV") == 0)
			adaptiveThreshold(src,dst,maxvalue,ADAPTIVE_THRESH_MEAN_C, \
				THRESH_BINARY_INV,blocksize,cont);
	}
	else if(strcmp(AdaptiveMethod,"ADAPTIVE_THRESH_GAUSSIAN_C") == 0)
	{
		if(strcmp(ThreholdType, "THRESH_BINARY") == 0)
			adaptiveThreshold(src,dst,maxvalue,ADAPTIVE_THRESH_GAUSSIAN_C, \
				THRESH_BINARY,blocksize,cont);
		else if(strcmp(ThreholdType, "THRESH_BINARY_INV") == 0)
			adaptiveThreshold(src,dst,maxvalue,ADAPTIVE_THRESH_GAUSSIAN_C, \
				THRESH_BINARY_INV,blocksize,cont);
	}
	return dst;
}