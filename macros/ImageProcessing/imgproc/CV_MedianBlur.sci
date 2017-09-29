// Copyright (C) 2016 - IIT Bombay - FOSSEE
//
// This file must be used under the terms of the CeCILL.
// This source file is licensed as described in the file COPYING, which
// you should have received as part of this distribution.  The terms
// are also available at
// http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
// Organization: FOSSEE, IIT Bombay
// Email: toolbox@scilab.in

function cvtimg = CV_MedianBlur(srcimg,ksize)
// function to blur image using median filter
//
// Calling Sequence
//     cvtimg = CV_MedianBlur(srcimg,ksize)
//
// Parameters
//     	srcimg : input 1-, 3-, or 4-channel image; when ksize is 3 or 5, the image depth should be CV_8U, CV_16U, or CV_32F, for larger aperture sizes, it can only be CV_8U.
//	ksize_width : aperture linear size; it must be odd and greater than 1, for example: 3, 5, 7 ...
//
// Description
//		This function can be used for blurring image using median 
//		filter. Image can be of any depth and have any no of channels. 
//
// This is curretly dummy function. It provides no functionality but is required 
// for providing support for generating C code for OpenCV
//
// Examples
//	img = CV_LoadImage('~/test.jpg',0)
//	dst = CV_MedianBlur(img,3)
// See also
//     CV_GaussianBlur, CV_Blur, CV_CvtColor
//
// Authors
//     Siddhesh Wani
//

cvtimg = 0

endfunction
