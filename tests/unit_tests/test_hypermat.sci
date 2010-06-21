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

function test_hypermat()
  a = zeros(2,3,4);
  
  for i = 1:24
    a(i) = i
  end
  
  disp(a);
  
  for i = 1:24
    disp(a(i))
  end
  
  b = zeros(4,5,6);
  
  for i = 1:4
    for j = 1:5
      for k = 1:6
        b(i,j,k) = (i - 1) + 4 * (j - 1) + 4 * 5 * (k - 1);
      end
    end
  end
  
  disp(b);
  
  for k = 1:6
    for j = 1:5
      for i = 1:4
        disp(b(i,j,k));
      end
    end
  end
  
  
endfunction
