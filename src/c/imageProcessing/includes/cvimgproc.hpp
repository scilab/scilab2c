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

Mat imcvAdaptThresholds(Mat src, double t_value, double maxvalue, char* AdaptiveMethod, \
							char* ThreholdType, double blocksize, double C);

Mat imcvDistanceTransforms(Mat src, char* distance_type, int mask_size);


Mat imcvBlurs(Mat src, double ksize_width, double ksize_height, double anchor_x, \
				double anchor_y, char* border_type);

Mat imcvGaussianBlurs(Mat src, double ksize_width, double ksize_height, double sigma_x, \
				double sigma_y, char* border_type);				

Mat imcvMedianBlurs(Mat src, double ksize);

Mat imcvErode(Mat src, char* erosion_type, double size, double iterations, \
			char* border_type, double border_value);

Mat imcvDilate(Mat src, char* dilation_type, double size, double iterations, \
				char* border_type, double border_value);

Mat imcvCanny(Mat src, double threshold1, double threshold2, double \
				aperture_size, double L2gradient);

Mat imcvCornerHarris(Mat src, double blocksize, double ksize, double k, \
			char* border_type);

#endif  /*__CVIMGPROC_H__*/
