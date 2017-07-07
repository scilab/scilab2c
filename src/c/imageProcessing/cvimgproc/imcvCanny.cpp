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

/* Function to find edges in image */

#include "types.h"
#include "cvcore.hpp"
#include "cvimgproc.hpp"


using namespace cv;

Mat imcvCanny(Mat src, double threshold1, double threshold2, double \
				aperture_size, double L2gradient)
{

	Mat dst = src.clone();

	Canny(src, dst, threshold1, threshold2, aperture_size, L2gradient);

	return dst;	
}
