// Copyright (C) 2016 - IIT Bombay - FOSSEE
//
// This file must be used under the terms of the CeCILL.
// This source file is licensed as described in the file COPYING, which
// you should have received as part of this distribution.  The terms
// are also available at
// http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
// Organization: FOSSEE, IIT Bombay
// Email: toolbox@scilab.in

function dstimg = CV_DistanceTransform(srcimg,distance_type,mask_size)
// function to calculate distance to closest zero pixels for each pixel
//
// Calling Sequence
//     dst = CV_DistanceTransform(srcimg,distance_type,mask_size)
//
// Parameters
//     	srcimg : Source 8-bit single-channel image.
//	distance_type : Type of distance. It can be CV_DIST_L1, CV_DIST_L2 , or CV_DIST_C
//	mask_size : Size of the distance transform mask
//
// Description
//	This function can be used to calculate distance to closest zero pixel for each pixel of the source image. Output is 32 bit floatingpoint, single channel image of the same size as that of source image.
//
// This is curretly dummy function. It provides no functionality but is required 
// for providing support for generating C code for OpenCV
//
// Examples
//	img = CV_LoadImage('~/test.jpg',0)
//	dst = CV_DistanceTransform(img,"CV_DIST_L1",3)
// See also
//     CV_LoadImage CV_CreateImage CV_CvtColor
//
// Authors
//     Siddhesh Wani
//

dstimg = 0

endfunction
