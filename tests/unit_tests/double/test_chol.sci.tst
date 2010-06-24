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

// <-- ENGLISH IMPOSED -->

// <-- JVM NOT MANDATORY -->

global SCI2CHOME;
scilab2c(SCI2CHOME+"/tests/unit_tests/double/test_chol.sci", TMPDIR);

fd = mopen(TMPDIR+"/main.c");
mgetl(fd)
mclose(fd);