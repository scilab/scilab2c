//
// Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
// Copyright (C) 2010-2010 - DIGITEO - Bruno JOFRET
//
// This file must be used under the terms of the CeCILL.
// This source file is licensed as described in the file COPYING, which
// you should have received as part of this distribution.  The terms
// are also available at
// http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
//
//

demopath = get_absolute_file_path("scilab2c.dem.gateway.sce");

subdemolist = ["Trigonometric Identity" , "TrigonometricIdentity.dem.sce";
              "Linear Regression" , "LinearRegression.dem.sce";
              "Symbols", "Symbols.dem.sce";
               "High Pass Filter", "Filter.dem.sce";
		"Jacobi functions","Jacobi.dem.sce";
		"Analog Filters","analogFilter.dem.sce";
  	       "Discrete Cosine Transform" , "test_dct.dem.sce";
	       "Inverse Cosine Transform" , "test_idct.dem.sce";
		"String Functions","string.dem.sce";
		"Filter Responses","FilterResponse.dem.sce";
              ];

subdemolist(:,2) = demopath + subdemolist(:,2);
