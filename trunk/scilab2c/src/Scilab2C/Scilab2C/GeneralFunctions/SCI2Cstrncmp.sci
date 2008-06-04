function res = SCI2Cstrncmp(s1,s2,n)
// function res = SCI2Cstrncmp(s1,s2,n)
// -----------------------------------------------------------------
//
// Status:
// 16-Apr-2007 -- Nutricato Raffaele: Author.
//
// Copyright 2007 Raffaele Nutricato.
// Contact: raffaele.nutricato@tiscali.it
// -----------------------------------------------------------------

SCI2CNInArgCheck(argn(2),3,3);

res = (part(s1,1:n) == part(s2,1:n));

endfunction
