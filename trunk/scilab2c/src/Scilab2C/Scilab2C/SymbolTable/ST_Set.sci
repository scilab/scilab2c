function ST_Set(TBName,TBType,TBSize,TBValue,TBFindLike,TBDimension,SymbolTableFileName)
// function ST_Set(TBName,TBType,TBSize,TBValue,TBFindLike,TBDimension,SymbolTableFileName)
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

SCI2CSymbolTable = ST_Load(SymbolTableFileName);

[TBFlagfound,TBPosition] = ST_FindPos(TBName,SymbolTableFileName);

if (TBFlagfound == 0)
   TBPosition = max(size(SCI2CSymbolTable))+1;
end

SCI2CSymbolTable(TBPosition).Name      = TBName;      // string.
SCI2CSymbolTable(TBPosition).Type      = TBType;      // char.
SCI2CSymbolTable(TBPosition).Size      = TBSize;      // structure of two strings (Size(1) and Size(2)).
SCI2CSymbolTable(TBPosition).Value     = TBValue;     // int/real/complex number. %nan when the value is not available or isn't a scalar.
SCI2CSymbolTable(TBPosition).FindLike  = TBFindLike;  // int number. FindLike = 1, when the symbol comes from a find-like function. 
                                                      // FindLike = -1 when the function is not find-like but it is making use of input arguments that are find-like.
                                                      // FindLike = 0 in all other cases.
SCI2CSymbolTable(TBPosition).Dimension = TBDimension; // int number.
   
ST_Save(SymbolTableFileName,SCI2CSymbolTable);

endfunction
