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
lines(0);

global SCI2CHOME
editor([SCI2CHOME+"/tests/unit_tests/test004_Filter/scilabcode/main.sci";
        SCI2CHOME+"/tests/unit_tests/test004_Filter/scilabcode/high_pass.sci"]);

scilab2c(SCI2CHOME+"/tests/unit_tests/test004_Filter/scilabcode/main.sci", TMPDIR, SCI2CHOME+"/tests/unit_tests/test004_Filter/scilabcode");

editor([TMPDIR+"/main.c";
        TMPDIR+"/d2d0d0d0high_passd2.c"]);
