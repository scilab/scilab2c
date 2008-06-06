function [OutArg,SharedInfo] = GenOutArgNames(FunctionName,InArg,NInArg,OldOutArg,NOutArg,LhsArg,NLhsArg,FileInfo,SharedInfo)
// function [OutArg,SharedInfo] = GenOutArgNames(FunctionName,OutArg,NOutArg,LhsArg,NLhsArg,FileInfo,SharedInfo)
// -----------------------------------------------------------------
//
// Status:
// 11-Apr-2007 -- Raffaele Nutricato: Author.
//
// Copyright 2007 Raffaele Nutricato.
// Contact: raffaele.nutricato@tiscali.it
// -----------------------------------------------------------------

SCI2CNInArgCheck(argn(2),9,9);

nxtscifunname   = SharedInfo.NextSCIFunName;
nxtscifunnumber = SharedInfo.NextSCIFunNumber;
ReportFileName  = FileInfo.Funct(nxtscifunnumber).ReportFileName;
OutArg = OldOutArg;

if (NLhsArg > 0)
   if (NLhsArg ~= NOutArg)
      SCI2CerrorFile('NLhsArg='+string(NLhsArg)+' must be equal to NOutArg='+string(NOutArg)+'.',ReportFileName);
   end
   for counteroutputargs = 1:NOutArg
      OutArg(counteroutputargs).Name=LhsArg(counteroutputargs).Name;
      OutArg(counteroutputargs).Scope=LhsArg(counteroutputargs).Scope;
   end
else
   if ((sum(mtlb_strcmp(FunctionName,SharedInfo.Annotations.DataPrec)) > 0) & ...
       (SharedInfo.SkipNextPrec == 1))
      for counteroutputargs = 1:NOutArg
         OutArg(counteroutputargs).Name = InArg(counteroutputargs).Name;
      end
   elseif (mtlb_strcmp(FunctionName,'OpEqual'))
   else
      for counteroutputargs = 1:NOutArg
         if ((SharedInfo.ASTReader.EnableTempVarsReuse == 1) & ...
             (length(SharedInfo.ASTReader.ReusableTempVars) > 0))
            TmpOutArgName = strcat([SharedInfo.ASTReader.TempVarsName,string(SharedInfo.ASTReader.ReusableTempVars(1))]);
            SharedInfo.ASTReader.ReusableTempVars = SharedInfo.ASTReader.ReusableTempVars(2:$);
         else
            SharedInfo.ASTReader.UsedTempVars = SharedInfo.ASTReader.UsedTempVars + 1;
            TmpOutArgName = strcat([SharedInfo.ASTReader.TempVarsName,string(SharedInfo.ASTReader.UsedTempVars)]);
         end
         OutArg(counteroutputargs).Name=TmpOutArgName;
      end
   end
end

endfunction
