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

function cvtimg = CV_Blur(srcimg,ksize_width,ksize_height,anchor_x,anchor_y, ...
							border_type)
// function to blur image using normalised box filter
//
// Calling Sequence
//     dst = CV_Blur(srcimg,ksize_width,ksize_height,anchor_x,anchor_y, ...
//				border_type)
//
// Parameters
//     	srcimg -> Source image.
//		ksize_width, ksize_height -> blurring kernel size.
//		anchor_x, anchor_y -> x,y coordinates of anchor point
//		borderType -> border mode used to extrapolate pixels outside of the 
//				image. Can be :
//						BORDER_REPLICATE:     	aaaaaa|abcdefgh|hhhhhhh
//						BORDER_REFLECT:       	fedcba|abcdefgh|hgfedcb
//						BORDER_REFLECT_101:   	gfedcb|abcdefgh|gfedcba
//						BORDER_WRAP:          	cdefgh|abcdefgh|abcdefg
//						BORDER_CONSTANT:		iiiiii|abcdefgh|iiiiiii  
// Description
//		This function can be used for blurring image using normalised box 
//		filter. Image can be of any depth and have any no of channels. 
// Examples
//		img = CV_LoadImage('~/test.jpg',0)
//		dst = CV_Blur(img,3,3,-1,-1,"BORDER_CONSTANT")
//
// See also
//     CV_LoadImage CV_Threshold, CV_CvtColor
//
// Authors
//     Siddhesh Wani
//
cvtimg = 0
// This is curretly dummy function. It provides no functionality but is required 
// for providing support for generating C code for OpenCV

endfunction
