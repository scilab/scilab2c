function outbool = IsNanSize(instring)
// function outbool = IsNanSize(instring)
// -----------------------------------------------------------------
//
// Status:
// 11-Feb-2008 -- Nutricato Raffaele: Author.
//
// Copyright 2008 Raffaele Nutricato.
// Contact: raffaele.nutricato@tiscali.it
// -----------------------------------------------------------------

SCI2CNInArgCheck(argn(2),1,1);


outbool = %F;
indexval = strindex(instring,'__SCI2CNANSIZE');

if(length(indexval)>=1)
   outbool = %T;
end

endfunction
