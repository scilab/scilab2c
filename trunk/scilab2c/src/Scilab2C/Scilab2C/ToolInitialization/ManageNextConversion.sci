function FlagContinueTranslation = ManageNextConversion(FileInfoDatFile)
// function FlagContinueTranslation = ManageNextConversion(FileInfoDatFile)
// -----------------------------------------------------------------
//
// Status:
// 27-Oct-2007 -- Raffaele Nutricato: Author.
//
// Copyright 2007 Raffaele Nutricato.
// Contact: raffaele.nutricato@tiscali.it
// -----------------------------------------------------------------

SCI2CNInArgCheck(argn(2),1,1);

load(FileInfoDatFile,'FileInfo');

load(FileInfo.SharedInfoDatFile,'SharedInfo');

load(FileInfo.FunctionList.ToBeConvertedDat,'ToBeConverted');
FlagContinueTranslation = 0;

C_FinalizeCode(FileInfo,SharedInfo);

SharedInfo.NFilesToTranslate = SharedInfo.NFilesToTranslate - 1;
if (SharedInfo.NFilesToTranslate >= 1)
   ToBeConverted(1) = [];
   FlagContinueTranslation = 1;
   SharedInfo.NextSCIFunName   = ToBeConverted(1).SCIFunctionName;
   SharedInfo.NextCFunName     = ToBeConverted(1).CFunctionName; 
   SharedInfo.NextSCIFunNumber = SharedInfo.NextSCIFunNumber + 1;  
   [FlagFound,SharedInfo.NextSCIFileName] = ...
      SCI2CFindFile(FileInfo.UserSciFilesPaths,SharedInfo.NextSCIFunName+'.sci');
   if (FlagFound == 0)
      SCI2CerrorFile('Cannot find a scilab file to generate ""'+SharedInfo.NextCFunName+'"".',...
         FileInfo.GeneralReport);
   end
end


save(FileInfo.SharedInfoDatFile,SharedInfo);
clear SharedInfo

save(FileInfo.FunctionList.ToBeConvertedDat,ToBeConverted);
clear ToBeConverted

clear FileInfo

endfunction
