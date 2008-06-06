function opoutsize = FA_SZ_OPPLUSA(in1size,in2size)
// function opoutsize = FA_SZ_OPPLUSA(in1size,in2size)
// -----------------------------------------------------------------
//
// Status:
// 18-Mar-2008 -- Raffaele Nutricato: Author.
// 18-Mar-2008 -- Alberto Morea: Test Ok.
//
// Copyright 2008 Raffaele Nutricato & Alberto Morea.
// Contact: raffaele.nutricato@tiscali.it
// -----------------------------------------------------------------

// ------------------------------
// --- Check input arguments. ---
// ------------------------------
SCI2CNInArgCheck(argn(2),2,2);

in1size = string(in1size);
in2size = string(in2size);
in1dim = GetSymbolDimension(in1size);

if (in1dim == 0)
   opoutsize = in2size;
else
   opoutsize = in1size;
end

endfunction
