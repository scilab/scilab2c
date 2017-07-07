// Copyright (C) 2016 - IIT Bombay - FOSSEE
//
// This file must be used under the terms of the CeCILL.
// This source file is licensed as described in the file COPYING, which
// you should have received as part of this distribution.  The terms
// are also available at
// http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
// Organization: FOSSEE, IIT Bombay
// Email: toolbox@scilab.in

function cvtimg = CV_CvtColor(srcimg,code)
// function to convert image from one colorspace to other colorspace
//
// Calling Sequence
//     CV_CvtColor(srcimg,code)
//
// Parameters
<<<<<<< HEAD
//	srcimg: source image to be converted
//	dstimg: destination image in which to store converted image
//	code: String specifying conversion type. Same as defined in OpenCV. for eg. 'CV_RGB2GRAY' for conversion from RGB image to grayscale image
//	dstCn: no of channels in destination image (0 by default)
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
//	dst = CV_CvtColor(img,'CV_RGB2GRAY')
=======
//     srcimg: source image to be converted
//	   dstimg: destination image in which to store converted image
//	   code: String specifying conversion type. Same as defined in OpenCV
//			for eg. 'CV_RGB2GRAY' for conversion from RGB image to grayscale image
//	   dstCn: no of channels in destination image (0 by default)
//
// Description
//		This function can be used for converting an image to other colorspace.
//		Refer OpenCV documentation for list of available conversions
// Examples
//		img = CV_LoadImage('~/test.jpg',0)
//		dst = CV_CvtColor(img,'CV_RGB2GRAY')
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
