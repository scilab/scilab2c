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

function img = CV_CreateImage(width,height,bit_depth,no_of_channels)
// function to create an image object of given size and type
//
// Calling Sequence
//     CV_CreateImage(image_size,bit_depth,no_of_channels)
//
// Parameters
//     image_size: width and height of image
//     bit_depth: Bit depth of image elements
//     no_of_channels: no of channels per pixels
//
// Description
//	This function can be used to create opencv image object. For more info about bit depth and channels,please refer to OpenCV documentation 
//
// This is curretly dummy function. It provides no functionality but is required for providing support for generating C code for OpenCV
//
// Examples
//	CV_CreateImage([320 240], "IPL_DEPTH_8U", 1)	//to create image of the size 320*240 pixels with 8 bit unsigned each pixels and gray scale image  
// See also
//     CV_LoadImage
//
// Authors
//     Siddhesh Wani
//

img = 0;

endfunction
