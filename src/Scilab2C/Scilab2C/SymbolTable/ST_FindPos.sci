function [TBFlagfound,TBPosition] = ST_FindPos(TBName,SymbolTableFileName)
// function [TBFlagfound,TBPosition] = ST_FindPos(TBName,SymbolTableFileName)
// -----------------------------------------------------------------
//
// Status:
// 26-Oct-2007 -- Raffaele Nutricato: Author.
// 26-Oct-2007 -- Alberto Morea: Test Ok.
//
// Copyright 2007 Raffaele Nutricato & Alberto Morea.
// Contact: raffaele.nutricato@tiscali.it
// -----------------------------------------------------------------


SCI2CNInArgCheck(argn(2),2,2);

SCI2CSymbolTable = ST_Load(SymbolTableFileName);

TBFlagfound = 0;
TBPosition  = 0;
NEntries = max(size(SCI2CSymbolTable));
for countertable = 1:NEntries
   if (mtlb_strcmp(TBName,SCI2CSymbolTable(countertable).Name))
      TBFlagfound = TBFlagfound + 1;
      TBPosition  = countertable;
   end
end

if (TBFlagfound > 1)
   SCI2Cerror('Symbol table conflict: found two symbols with the same name ""'+TBName+'"".');
end

endfunction
