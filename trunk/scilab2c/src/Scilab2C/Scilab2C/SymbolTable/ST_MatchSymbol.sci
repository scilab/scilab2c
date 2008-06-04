function [TBFlagfound,TBFlagEqualSymbols] = ST_MatchSymbol(TBName,TBType,TBSize,TBValue,TBFindLike,TBDimension,SymbolTableFileName,MatchRule)
// function [TBFlagfound,TBFlagEqualSymbols] = ST_MatchSymbol(TBName,TBType,TBSize,TBValue,TBFindLike,TBDimension,SymbolTableFileName,MatchRule)
// -----------------------------------------------------------------
//
// Status:
// 26-Oct-2007 -- Raffaele Nutricato: Author.
// 26-Oct-2007 -- Alberto Morea: Test Ok.
//
// Copyright 2007 Raffaele Nutricato & Alberto Morea.
// Contact: raffaele.nutricato@tiscali.it
// -----------------------------------------------------------------


SCI2CNInArgCheck(argn(2),8,8);

TBFlagfound = 0;
TBFlagEqualSymbols = 0;

[TBFlagfound,tmpType,tmpSize,tmpValue,tmpFindLike,tmpDimension] = ...
   ST_Get(TBName,SymbolTableFileName);

if (TBFlagfound == 1)
   if (tmpType == 'GBLToBeDefined')
      TBFlagfound = 2;
      TBFlagEqualSymbols = 0; 
   else
      TBFlagEqualSymbols = 1;
      if (MatchRule == 'type' | MatchRule == 'all')
         if (mtlb_strcmp(tmpType,TBType) == %F)
            TBFlagEqualSymbols = 0;
         end
      end
      if (MatchRule == 'size' | MatchRule == 'all')
         if (tmpDimension ~= TBDimension)
            TBFlagEqualSymbols = 0;
         end
         if (SCI2Cisnum(tmpSize(1))) & (SCI2Cisnum(TBSize(1)))
            if (mtlb_strcmp(tmpSize(1),TBSize(1)) == %F)
               TBFlagEqualSymbols = 0;
            end
         end
         if (SCI2Cisnum(tmpSize(2))) & (SCI2Cisnum(TBSize(2)))
            if (mtlb_strcmp(tmpSize(2),TBSize(2)) == %F)
               TBFlagEqualSymbols = 0;
            end
         end
      end
   end
end
   
endfunction
