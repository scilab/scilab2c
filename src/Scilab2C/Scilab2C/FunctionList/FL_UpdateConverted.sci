function Converted = FL_UpdateConverted(NFilesToTranslate,ConvertedDatFile)
// function Converted = FL_UpdateConverted(NFilesToTranslate,ConvertedDatFile)
// -----------------------------------------------------------------
//
// Status:
// 27-Oct-2007 -- Raffaele Nutricato: Author.
//
// Copyright 2007 Raffaele Nutricato.
// Contact: raffaele.nutricato@tiscali.it
// -----------------------------------------------------------------

SCI2CNInArgCheck(argn(2),2,2);

load(ConvertedDatFile,'Converted');

if (NFilesToTranslate >= 1)
   NConvP1 = size(Converted,1)+1;
   Converted(NConvP1) = SharedInfo.NextCFunName;
end

endfunction
