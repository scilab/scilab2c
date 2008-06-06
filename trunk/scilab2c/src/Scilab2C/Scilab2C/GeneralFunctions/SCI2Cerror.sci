function SCI2Cerror(errorstring)
// function SCI2Cerror(errorstring)
// -----------------------------------------------------------------
//
// Status:
// 02-May-2007 -- Nutricato Raffaele: Author.
//
// Copyright 2007 Raffaele Nutricato.
// Contact: raffaele.nutricato@tiscali.it
// -----------------------------------------------------------------

SCI2CNInArgCheck(argn(2),1,1);


mclose('all')
error('###SCI2CERROR: '+errorstring);
endfunction
