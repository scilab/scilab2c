// Copyright (C) 2016 - IIT Bombay - FOSSEE
//
// This file must be used under the terms of the CeCILL.
// This source file is licensed as described in the file COPYING, which
// you should have received as part of this distribution.  The terms
// are also available at
// http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
// Organization: FOSSEE, IIT Bombay
// Email: toolbox@scilab.in

function status = CV_SaveImage(filename,img)
// function to save an image object as a given filename
//
// Calling Sequence
//     CV_SaveImage(filename,img)
//
// Parameters
<<<<<<< HEAD
//	filename: name of file image to be saved as
//	img: image to be saved
//
// Description
//	This function can be used for saving image. File format is detected
//	from file extension 
//
// This is curretly dummy function. It provides no functionality but is required 
// for providing support for generating C code for OpenCV
//
// Examples
//	img = CV_LoadImage('~/test.jpg',0)
//	CV_SaveImage('test1.png',img)
=======
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
>>>>>>> 9e5793a7b05b23e6044a6d7a9ddd5db39ba375f0
// See also
//     CV_LoadImage CV_CreateImage
//
// Authors
//     Siddhesh Wani
//
<<<<<<< HEAD

status = 0;
=======
status = 0;
// This is curretly dummy function. It provides no functionality but is required 
// for providing support for generating C code for OpenCV
>>>>>>> 9e5793a7b05b23e6044a6d7a9ddd5db39ba375f0

endfunction
