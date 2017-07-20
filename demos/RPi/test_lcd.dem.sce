// Copyright (C) 2017 - IIT Bombay - FOSSEE
//
// This file must be used under the terms of the CeCILL.
// This source file is licensed as described in the file COPYING, which
// you should have received as part of this distribution.  The terms
// are also available at
// http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
// Author: Jorawar Singh, Sandeep Gupta
// Organization: FOSSEE, IIT Bombay
// Email: toolbox@scilab.in
//

lines(0);

global SCI2CHOME

scilab2c(SCI2CHOME + "/tests/unit_tests/test_RPi/lcd.sci", TMPDIR,SCI2CHOME + "/tests/unit_tests/test_RPi/", "All", "make" ,"RPi", "uno");

editor([TMPDIR+"/main.c"]);
