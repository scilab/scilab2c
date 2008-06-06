function SharedInfo = GetWhileCondVariable(OutArg,NOutArg,FunctionName,FileInfo,SharedInfo)
// function SharedInfo = GetWhileCondVariable(OutArg,NOutArg,FunctionName,FileInfo,SharedInfo)
// -----------------------------------------------------------------
//
// Status:
// 26-Oct-2007 -- Raffaele Nutricato: Author.
// 26-Oct-2007 -- Alberto Morea: Test Ok.
//
// Copyright 2007 Raffaele Nutricato.
// Contact: raffaele.nutricato@tiscali.it
// -----------------------------------------------------------------

SCI2CNInArgCheck(argn(2),5,5);

nxtscifunname        = SharedInfo.NextSCIFunName;
nxtscifunnumber      = SharedInfo.NextSCIFunNumber;
ReportFileName       = FileInfo.Funct(nxtscifunnumber).ReportFileName;

if ((SharedInfo.WhileExpr.OnExec > 0) & (NOutArg==1))
   SharedInfo.WhileExpr.CondVar = OutArg(1).Name;
      SharedInfo.WhileExpr.DimCondVar = OutArg(1).Dimension;
end

endfunction
