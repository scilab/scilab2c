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

subdemolist =["Linear Algebra","LinearAlgebra/LinearAlgebra.dem.gateway.sce";
			  "Arduino","Arduino/Arduino.dem.gateway.sce";
		      "Cosine Transforms","CT/CT.dem.gateway.sce";
              "Filters","Filters/Filters.dem.gateway.sce";
              "Raspberry Pi","RPi/RPi.dem.gateway.sce";
              "Trigonometric Identity" , "TrigonometricIdentity.dem.sce";
              "Linear Regression" , "LinearRegression.dem.sce";
              "Symbols", "Symbols.dem.sce";
              "Jacobi functions","Jacobi.dem.sce";
		      "String Functions","string.dem.sce";
              ]
subdemolist(:,2) = demopath + subdemolist(:,2);
