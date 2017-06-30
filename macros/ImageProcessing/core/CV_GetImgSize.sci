// Copyright (C) 2016 - IIT Bombay - FOSSEE
//
// This file must be used under the terms of the CeCILL.
// This source file is licensed as described in the file COPYING, which
// you should have received as part of this distribution.  The terms
// are also available at
// http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
// Organization: FOSSEE, IIT Bombay
// Email: toolbox@scilab.in

function imgsize = CV_GetImgSize(img)
// function to get size of the image (width*height)
//
// Calling Sequence
//     CV_GetImgSize(img)
//
// Parameters
//     img: image whose size is to be returned
//
// Description
//		This function can be used for retriving size information of the image.
//		It returs an array with first image element as width and second as height
//
// This is curretly dummy function. It provides no functionality but is required 
// for providing support for generating C code for OpenCV
//
// Examples
//	img = CV_LoadImage('~/test.jpg',0)
//	size = CV_GetImgSize(img)
// See also
//     CV_LoadImage CV_CreateImage
//
// Authors
//     Siddhesh Wani
//

imgsize = [0 0];

endfunction
