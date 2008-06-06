function outstring = SCI2Cstring(innum)
// function outstring = SCI2Cstring(innum)
// -----------------------------------------------------------------
//
// Status:
// 07-May-2008 -- Nutricato Raffaele: Author.
//
// Copyright 2008 Raffaele Nutricato.
// Contact: raffaele.nutricato@tiscali.it
// -----------------------------------------------------------------

SCI2CNInArgCheck(argn(2),1,1);

outstring=strsubst(string(innum),'D','e');

endfunction
