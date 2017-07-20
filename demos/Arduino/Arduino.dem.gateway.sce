// Copyright (C) 2017 - IIT Bombay - FOSSEE
//
// This file must be used under the terms of the CeCILL.
// This source file is licensed as described in the file COPYING, which
// you should have received as part of this distribution.  The terms
// are also available at
// http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
// Author: Jorawar Singh, Yash Pratap Singh Tomar
// Organization: FOSSEE, IIT Bombay
// Email: toolbox@scilab.in


subdemolist = ["Arduino blink", "blink.dem.sce";
	       "Arduino digital input", "digital_in.dem.sce";
	       "Arduino analog voltage i/o", "analog_in_out_volt.dem.sce";
	       "Arduino analog output", "analog_out.dem.sce";
   	       "Arduino DC motor", "dc_motor.dem.sce";
	       "Arduino Master write", "master_write.dem.sce";
              ];

global SCI2CHOME;
subdemolist(:,2) = SCI2CHOME + "/demos/Arduino/"+ subdemolist(:,2);
