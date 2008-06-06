function SCI2CerrorFile(errorstring,filename);
// function SCI2CerrorFile(errorstring,filename);
// -----------------------------------------------------------------
//
// Status:
// 02-May-2006 -- Nutricato Raffaele: Author.
//
// Copyright 2007 Raffaele Nutricato.
// Contact: raffaele.nutricato@tiscali.it
// -----------------------------------------------------------------

SCI2CNInArgCheck(argn(2),2,2);

mclose('all')
PrintStringInfo('Error: '+errorstring,filename,'both');
error('####SCI2C_ERROR -> Read File: '+filename+'.');
endfunction
