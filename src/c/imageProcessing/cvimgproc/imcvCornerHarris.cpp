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

/* Function to find edges using Harris algorithm*/

#include "types.h"
#include "cvcore.hpp"
#include "cvimgproc.hpp"


using namespace cv;

Mat imcvCornerHarris(Mat src, double blocksize, double ksize, double k, \
			char* border_type)
{

	Mat dst(src.rows, src.cols, CV_32FC1);

	if(strcmp(border_type,"BORDER_REPLICATE") == 0)
	{
		cornerHarris(src,dst,blocksize,ksize,k,BORDER_REPLICATE);
	}
	else if(strcmp(border_type,"BORDER_REFLECT"))
	{
		cornerHarris(src,dst,blocksize,ksize,k,BORDER_REFLECT);
	}
	else if(strcmp(border_type,"BORDER_REFLECT_101"))
	{
		cornerHarris(src,dst,blocksize,ksize,k,BORDER_REFLECT_101);
	}
	else if(strcmp(border_type,"BORDER_WRAP"))
	{
		cornerHarris(src,dst,blocksize,ksize,k,BORDER_WRAP);
	}
	else if(strcmp(border_type,"BORDER_CONSTANT"))
	{
		cornerHarris(src,dst,blocksize,ksize,k,BORDER_CONSTANT);
	}
	else if(strcmp(border_type,"BORDER_DEFAULT"))
	{
		cornerHarris(src,dst,blocksize,ksize,k,BORDER_DEFAULT);
	}
	
	
	return dst;
}