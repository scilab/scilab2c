function GenCFunDatFiles(FunctionName,FunPrecSpecifier,FunTypeAnnot,FunSizeAnnot,InArg,NInArg,OutArg,NOutArg,CFunName,LibTypeInfo,FunInfoDatDir)
// function GenCFunDatFiles(FunctionName,FunPrecSpecifier,FunTypeAnnot,FunSizeAnnot,InArg,NInArg,OutArg,NOutArg,CFunName,LibTypeInfo,FunInfoDatDir)
// -----------------------------------------------------------------
//
// Status:
// 30-Oct-2007 -- Raffaele Nutricato: Author.
// 30-Oct-2007 -- Alberto Morea: Test Ok.
//
// Copyright 2007 Raffaele Nutricato.
// Contact: raffaele.nutricato@tiscali.it
// -----------------------------------------------------------------

SCI2CNInArgCheck(argn(2),11,11);


PosFirstOutScalar = 0;
FoundOutScalar = 0;
for counterout = 1:NOutArg
   if (OutArg(counterout).Dimension == 0)
      if (FoundOutScalar==0)
         PosFirstOutScalar = counterout;
         FoundOutScalar = 1;
      end
   end
end

clear FunInfo
FunInfo.SCIFunctionName     = FunctionName;
FunInfo.CFunctionName       = CFunName;
FunInfo.FunPrecSpecifier    = FunPrecSpecifier;
FunInfo.FunTypeAnnot        = FunTypeAnnot;
FunInfo.FunSizeAnnot        = FunSizeAnnot;
FunInfo.InArg               = InArg;
FunInfo.NInArg              = NInArg;
FunInfo.OutArg              = OutArg;
FunInfo.NOutArg             = NOutArg;
FunInfo.PosFirstOutScalar   = PosFirstOutScalar;
FunInfo.LibTypeInfo         = LibTypeInfo;
save(fullfile(FunInfoDatDir,CFunName+'.dat'),FunInfo);
clear FunInfo

endfunction
