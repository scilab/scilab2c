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
editor(SCI2CHOME+"/tests/unit_tests/test000_TrigonIdentity/scilabcode/mainfunction.sci");

scilab2c(SCI2CHOME+"/tests/unit_tests/test000_TrigonIdentity/scilabcode/mainfunction.sci", TMPDIR);

editor(TMPDIR+"/main.c");

