// Copyright (C) 2016 - IIT Bombay - FOSSEE
//
// This file must be used under the terms of the CeCILL.
// This source file is licensed as described in the file COPYING, which
// you should have received as part of this distribution.  The terms
// are also available at
// http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
// Organization: FOSSEE, IIT Bombay
// Email: toolbox@scilab.in

function edges = CV_CornerHarris(srcimg,blocksize,ksize,k,border_type)
//Finds edges in image using Harris algorithm
//
// Calling Sequence
//	edges = CV_CornerHarris(srcimg,blocksize,ksize,k,border_type)
//
// Parameters
//	srcimg: Input single-channel 8-bit or floating-point image.
//	blockSize: Neighborhood size 
//	ksize: Aperture parameter for the Sobel() operator.
//	k: Harris detector free parameter. 
//	border_type: border mode used to extrapolate pixels outside of the image.
//
// Description
// 	The function runs the Harris edge detector on the image. For each pixel (x, y) it calculates a 2 * 2 gradient covariance matrix M(x,y) over a blockSize * blockSize neighborhood. Then, it computes the following characteristic: dst(x,y) =  det(M(x,y)) - k .tr(M(x,y))^2. Corners in the image can be found as the local maxima of this response map.
//
// 	border_type can be :
//	<itemizedlist>
//	<listitem>BORDER_REPLICATE:     	aaaaaa|abcdefgh|hhhhhhh</listitem>
//	<listitem>BORDER_REFLECT:       	fedcba|abcdefgh|hgfedcb</listitem>
//	<listitem>BORDER_REFLECT_101:   	gfedcb|abcdefgh|gfedcba</listitem>
//	<listitem>BORDER_WRAP:          	cdefgh|abcdefgh|abcdefg</listitem>
//	<listitem>BORDER_CONSTANT:		iiiiii|abcdefgh|iiiiiii</listitem>  
//	</itemizedlist>
//
// This is curretly dummy function. It provides no functionality but is required 
// for providing support for generating C code for OpenCV
//
// Examples
//	img = CV_LoadImage('~/test.jpg',0)
//	dst = CV_CvtColor(img,"CV_RGB2GRAY");
//	edge = CV_CornerHarris(dst,5,3,1,"BORDER_REPLICATE");
// See also
//     	CV_LoadImage CV_CvtColor
//
// Authors
//     Siddhesh Wani
//

edges = 0

endfunction
