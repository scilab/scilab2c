function SharedInfo = FL_UpdateToBeConv(ASTFunName,CFunName,FunPrecSpecifier,FunTypeAnnot,FunSizeAnnot,InArg,NInArg,OutArg,NOutArg,FileInfo,SharedInfo)
// function SharedInfo = FL_UpdateToBeConv(ASTFunName,CFunName,FunPrecSpecifier,FunTypeAnnot,FunSizeAnnot,InArg,NInArg,OutArg,NOutArg,FileInfo,SharedInfo)
// -----------------------------------------------------------------
//
// Status:
// 27-Oct-2007 -- Raffaele Nutricato: Author.
//
// Copyright 2007 Raffaele Nutricato.
// Contact: raffaele.nutricato@tiscali.it
// -----------------------------------------------------------------

SCI2CNInArgCheck(argn(2),11,11);

nxtscifunname   = SharedInfo.NextSCIFunName;
nxtscifunnumber = SharedInfo.NextSCIFunNumber;

ReportFileName      = FileInfo.Funct(nxtscifunnumber).ReportFileName;
SCI2CAvailableCDat  = FileInfo.FunctionList.SCI2CAvailableCDat;
USER2CAvailableCDat = FileInfo.FunctionList.USER2CAvailableCDat;
ConvertedDat        = FileInfo.FunctionList.ConvertedDat; 
ToBeConvertedDat    = FileInfo.FunctionList.ToBeConvertedDat; 
FunInfoDatDir       = FileInfo.FunctionList.FunInfoDatDir;


if (SharedInfo.SkipNextFun > 0)
   PrintStringInfo('   Current function will not be inserted in the Function List.',ReportFileName,'file','y');
   return;
end

if ((sum(mtlb_strcmp(ASTFunName,SharedInfo.Annotations.DataPrec)) > 0) & ...
    (SharedInfo.SkipNextPrec == 1))
   return;
end

if ((mtlb_strcmp(ASTFunName,'OpEqual')) & ...
    (SharedInfo.SkipNextEqual == 1))
   return;
end

flagexist = FL_ExistCFunction(CFunName,USER2CAvailableCDat,SCI2CAvailableCDat,ConvertedDat,ToBeConvertedDat,ReportFileName);

if (flagexist  == %F)

   load(ToBeConvertedDat,'ToBeConverted');
   
   NToConvP1 = size(ToBeConverted,1)+1;
   ToBeConverted(NToConvP1).SCIFunctionName = ASTFunName;
   ToBeConverted(NToConvP1).CFunctionName   = CFunName;
   
   save(ToBeConvertedDat,ToBeConverted);
   SharedInfo.NFilesToTranslate = SharedInfo.NFilesToTranslate + 1;
   
end

endfunction
