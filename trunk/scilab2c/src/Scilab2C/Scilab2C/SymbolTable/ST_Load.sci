function SCI2CSymbolTable = ST_Load(SymbolTableFileName)
// function SCI2CSymbolTable = ST_Load(SymbolTableFileName)
// -----------------------------------------------------------------
//
// Status:
// 26-Oct-2007 -- Raffaele Nutricato: Author.
// 26-Oct-2007 -- Alberto Morea: Test Ok.
//
// Copyright 2007 Raffaele Nutricato & Alberto Morea.
// Contact: raffaele.nutricato@tiscali.it
// -----------------------------------------------------------------

[tmpnams,tmptyps,tmpdims,tmpvols]=listvarinfile(SymbolTableFileName);
if (max(size(tmpnams)) > 1)
    SCI2Cerror('More than one variable found in ""'+SymbolTableFileName+'"".');
end
load(SymbolTableFileName,tmpnams);
SCI2CSymbolTable = eval(tmpnams);

endfunction
