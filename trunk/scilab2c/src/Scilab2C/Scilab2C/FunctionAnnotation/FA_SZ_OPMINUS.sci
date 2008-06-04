function opoutsize = FA_SZ_OPMINUS(in1size,in2size)
// function opoutsize = FA_SZ_OPMINUS(in1size,in2size)
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

opoutsize = FA_SZ_OPPLUSA(in1size,in2size);

endfunction
