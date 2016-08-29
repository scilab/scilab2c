/* Copyright (C) 2016 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Author: Siddhesh Wani
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
*/

/* Function to load image object from given filename*/

#include "types.h"
#include "cvcore.hpp"
#include "cvhighgui.hpp"
#include <stdio.h>

Mat imcvLoadImages(char *filename, uint8 opentype)
{
	return (imread(filename,opentype));
} 