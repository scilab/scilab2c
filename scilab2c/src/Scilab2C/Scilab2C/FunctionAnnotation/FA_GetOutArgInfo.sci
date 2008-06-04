function UpdatedOutArg = ...
   FA_GetOutArgInfo(InArg,NInArg,OutArg,NOutArg,SharedInfo,FunPrecSpecifier,FunTypeAnnot,FunSizeAnnot,ReportFileName)
// function UpdatedOutArg = ...
//    FA_GetOutArgInfo(InArg,NInArg,OutArg,NOutArg,SharedInfo,FunPrecSpecifier,FunTypeAnnot,FunSizeAnnot,ReportFileName)
// -----------------------------------------------------------------
//
// Status:
// 25-Oct-2007 -- Raffaele Nutricato: Author.
//
// Copyright 2007 Raffaele Nutricato.
// Contact: raffaele.nutricato@tiscali.it
// -----------------------------------------------------------------

SCI2CNInArgCheck(argn(2),9,9);

UpdatedOutArg   = OutArg;
for cntin = 1:NInArg
   IN(cntin).TP    = InArg(cntin).Type;
   IN(cntin).SZ(1) = InArg(cntin).Size(1);
   IN(cntin).SZ(2) = InArg(cntin).Size(2);
   if ((isnan(InArg(cntin).Value)) & (GetSymbolDimension(InArg(cntin).Size) == 0))
      IN(cntin).VAL = InArg(cntin).Name; 
   else
      IN(cntin).VAL = string(InArg(cntin).Value);
   end
end
DefaultPrecision = SharedInfo.DefaultPrecision;

if (mtlb_strcmp(FunTypeAnnot(1),''))
   NOutArg = 0;
else
   NOutArg = max(size(FunTypeAnnot));
end

flagfindlike = 0;
for counterin = 1:NInArg
   if (InArg(counterin).FindLike == 1 | InArg(counterin).FindLike == -1)
      flagfindlike = -1;
   end
end

for counterout = 1:NOutArg
   if(mtlb_strcmp(FunTypeAnnot,'FA_TP_USER'))
      UpdatedOutArg(counterout).Type   = FA_TP_USER(FunPrecSpecifier,DefaultPrecision);
   else
      UpdatedOutArg(counterout).Type   = eval(FunTypeAnnot(counterout));
   end
   UpdatedOutArg(counterout).FindLike  = 0;   
   lengthFA_SZ_RTMAX = length('FA_SZ_RTMAX');
   
   if (SCI2Cstrncmps1size('FA_SZ_RTMAX',FunSizeAnnot(counterout,1)))
      UpdatedOutArg(counterout).FindLike = 1;
      FunSizeAnnot(counterout,1) = part(FunSizeAnnot(counterout,1),lengthFA_SZ_RTMAX+1:length(FunSizeAnnot(counterout,1)));
   end
   
   if (SCI2Cstrncmps1size('FA_SZ_RTMAX',FunSizeAnnot(counterout,2)))
      UpdatedOutArg(counterout).FindLike = 1;
      FunSizeAnnot(counterout,2) = part(FunSizeAnnot(counterout,2),lengthFA_SZ_RTMAX+1:length(FunSizeAnnot(counterout,2)));
   end

   if (flagfindlike == -1)
      UpdatedOutArg(counterout).FindLike = -1;
   end
   
   tmpeval = eval(FunSizeAnnot(counterout,1));
   if (IsNanSize(tmpeval))
      if SharedInfo.ForExpr.OnExec == 0
         EM_NanSize(ReportFileName);
      else
         UpdatedOutArg(counterout).Size(1) = string(tmpeval);
      end
   elseif(SCI2Cisnum(tmpeval))
      if (eval(tmpeval) <= 0)
         EM_ZeroSize(ReportFileName);
      else
         UpdatedOutArg(counterout).Size(1) = string(tmpeval);
      end
   else
      UpdatedOutArg(counterout).Size(1) = string(tmpeval);
   end
   
   tmpeval = eval(FunSizeAnnot(counterout,2));
   if (IsNanSize(tmpeval))
      if SharedInfo.ForExpr.OnExec == 0
         EM_NanSize(ReportFileName);
      else
         UpdatedOutArg(counterout).Size(2) = string(tmpeval);
      end
   elseif(SCI2Cisnum(tmpeval))
      if (eval(tmpeval) <= 0)
         EM_ZeroSize(ReportFileName);
      else
         UpdatedOutArg(counterout).Size(2) = string(tmpeval);
      end
   else
      UpdatedOutArg(counterout).Size(2) = string(tmpeval);
   end
   
   UpdatedOutArg(counterout).Value     = %nan;
   UpdatedOutArg(counterout).Dimension = GetSymbolDimension(UpdatedOutArg(counterout).Size);
   UpdatedOutArg(counterout).Scope     = 'Temp';//NUT anche su questo si puo' ragionare verifica anche la handleoperation.
end

endfunction
