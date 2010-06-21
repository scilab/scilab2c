//
// Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
// Copyright (C) 2010-2010 - DIGITEO - Vincent LEJEUNE
//
// This file must be used under the terms of the CeCILL.
// This source file is licensed as described in the file COPYING, which
// you should have received as part of this distribution.  The terms
// are also available at
// http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
//
//

function ret=cs(A,m1,m2)
  [m,n]=size(A);
  rettmp=zeros(m,n);
  ret=zeros(m,n);
  for i=1:m
    id=pmodulo(i-m1-1,m)+1;
    rettmp(i,:)=A(id,:);
  end
  for j=1:n
    jd=pmodulo(j-m2-1,n)+1;
    ret(:,j)=rettmp(:,jd);
  end
endfunction