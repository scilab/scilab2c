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
               "Arduino blink", "blink.dem.sce";
	       "Arduino digital input", "digital_in.dem.sce";
	       "Arduino analog voltage i/o", "analog_in_out_volt.dem.sce";
	       "Arduino analog output", "analog_out.dem.sce";
   	       "Arduino DC motor", "dc_motor.dem.sce";
	       "Arduino Master write", "master_write.dem.sce";
              ];

subdemolist(:,2) = demopath + subdemolist(:,2);
