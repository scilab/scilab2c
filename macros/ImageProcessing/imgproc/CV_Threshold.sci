// Copyright (C) 2016 - IIT Bombay - FOSSEE
//
// This file must be used under the terms of the CeCILL.
// This source file is licensed as described in the file COPYING, which
// you should have received as part of this distribution.  The terms
// are also available at
// http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
// Organization: FOSSEE, IIT Bombay
// Email: toolbox@scilab.in

function cvtimg = CV_Threshold(srcimg,threshold,max_value,thresh_type)
// function to threshold input image
//
// Calling Sequence
//     dst = CV_Threshold(srcimg,code,threshold,max_value,thresh_type)
//
// Parameters
//     	srcimg: source image to be converted
<<<<<<< HEAD
//	threshold: threshold value
//	max_value: maximum value to be used with THRESH_BINARY and THRESH_BINARY_INV
//	thresh_type: Type for threshold. It can one of the following: THRESH_BINARY, THRESH_BINARY_INV, THRESH_TRUNC, THRESH_TOZERO, THRESH_TOZERO_INV
//
// Description
//	This function can be used for converting an image to other colorspace.
//	Refer OpenCV documentation for list of available conversions
//
// This is curretly dummy function. It provides no functionality but is required 
// for providing support for generating C code for OpenCV
//
// Examples
//	img = CV_LoadImage('~/test.jpg',0)
//	dst = CV_Threshold(img,100,255,'THRESH_BINARY')
=======
//	   	threshold: threshold value
//		max_value: maximum value to be used with THRESH_BINARY and THRESH_BINARY_INV
//		thresh_type: Type for threshold. It can one of the following:
//					THRESH_BINARY, THRESH_BINARY_INV, THRESH_TRUNC,
//					THRESH_TOZERO, THRESH_TOZERO_INV
// Description
//		This function can be used for converting an image to other colorspace.
//		Refer OpenCV documentation for list of available conversions
// Examples
//		img = CV_LoadImage('~/test.jpg',0)
//		dst = CV_Threshold(img,100,255,'THRESH_BINARY')
//
>>>>>>> 9e5793a7b05b23e6044a6d7a9ddd5db39ba375f0
// See also
//     CV_LoadImage CV_CreateImage
//
// Authors
//     Siddhesh Wani
//
<<<<<<< HEAD

cvtimg = 0
=======
cvtimg = 0
// This is curretly dummy function. It provides no functionality but is required 
// for providing support for generating C code for OpenCV
>>>>>>> 9e5793a7b05b23e6044a6d7a9ddd5db39ba375f0

endfunction
