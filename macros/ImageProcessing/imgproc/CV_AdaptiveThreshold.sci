// Copyright (C) 2016 - IIT Bombay - FOSSEE
//
// This file must be used under the terms of the CeCILL.
// This source file is licensed as described in the file COPYING, which
// you should have received as part of this distribution.  The terms
// are also available at
// http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
// Author: Siddhesh Wani
// Organization: FOSSEE, IIT Bombay
// Email: toolbox@scilab.in

function cvtimg = CV_AdaptiveThreshold(srcimg,max_value,adaptive_method, ...
					thresh_type, block_size, C)
// function to adaptively threshold input image
//
// Calling Sequence
//     dst = CV_AdaptiveThreshold(srcimg,max_value,adaptive_method, ...
//				thresh_type,blk_size,c)
//
// Parameters
//     	src -> Source 8-bit single-channel image.
//		max_value -> Non-zero value assigned to the pixels for which the 
//					condition is satisfied. See the details below.
//		adaptive_method -> Adaptive thresholding algorithm to use, 
//					ADAPTIVE_THRESH_MEAN_C or ADAPTIVE_THRESH_GAUSSIAN_C . 
//		thresh_type -> Thresholding type that must be either THRESH_BINARY 
//					or THRESH_BINARY_INV .
//		blockSize -> Size of a pixel neighborhood that is used to calculate 
//					a threshold value for the pixel: 3, 5, 7, and so on.
//		C -> Constant subtracted from the mean or weighted mean.Normally, 
//					it is positive but may be zero or negative as well.
// Description
//		This function can be used for adaptively threshold given image
// Examples
//		img = CV_LoadImage('~/test.jpg',0)
//		dst = CV_AdaptiveThreshold(img,255,"ADAPTIVE_THRESH_MEAN_C", ...
//			"THRESH_BINARY",5,0)
//
// See also
//     CV_LoadImage CV_CreateImage
//
// Authors
//     Siddhesh Wani
//
cvtimg = 0
// This is curretly dummy function. It provides no functionality but is required 
// for providing support for generating C code for OpenCV

endfunction
