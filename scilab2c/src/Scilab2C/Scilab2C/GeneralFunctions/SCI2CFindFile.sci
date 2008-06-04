function [FlagFound,SCIFileName] = SCI2CFindFile(PathList,FileName)
// function [FlagFound,SCIFileName] = SCI2CFindFile(PathList,FileName)
// -----------------------------------------------------------------
// Status:
// 11-Jul-2007 -- Nutricato Raffaele: Author.
//
// Copyright 2007 Raffaele Nutricato.
// Contact: raffaele.nutricato@tiscali.it
// -----------------------------------------------------------------

SCI2CNInArgCheck(argn(2),2,2);

FlagFound = 0;
SCIFileName = '';

Nscipaths = size(PathList,1);
counterscipaths = 1;
while ((FlagFound == 0) & (counterscipaths <= Nscipaths))
   dirscifilename      = PathList(counterscipaths);
   fullpathscifilename = fullfile(dirscifilename,FileName);
   if (SCI2Cfileexist(dirscifilename,FileName))
      FlagFound   = 1;
      SCIFileName = fullpathscifilename;
   end
   counterscipaths = counterscipaths + 1;
end

endfunction
