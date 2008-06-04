function INIT_LoadLibraries(FileInfoDatFile)
// function INIT_LoadLibraries(FileInfoDatFile)
// -----------------------------------------------------------------
//
// Status:
// 12-Jun-2007 -- Raffaele Nutricato: Author.
// 03-Jan-2008 -- Raffaele Nutricato: Changed directory structure.
//
// Copyright 2007 Raffaele Nutricato.
// Contact: raffaele.nutricato@tiscali.it
// -----------------------------------------------------------------

SCI2CNInArgCheck(argn(2),1,1);

clear FileInfo
load(FileInfoDatFile,'FileInfo');

clear SharedInfo
load(FileInfo.SharedInfoDatFile,'SharedInfo');
PrintStepInfo('Load SCI2C and USER2C Libraries.',FileInfo.GeneralReport,'both');

SCI2CAvailableC                  = [];
USER2CAvailableC                 = [];
Converted                        = []; 
ToBeConverted(1).SCIFunctionName = SharedInfo.NextSCIFunName;
ToBeConverted(1).CFunctionName   = SharedInfo.NextCFunName;

[SCI2CAvailableC,SCI2CNElem] = FL_ExtractFuncList(FileInfo.SCI2CLibCFLFun,FileInfo.SCI2CLibCFLCls,...
   SharedInfo.Annotations.FUNCLASS,SharedInfo.Extension.FuncListClasses,FileInfo.GeneralReport);

[USER2CAvailableC,USER2CNElem] = FL_ExtractFuncList(FileInfo.USER2CLibCFLFun,FileInfo.USER2CLibCFLCls,...
   SharedInfo.Annotations.FUNCLASS,SharedInfo.Extension.FuncListClasses,FileInfo.GeneralReport);

Available = SCI2CAvailableC;
save(FileInfo.FunctionList.SCI2CAvailableCDat,Available); 
Available = USER2CAvailableC;
save(FileInfo.FunctionList.USER2CAvailableCDat,Available); 
save(FileInfo.FunctionList.ConvertedDat,Converted); 
save(FileInfo.FunctionList.ToBeConvertedDat,ToBeConverted); 

endfunction
