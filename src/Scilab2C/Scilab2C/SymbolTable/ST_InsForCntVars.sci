function [OutArg,SharedInfo] = ST_InsForCntVars(InArg,NInArg,OutArg,NOutArg,FunctionName,FileInfo,SharedInfo)
// function [OutArg,SharedInfo] = ST_InsForCntVars(InArg,NInArg,OutArg,NOutArg,FunctionName,FileInfo,SharedInfo)
// -----------------------------------------------------------------
//
// Status:
// 26-Oct-2007 -- Raffaele Nutricato: Author.
// 26-Oct-2007 -- Alberto Morea: Test Ok.
//
// Copyright 2007 Raffaele Nutricato & Alberto Morea.
// Contact: raffaele.nutricato@tiscali.it
// -----------------------------------------------------------------


SCI2CNInArgCheck(argn(2),7,7);

nxtscifunname        = SharedInfo.NextSCIFunName;
nxtscifunnumber      = SharedInfo.NextSCIFunNumber;
ReportFileName       = FileInfo.Funct(nxtscifunnumber).ReportFileName;


if ((SharedInfo.ForExpr.OnExec > 0) & (NOutArg==1) & (OutArg.Scope~='Temp'))
   
   if (FunctionName == 'OpColon')

      SharedInfo.SkipNextFun = 1;
      
      OutArg.Size(1)   = '1';
      OutArg.Size(2)   = '1';
      OutArg.Value     = %nan;
      OutArg.FindLike  = 0;
      OutArg.Dimension = 0;
      SharedInfo.ForExpr.OpColonInfoIn1 = InArg(1).Name;

      if (NInArg == 2)
         SharedInfo.ForExpr.OpColonInfoIn2 = '1';
         SharedInfo.ForExpr.OpColonInfoIn3 = InArg(2).Name;
      else 
         SharedInfo.ForExpr.OpColonInfoIn2 = InArg(2).Name;
         if isnan(InArg(2).Value)
            EM_UnknownStep(ReportFileName);
         end
         
         SharedInfo.ForExpr.OpColonInfoIn3 = InArg(3).Name;
      end        
      
      SharedInfo.ForExpr.AssignmentFun = SharedInfo.CFunId.OpColon;
      SharedInfo.ForExpr.IntCntArg    = [];
      SharedInfo.ForExpr.MtxValCntArg = [];
      SharedInfo.ForExpr.SclValCntArg = OutArg;

   elseif ((FunctionName == 'OpEqual') & (SharedInfo.ForExpr.AssignmentFun == 0))
      if (OutArg.Dimension > 0)
         SharedInfo.SkipNextFun = 1; 
         OutArg.Size(1)   = '1';
         OutArg.Size(2)   = '1';
         OutArg.Value     = %nan;
         OutArg.FindLike  = 0;
         OutArg.Dimension = 0;
         
         NNewArg = 1;
         NewArg(NNewArg).Name      = SharedInfo.ASTReader.TempForCntVarsName+string(SharedInfo.CountForTempVars);
         SharedInfo.CountForTempVars = SharedInfo.CountForTempVars + 1;
         NewArg(NNewArg).Size(1)   = '1';
         NewArg(NNewArg).Size(2)   = '1';
         NewArg(NNewArg).Type      = 'i';
         NewArg(NNewArg).Value     = 0;
         NewArg(NNewArg).FindLike  = 0;
         NewArg(NNewArg).Dimension = 0;         
         NewArg(NNewArg).Scope     = 'Temp';         
         
         NNewArg = 1;
         ST_InsOutArg(NewArg,NNewArg,FileInfo,SharedInfo,'all');
         
         SharedInfo.ForExpr.AssignmentFun = SharedInfo.CFunId.EqMatrix;
         SharedInfo.ForExpr.IntCntArg    = NewArg(1);
         SharedInfo.ForExpr.MtxValCntArg = InArg(1);
         SharedInfo.ForExpr.SclValCntArg = OutArg;
      else
         SharedInfo.ForExpr.AssignmentFun = SharedInfo.CFunId.EqScalar;
      end
   else
      if (OutArg.Dimension > 0)

         NewArg = OutArg;
         OutArg.Name = SharedInfo.ASTReader.TempForValVarsName+OutArg.Name;

         NNewArg = 1;
         NewArg(NNewArg).Size(1)   = '1';
         NewArg(NNewArg).Size(2)   = '1';
         NewArg(NNewArg).Value     = %nan;
         NewArg(NNewArg).FindLike  = 0;
         NewArg(NNewArg).Dimension = 0;      
         
         NNewArg = 2;
         NewArg(NNewArg).Name      = SharedInfo.ASTReader.TempForCntVarsName+string(SharedInfo.CountForTempVars);
         SharedInfo.CountForTempVars = SharedInfo.CountForTempVars + 1;
         NewArg(NNewArg).Size(1)   = '1';
         NewArg(NNewArg).Size(2)   = '1';
         NewArg(NNewArg).Type      = 'i';
         NewArg(NNewArg).Value     = 0;
         NewArg(NNewArg).FindLike  = 0;
         NewArg(NNewArg).Dimension = 0;         
         NewArg(NNewArg).Scope     = 'Temp';         
         
         NNewArg  = 2;
         ST_InsOutArg(NewArg,NNewArg,FileInfo,SharedInfo,'all');
         
         SharedInfo.ForExpr.AssignmentFun = SharedInfo.CFunId.GenFunMtx;
         SharedInfo.ForExpr.IntCntArg    = NewArg(2);
         SharedInfo.ForExpr.MtxValCntArg = OutArg(1);
         SharedInfo.ForExpr.SclValCntArg = NewArg(1);
      end
   end   
end

endfunction
