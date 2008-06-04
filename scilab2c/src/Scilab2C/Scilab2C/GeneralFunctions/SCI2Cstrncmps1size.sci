function res = SCI2Cstrncmps1size(s1,s2);
// function res = SCI2Cstrncmps1size(s1,s2);
// -----------------------------------------------------------------
//
// Status:
// 16-Apr-2007 -- Nutricato Raffaele: Author.
//
// Copyright 2007 Raffaele Nutricato.
// Contact: raffaele.nutricato@tiscali.it
// -----------------------------------------------------------------

SCI2CNInArgCheck(argn(2),2,2);

n = length(s1);
res = (part(s1,1:n) == part(s2,1:n));

endfunction
