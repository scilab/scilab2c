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

Mat imcvBlurs(Mat src, double ksize_width, double ksize_height, double anchor_x, \
				double anchor_y, char* border_type)
{

	/*Mat dst(src.rows, src.cols, src.type());*/
	Mat dst = src.clone();

	Point anchor = Point(anchor_x,anchor_y);
	Size2f ksize = Size2f(ksize_width, ksize_height);
	
	if(strcmp(border_type,"BORDER_REPLICATE") == 0)
	{
		blur(src,dst,ksize,anchor,BORDER_REPLICATE);
	}
	else if(strcmp(border_type,"BORDER_REFLECT"))
	{
		blur(src,dst,ksize,anchor,BORDER_REFLECT);
	}
	else if(strcmp(border_type,"BORDER_REFLECT_101"))
	{
		blur(src,dst,ksize,anchor,BORDER_REFLECT_101);
	}
	else if(strcmp(border_type,"BORDER_WRAP"))
	{
		blur(src,dst,ksize,anchor,BORDER_WRAP);
	}
	else if(strcmp(border_type,"BORDER_CONSTANT"))
	{
		blur(src,dst,ksize,anchor,BORDER_CONSTANT);
	}
	
	
	return dst;
}