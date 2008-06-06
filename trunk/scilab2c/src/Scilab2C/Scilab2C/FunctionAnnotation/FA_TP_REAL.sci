function opout = FA_TP_REAL(in1)
// function opout = FA_TP_REAL(in1)
// -----------------------------------------------------------------
//
// Status:
// 26-Mar-2008 -- Raffaele Nutricato: Author.
// 26-Mar-2008 -- Alberto Morea: Test Ok.
//
// Copyright 2008 Raffaele Nutricato & Alberto Morea.
// Contact: raffaele.nutricato@tiscali.it
// -----------------------------------------------------------------

// ------------------------------
// --- Check input arguments. ---
// ------------------------------
SCI2CNInArgCheck(argn(2),1,1);

opout = in1;

if (in1 == 'c')
   opout = 's';
elseif (in1 == 'z')
   opout = 'd';
end

endfunction
