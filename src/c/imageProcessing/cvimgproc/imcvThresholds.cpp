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
#include "cvcore.hpp"
#include "cvimgproc.hpp"
#include <stdio.h>

using namespace cv;

Mat imcvThresholds(Mat src, double t_value, double maxvalue, char* type)
{
	Mat dst(src.rows, src.cols, src.type());
	if(strcmp(type,"THRESH_BINARY") == 0)
		threshold(src,dst,t_value,maxvalue,THRESH_BINARY);

	return dst;
}