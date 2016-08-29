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

#ifndef __CVIMGPROC_H__
#define __CVIMGPROC_H__

#include "types.h"
#include "opencv2/core/core.hpp"	
#include "opencv2/imgproc/imgproc.hpp"

using namespace cv;

Mat imcvCvtColors(Mat src, char* code);
Mat imcvThresholds(Mat src, double threshold, double maxvalue, char* type);

#endif  /*__CVIMGPROC_H__*/
