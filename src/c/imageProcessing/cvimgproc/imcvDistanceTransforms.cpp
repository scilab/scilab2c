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

Mat imcvDistanceTransforms(Mat src, char* distance_type, int mask_size )
{

	Mat dst(src.rows, src.cols, CV_32F);

	if(strcmp(distance_type,"CV_DIST_L1") == 0)
	{
		distanceTransform(src,dst,CV_DIST_L1,mask_size);
	}
	else if(strcmp(distance_type,"CV_DIST_L2") == 0)
	{
		distanceTransform(src,dst,CV_DIST_L2,mask_size);
	}
	else if(strcmp(distance_type,"CV_DIST_C") == 0)
	{
		distanceTransform(src,dst,CV_DIST_C,mask_size);
	}
	
	return dst;
}