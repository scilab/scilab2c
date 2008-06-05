function SCI2Cerror(errorstring);
// function SCI2Cerror(errorstring);
// -----------------------------------------------------------------
// It is the error function but before issuing the error, perorms
// the mclose('all');
// 02-May-2006 -- Nutricato Raffaele: Author.
// -----------------------------------------------------------------

mclose('all')
error('###########SCI2C_ERROR: '+errorstring);
endfunction
