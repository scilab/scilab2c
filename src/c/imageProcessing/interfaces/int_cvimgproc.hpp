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

#ifndef __INT_CVIMGPROC_H__
#define __INT_CVIMGPROC_H__

#include "types.h"
#include "opencv2/core/core.hpp"
#include "opencv2/imgproc/imgproc.hpp"

#define mt0g2CV_CvtColormt0(src,code,code_size) imcvCvtColors(src,code)

#define mt0d0d0g2CV_Thresholdmt0(src,threshold,maxvalue,thresh_type, \
 			type_size) imcvThresholds(src,threshold,maxvalue,thresh_type)

#define mt0d0g2g2d0d0CV_AdaptiveThresholdmt0(src,maxvalue,adaptmethod, \
			adapt_size,thresh_type,blocksize,C) imcvAdaaptThresholds(src, \
			maxvalue,adaptmethod,thresh_type,blocksize,C)

#define mt0g2d0CV_DistanceTransform(src,distance_type,type_size,mask_size) \
			imcvDistanceTransform(src,distance_type,mask_size)

#define mt0d0d0d0d0g2CV_Blurmt0(src,ksize_width,ksize_height,anchor_x, \
			anchor_y,border_type,type_size) imcvBlurs(src,ksize_width, \
			ksize_height,anchor_x,anchor_y,border_type)								

#define mt0d0d0d0d0g2CV_GaussianBlurmt0(src,ksize_width,ksize_height,sigma_x, \
			sigma_y,border_type,type_size) imcvGaussianBlurs(src,ksize_width, \
			ksize_height,sigma_x,sigma_y,border_type)								

#define mt0d0CV_MedianBlurmt0(src,ksize) imcvMedianBlurs(src,ksize)

#define mt0g2d0CV_Erodemt0(src,erosion_type,type_size,erosion_size) \
			imcvErode(src,erosion_type,erosion_size,1,"BORDER_CONSTANT",0)

#define mt0g2d0d0g2d0CV_Erodemt0(src,erosion_type,type_size,erosion_size, \
			iterations,border_type,bor_size,border_value) \
			imcvErode(src,erosion_type,erosion_size,iterations,border_type, \
				border_value)

#define mt0g2d0CV_Dilatemt0(src,dilation_type,type_size,dilation_size) \
			imcvDilate(src,dilation_type,dilation_size,1,"BORDER_CONSTANT",0)							

#define mt0g2d0d0g2d0CV_Dilatemt0(src,dilation_type,type_size,dilation_size, \
			iterations,border_type,bor_size,border_value) \
			imcvDilate(src,dilation_type,dilation_size,iterations,border_type, \
			border_value)

#define mt0d0d0d0d0CV_Cannymt0(src,threshold1,threshold2,aperture_size, \
			L2gradient) imcvCanny(src,threshold1,threshold2,aperture_size, \
			L2gradient)

#define mt0d0d0CV_Cannymt0(src,threshold1,threshold2) imcvCanny(src, \
			threshold1,threshold2,3,0)

#define mt0d0d0d0g2CV_CornerHarrismt0(src,blocksize,ksize,k,border_type, \
			type_size) imcvCornerHarris(src,blocksize,ksize,k,border_type)

#define mt0d0d0d0CV_CornerHarrismt0(src,blocksize,ksize,k)  \
			imcvCornerHarris(src,blocksize,ksize,k,"BORDER_DEFAULT")

#endif  /*__INT_CVIMGPROC_H__*/
