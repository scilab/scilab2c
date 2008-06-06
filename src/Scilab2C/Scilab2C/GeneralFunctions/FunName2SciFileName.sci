function ScilabFileName = FunName2SciFileName(DirList,InFunName);
// function ScilabFileName = FunName2SciFileName(DirList,InFunName);
// -----------------------------------------------------------------
// Status:
// 16-Apr-2007 -- Nutricato Raffaele: Author.
//
// Copyright 2007 Raffaele Nutricato.
// Contact: raffaele.nutricato@tiscali.it
// -----------------------------------------------------------------

SCI2CNInArgCheck(argn(2),2,2);

if (prod(size(DirList)) == 0)
   SCI2Cerror('Incorrect DirList parameter.');
end

if (prod(size(InFunName)) == 0)
   SCI2Cerror('Incorrect InFunName parameter.');
end

for tmpcounter = 1:max(size(DirList))
   PathList(tmpcounter) = fullfile(DirList(tmpcounter),(InFunName+'.sci'));
end

ScilabFileName = listfiles(PathList);

if ((prod(size(ScilabFileName))) > 1)
   disp(ScilabFileName);
   SCI2Cerror('Found more than one scilab file.');
end

if ((prod(size(ScilabFileName))) < 1)
   disp(ScilabFileName);
   SCI2Cerror('Scilab file ""'+InFunName+'.sci"", not found');
end

endfunction
