function opoutsize = FA_SZ_OPDOTSTAR(in1size,in2size)
// function opoutsize = FA_SZ_OPDOTSTAR(in1size,in2size)
// -----------------------------------------------------------------
// Status:
// 08-Jan-2008 -- Raffaele Nutricato: Author.
// 08-Jan-2008 -- Alberto Morea: Test Ok.
//
// Copyright 2008 Raffaele Nutricato & Alberto Morea.
// Contact: raffaele.nutricato@tiscali.it
// -----------------------------------------------------------------

SCI2CNInArgCheck(argn(2),2,2);

in1dim = GetSymbolDimension(in1size);

if (in1dim == 0)
   opoutsize = string(in2size);
else
   opoutsize = string(in1size);
end

endfunction
