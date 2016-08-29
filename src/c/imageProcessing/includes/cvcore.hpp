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

#ifndef __CVCORE_H__
#define __CVCORE_H__


#include "types.h"
#include "opencv2/core/core.hpp"

using namespace cv;

Mat imcvCreateImages(int width, int height, char *bit_depth, uint8 no_of_ch);
void imcvGetImgSizes(Mat src, double* imgsize);


#endif  /*__CVCORE_H__*/
