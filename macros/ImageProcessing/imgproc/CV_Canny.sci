// Copyright (C) 2016 - IIT Bombay - FOSSEE
//
// This file must be used under the terms of the CeCILL.
// This source file is licensed as described in the file COPYING, which
// you should have received as part of this distribution.  The terms
// are also available at
// http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
// Organization: FOSSEE, IIT Bombay
// Email: toolbox@scilab.in

function edges = CV_Canny(srcimg,threhold1,threshold2,aperture_size,L2gradient)
//Finds edges in image using Canny algorithm
//
// Calling Sequence
//     edges = CV_Canny(srcimg,threhold1,threshold2,aperture_size,L2gradient)
//
// Parameters
<<<<<<< HEAD
//	srcimg : single-channel 8-bit input image.
//	threshold1 : first threshold for the hysteresis procedure.
//	threshold2 : second threshold for the hysteresis procedure.
//	aperture_size : aperture size for the Sobel() operator.
//	L2gradient : a flag, indicating whether a more accurate  
//		
// Description
//	This function can be used for finding edes in single channel 8 bit 
//	image. 'aperture_size' and 'L2gradient' are optionals. By default,
//	aperture_size is 3 and L2gradient is false.
//
// For L2gradient: L_2 norm  =sqrt{(dI/dx)^2 + (dI/dy)^2} should be used to calculate the image gradient magnitude (L2gradient=1 ), or whether the default  L_1 norm  =|dI/dx|+|dI/dy| is enough (L2gradient=0). 
//
// This is curretly dummy function. It provides no functionality but is required 
// for providing support for generating C code for OpenCV
// 
// Examples
//	img = CV_LoadImage('~/test.jpg',0)
//	dst = CV_CvtColor(img,"CV_RGB2GRAY");
//	edge = CV_Canny(dst,50,100,3,0);
=======
//		srcimg -> single-channel 8-bit input image.
//		threshold1 -> first threshold for the hysteresis procedure.
//		threshold2 -> second threshold for the hysteresis procedure.
//		aperture_size -> aperture size for the Sobel() operator.
//		L2gradient -> a flag, indicating whether a more accurate  
//				L_2 norm  =sqrt{(dI/dx)^2 + (dI/dy)^2} should be used to 
//				calculate the image gradient magnitude ( L2gradient=1 ),
//				or whether the default  L_1 norm  =|dI/dx|+|dI/dy| is enough
//				( L2gradient=0).
// Description
//		This function can be used for finding edes in single channel 8 bit 
//		image. 'aperture_size' and 'L2gradient' are optionals. By default,
//		aperture_size is 3 and L2gradient is false.
// 
// Examples
//		img = CV_LoadImage('~/test.jpg',0)
//		dst = CV_CvtColor(img,"CV_RGB2GRAY");
//		edge = CV_Canny(dst,50,100,3,0);
//
>>>>>>> 9e5793a7b05b23e6044a6d7a9ddd5db39ba375f0
// See also
//     CV_LoadImage CV_CvtColor
//
// Authors
//     Siddhesh Wani
//
<<<<<<< HEAD

edges = 0
=======
edges = 0
// This is curretly dummy function. It provides no functionality but is required 
// for providing support for generating C code for OpenCV
>>>>>>> 9e5793a7b05b23e6044a6d7a9ddd5db39ba375f0

endfunction
