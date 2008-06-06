function opoutsize = FA_SZ_OPSTAR(in1size,in2size)
// function opoutsize = FA_SZ_OPSTAR(in1size,in2size)
// -----------------------------------------------------------------
//
// Status:
// 08-Dec-2007 -- Raffaele Nutricato: Author.
// 08-Dec-2007 -- Alberto Morea: Test Ok.
//
// Copyright 2007 Raffaele Nutricato & Alberto Morea.
// Contact: raffaele.nutricato@tiscali.it
// -----------------------------------------------------------------

SCI2CNInArgCheck(argn(2),2,2);

in1size = string(in1size);
in2size = string(in2size);

in1dim = GetSymbolDimension(in1size);
in2dim = GetSymbolDimension(in2size);

if (in1dim == 0)
   opoutsize = in2size;
elseif (in2dim == 0)
   opoutsize = in1size;
else
   opoutsize(1) = in1size(1);
   opoutsize(2) = in2size(2);
end

endfunction
