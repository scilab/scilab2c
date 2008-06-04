function ST_Del(TBName,SymbolTableFileName)
// function ST_Del(TBName,SymbolTableFileName)
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

[TBFlagfound,TBPosition] = ST_FindPos(TBName,SymbolTableFileName);

if (TBFlagfound == 0)
   SCI2Cerror('Missing symbol: trying to del a non existing symbol ""'+TBName+'"".');
elseif (TBFlagfound == 1)
   SCI2CSymbolTable(TBPosition) = [];
   
   ST_Save(SymbolTableFileName,SCI2CSymbolTable);
end

endfunction
