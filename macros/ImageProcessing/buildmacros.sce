// Copyright (C) 2016 - IIT Bombay - FOSSEE
//
// This file must be used under the terms of the CeCILL.
// This source file is licensed as described in the file COPYING, which
// you should have received as part of this distribution.  The terms
// are also available at
// http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
// Author: Siddhesh Wani
// Organization: FOSSEE, IIT Bombay
// Email: toolbox@scilab.in

OpencvDirs = [ "core", ...
				"highgui"];


 current_path = get_absolute_file_path("buildmacros.sce");

 for L=1:size(OpencvDirs,"*")
  myfile = current_path + filesep() + OpencvDirs(L) + filesep() + "buildmacros.sce";
  if isfile(myfile) then
    exec(myfile);
  end
end

clear current_path;

tbx_build_macros(TOOLBOX_NAME, get_absolute_file_path('buildmacros.sce'));

clear tbx_build_macros;

