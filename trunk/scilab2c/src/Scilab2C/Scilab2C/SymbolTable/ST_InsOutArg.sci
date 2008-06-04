function ST_InsOutArg(OutArg,NOutArg,FileInfo,SharedInfo,MatchRule)
// function ST_InsOutArg(OutArg,NOutArg,FileInfo,SharedInfo,MatchRule)
// -----------------------------------------------------------------
//
// Status:
// 26-Oct-2007 -- Raffaele Nutricato: Author.
// 26-Oct-2007 -- Alberto Morea: Test Ok.
//
// Copyright 2007 Raffaele Nutricato & Alberto Morea.
// Contact: raffaele.nutricato@tiscali.it
// -----------------------------------------------------------------


SCI2CNInArgCheck(argn(2),5,5);

nxtscifunname        = SharedInfo.NextSCIFunName;
nxtscifunnumber      = SharedInfo.NextSCIFunNumber;
ReportFileName       = FileInfo.Funct(nxtscifunnumber).ReportFileName;
CDeclarationFileName = FileInfo.Funct(nxtscifunnumber).CDeclarationFileName;
CGblDeclarFileName   = FileInfo.Funct(nxtscifunnumber).CGblDeclarFileName;

GlobalVarsFileName   = FileInfo.GlobalVarFileName;
LocalVarsFileName    = FileInfo.Funct(nxtscifunnumber).LocalVarFileName;
TempVarsFileName     = FileInfo.Funct(nxtscifunnumber).TempVarFileName;

CPass1FileName       = FileInfo.Funct(nxtscifunnumber).CPass1FileName;
CPass1FreeFileName   = FileInfo.Funct(nxtscifunnumber).CPass1FreeFileName;




for counteroutput = 1:NOutArg

   if mtlb_strcmp(OutArg(counteroutput).Scope,'Temp')
      SymbTableFileName = TempVarsFileName;
   elseif mtlb_strcmp(OutArg(counteroutput).Scope,'Local')
      SymbTableFileName = LocalVarsFileName;
   elseif mtlb_strcmp(OutArg(counteroutput).Scope,'Global')
      SymbTableFileName = GlobalVarsFileName;
   else
      SCI2Cerror('Unknown scope ""'+OutArg(counteroutput).Scope+'"" for symbol: '+OutArg(counteroutput).Name);
   end
   

   [TBFlagfound,TBFlagEqualSymbols] = ...
      ST_MatchSymbol(OutArg(counteroutput).Name,...
      OutArg(counteroutput).Type,...
      OutArg(counteroutput).Size,...
      OutArg(counteroutput).Value,...
      OutArg(counteroutput).FindLike,...
      OutArg(counteroutput).Dimension,...
      SymbTableFileName,MatchRule);
   
   if (TBFlagfound == 1)
      if (TBFlagEqualSymbols == 0)
         PrintStringInfo(' ',ReportFileName,'both','y');
         PrintStringInfo('SCI2CERROR: Symbol Table Conflict. Trying to insert again symbol ""'+...
                         OutArg(counteroutput).Name+'"" with different settings',ReportFileName,'both','y');
         PrintStringInfo('SCI2CERROR: Please check that you are not using variable ""'+OutArg(counteroutput).Name+'""',ReportFileName,'both','y');
         PrintStringInfo('SCI2CERROR: with different sizes and/or types.',ReportFileName,'both','y');
         PrintStringInfo(' ',ReportFileName,'both','y');
         SCI2Cerror(' ');
      else
         if ((GetSymbolDimension(OutArg(counteroutput).Size)) == 0)
            ST_Set(OutArg(counteroutput).Name,...
               OutArg(counteroutput).Type,...
               OutArg(counteroutput).Size,...
               OutArg(counteroutput).Value,...
               OutArg(counteroutput).FindLike,...
               OutArg(counteroutput).Dimension,...
               SymbTableFileName);
         end
         if (OutArg(counteroutput).Scope=='Global')
            IndentLevelGlobal = 0; //NUT: forced always to 1
            FlagExt = 1;
            C_GenDeclarations(OutArg(counteroutput),CGblDeclarFileName,IndentLevelGlobal,ReportFileName,FlagExt);
         end
      end
   elseif (TBFlagfound == 2)
      ST_Set(OutArg(counteroutput).Name,...
         OutArg(counteroutput).Type,...
         OutArg(counteroutput).Size,...
         OutArg(counteroutput).Value,...
         OutArg(counteroutput).FindLike,...
         OutArg(counteroutput).Dimension,...
         SymbTableFileName);
      IndentLevel = 0; //NUT: forced always to 1
      FlagExt = 0;
      C_GenDeclarations(OutArg(counteroutput),CGblDeclarFileName,IndentLevel,ReportFileName,FlagExt);
   else
      if (OutArg(counteroutput).FindLike == 1)
         TmpOutArgSize(1) = '__'+OutArg(counteroutput).Name+'Size[0]';
         TmpOutArgSize(2) = '__'+OutArg(counteroutput).Name+'Size[1]';
      else
         TmpOutArgSize(1) = OutArg(counteroutput).Size(1);
         TmpOutArgSize(2) = OutArg(counteroutput).Size(2);
      end
      ST_Set(OutArg(counteroutput).Name,...
         OutArg(counteroutput).Type,...
         TmpOutArgSize,...
         OutArg(counteroutput).Value,...
         OutArg(counteroutput).FindLike,...
         OutArg(counteroutput).Dimension,...
         SymbTableFileName);
      IndentLevelDeclaration = 1; //NUT: per ora lo forzo sempre a 1
      IndentLevelMalloc      = SharedInfo.NIndent;
      FlagExt = 0;
      C_GenDeclarations(OutArg(counteroutput),CDeclarationFileName,IndentLevelDeclaration,ReportFileName,FlagExt);
      C_MemAllocOutTempVars(OutArg(counteroutput),1,CPass1FileName,CPass1FreeFileName,IndentLevelMalloc,ReportFileName);
   end
   
end

endfunction
