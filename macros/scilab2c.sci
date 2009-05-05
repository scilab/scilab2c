//
// Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
// Copyright (C) 2009-2009 - DIGITEO - Bruno JOFRET
//
// This file must be used under the terms of the CeCILL.
// This source file is licensed as described in the file COPYING, which
// you should have received as part of this distribution.  The terms
// are also available at
// http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
//
//

function scilab2c(varargin)
  [lhs, rhs] = argn();
  if rhs == 0
// scilab2c()
// launch gui
// scilab2c_gui();
    disp("Launching GUI : Not implemented now...");
    return;
  end

  if rhs == 2
// scilab2c(arg1, arg2)
    if typeof(varargin(1)) <> "string"
      error(msprintf(gettext("%s: Wrong type for input argument #%d: String expected.\n"),"scilab2c",1));
      return
    end

    if typeof(varargin(2)) <> "string"
      error(msprintf(gettext("%s: Wrong type for input argument #%d: String expected.\n"),"scilab2c",2));
      return
    end

    //disp("That''s a good starting point")
    //disp("Input File = "+varargin(1))
    //disp("Output File = "+varargin(2))
    UserScilabMainFile = varargin(1);
    UserSciFilesPaths = [];
    //RunMode = 'GenLibraryStructure';
    //RunMode = 'Translate';
    RunMode = 'All';

// --- LAUNCH USER SCI CODE TO TEST IT BEFORE TRANSLATING IT!!! ---
    runscicode(UserScilabMainFile, UserSciFilesPaths);
// --- ASK USER FOR CONTINUATION. ---
    userchoice = input('Start translation [y/n]?','s');
    if (userchoice == 'y')
// --- LAUNCH SCI2C ---
      runsci2c(UserScilabMainFile, UserSciFilesPaths, TMPDIR, RunMode);
//      cd(SCI2CDirectory);
    end


    return
  end

  error(msprintf(gettext("%s: Wrong number of input argument(s): %d expected.\n"),"scilab2c",2));
endfunction
