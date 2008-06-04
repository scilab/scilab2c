function typeout = FA_TP_COMPLEX(in1)
// function typeout = FA_TP_COMPLEX(in1)
// -----------------------------------------------------------------
//
// Status:
// 26-Jan-2008 -- Raffaele Nutricato: Author.
// 26-Jan-2008 -- Alberto Morea: Test Ok.
//
// Copyright 2008 Raffaele Nutricato & Alberto Morea.
// Contact: raffaele.nutricato@tiscali.it
// -----------------------------------------------------------------

// ------------------------------
// --- Check input arguments. ---
// ------------------------------
SCI2CNInArgCheck(argn(2),1,1);


if (in1 == 's')
   typeout = 'c';
elseif (in1 == 'd')
   typeout = 'z';
else
   typeout = in1;
end
endfunction
