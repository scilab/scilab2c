// Copyright (C) 2016 - IIT Bombay - FOSSEE
//
// This file must be used under the terms of the CeCILL.
// This source file is licensed as described in the file COPYING, which
// you should have received as part of this distribution.  The terms
// are also available at
// http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
// Organization: FOSSEE, IIT Bombay
// Email: toolbox@scilab.in

function CV_WaitKey(delay)
// function similar to cvWaitKey
//
// Calling Sequence
//     CV_WaitKey(delay)
//
// Parameters
//		delay: waiting delay, if 0 then wait till keypress
//
// Description
//		This function can be used for inseting some delay. This function must
//		follow CV_ShowImage to display image. 
// Examples
//		img = CV_LoadImage('~/test.jpg',0)
//		CV_ShowImage('',img)
//		CV_WaitKey(0);
//
// See also
//     CV_LoadImage CV_ShowImage
//
//
// Authors
//     Siddhesh Wani
//

// This is curretly dummy function. It provides no functionality but is required 
// for providing support for generating C code for OpenCV

endfunction
