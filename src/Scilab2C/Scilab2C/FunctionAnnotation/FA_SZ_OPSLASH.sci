function opoutsize = FA_SZ_OPSLASH(in1size,in2size)
// function opoutsize = FA_SZ_OPSLASH(in1size,in2size)
// -----------------------------------------------------------------
// Returns the size of the output computed by OPSLASH operator.
// 
//
// Status:
// 28-May-2008 -- Alberto Morea: Author.
// 28-May-2008 -- Raffaele Nutricato: Test Ok.
//
// Copyright 2008 Raffaele Nutricato & Alberto Morea.
// Contact: raffaele.nutricato@tiscali.it
// -----------------------------------------------------------------

// ------------------------------
// --- Check input arguments. ---
// ------------------------------
SCI2CNInArgCheck(argn(2),2,2);

// ------------------------
// --- Generate Output. ---
// ------------------------
in1size=string(in1size);
in2size=string(in2size);

// knowing that
// b/a = (a' \ b')'  

// a'
in1sizetmp(1) = in1size(2);
in1sizetmp(2) = in1size(1);

// b'
in2sizetmp(1) = in2size(2);
in2sizetmp(2) = in2size(1);

// a'\b'
opoutsizetmp = FA_SZ_OPBACKSLASH(in2sizetmp,in1sizetmp);

// (a'\b')'
opoutsize(1) = opoutsizetmp(2);
opoutsize(2) = opoutsizetmp(1);


endfunction
