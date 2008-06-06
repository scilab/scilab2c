function [TBFlagfound,TBType,TBSize,TBValue,TBFindLike,TBDimension,TBScope] = ST_GetSymbolInfo(TBName,FileInfo,SharedInfo)
// function [TBFlagfound,TBType,TBSize,TBValue,TBFindLike,TBDimension,TBScope] = ST_GetSymbolInfo(TBName,FileInfo,SharedInfo)
// -----------------------------------------------------------------
//
// Status:
// 26-Oct-2007 -- Raffaele Nutricato: Author.
// 26-Oct-2007 -- Alberto Morea: Test Ok.
//
// Copyright 2007 Raffaele Nutricato & Alberto Morea.
// Contact: raffaele.nutricato@tiscali.it
// -----------------------------------------------------------------

SCI2CNInArgCheck(argn(2),3,3);

nxtscifunname   = SharedInfo.NextSCIFunName;
nxtscifunnumber = SharedInfo.NextSCIFunNumber;

GlobalVarsFileName = FileInfo.GlobalVarFileName;
LocalVarsFileName  = FileInfo.Funct(nxtscifunnumber).LocalVarFileName;
TempVarsFileName   = FileInfo.Funct(nxtscifunnumber).TempVarFileName;

TBFlagfound = 0;
TBType      = '';
TBSize(1)   = '';
TBSize(2)   = '';
TBValue     = %nan
TBFindLike  = %nan
TBDimension = %nan;
TBScope     = '';

[TBFlagfound,TBType,TBSize,TBValue,TBFindLike,TBDimension] = ...
   ST_Get(TBName,TempVarsFileName);
if (TBFlagfound == 1);
   TBScope = 'Temp';
end

if (TBFlagfound == 0);
   [TBFlagfound,TBType,TBSize,TBValue,TBFindLike,TBDimension] = ...
      ST_Get(TBName,LocalVarsFileName);
   if (TBFlagfound == 1);
      TBScope = 'Local';
   end
end

if (TBFlagfound == 0);
   [TBFlagfound,TBType,TBSize,TBValue,TBFindLike,TBDimension] = ...
      ST_Get(TBName,GlobalVarsFileName);
   if (TBFlagfound == 1);
      TBScope = 'Global';
   end
end

endfunction
