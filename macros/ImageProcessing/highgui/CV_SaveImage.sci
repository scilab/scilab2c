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

function status = CV_SaveImage(filename,img)
// function to save an image object as a given filename
//
// Calling Sequence
//     CV_SaveImage(filename,img)
//
// Parameters
//     filename: name of file image to be saved as
//	   img: image to be saved
//
// Description
//		This function can be used for saving image. File format is detected
//		from file extension 
// Examples
//		img = CV_LoadImage('~/test.jpg',0)
//		CV_SaveImage('test1.png',img)
//
// See also
//     CV_LoadImage CV_CreateImage
//
// Authors
//     Siddhesh Wani
//
status = 0;
// This is curretly dummy function. It provides no functionality but is required 
// for providing support for generating C code for OpenCV

endfunction
