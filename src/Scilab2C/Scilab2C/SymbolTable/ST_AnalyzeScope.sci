function OutArg = ST_AnalyzeScope(OldOutArg,NOutArg,FileInfo,SharedInfo);
// function OutArg = ST_AnalyzeScope(OldOutArg,NOutArg,FileInfo,SharedInfo);
// -----------------------------------------------------------------
// Status:
// 26-Oct-2007 -- Raffaele Nutricato: Author.
//
// Copyright 2007 Raffaele Nutricato.
// Contact: raffaele.nutricato@tiscali.it
// -----------------------------------------------------------------

SCI2CNInArgCheck(argn(2),4,4);

nxtscifunname   = SharedInfo.NextSCIFunName;
nxtscifunnumber = SharedInfo.NextSCIFunNumber;
ReportFileName  = FileInfo.Funct(nxtscifunnumber).ReportFileName;


OutArg = OldOutArg;
GlobalVarsFileName = FileInfo.GlobalVarFileName;
LocalVarsFileName  = FileInfo.Funct(nxtscifunnumber).LocalVarFileName;
TempVarsFileName   = FileInfo.Funct(nxtscifunnumber).TempVarFileName;

for cntout = 1:NOutArg
   TBName = OutArg(cntout).Name;
   
   SymbolTableFileName = TempVarsFileName;
   [TBFlagfound,TBType,TBSize,TBValue,TBFindLike,TBDimension] = ...
      ST_Get(TBName,SymbolTableFileName);
   if (TBFlagfound == 0)
   else
      SCI2CerrorFile('Found a temp symbol in '+SymbolTableFileName+...
         ' with the same name of the equal output argument ""'+TBName+'"".',ReportFileName);
   end
   
   SymbolTableFileName = LocalVarsFileName;
   [TBFlagfound,TBType,TBSize,TBValue,TBFindLike,TBDimension] = ...
      ST_Get(TBName,SymbolTableFileName);
   if (TBFlagfound == 0)
   else
      OutArg(cntout).Scope     = 'Local';
   end
   
   if (TBFlagfound == 0)
      SymbolTableFileName = GlobalVarsFileName;
      [TBFlagfound2,TBType,TBSize,TBValue,TBFindLike,TBDimension] = ...
         ST_Get(TBName,SymbolTableFileName);
      if (TBFlagfound2 == 0)
         if SCI2Cstrncmps1size(SharedInfo.ASTReader.TempVarsName,OutArg(cntout).Name)
            OutArg(cntout).Scope = 'Temp';
         else
            OutArg(cntout).Scope = 'Local';
         end
      else
         OutArg(cntout).Scope     = 'Global';
      end
   end
   
end

endfunction
