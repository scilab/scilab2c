function fidnumber = SCI2COpenFileWrite(filename)
// function fidnumber = SCI2COpenFileWrite(filename)
// --------------------------------------------------------------------------------
//
// Status:
// 27-Oct-2007 -- Raffaele Nutricato: Author.
//
// Copyright 2007 Raffaele Nutricato.
// Contact: raffaele.nutricato@tiscali.it
// -----------------------------------------------------------------

SCI2CNInArgCheck(argn(2),1,1);

[fidnumber,fiderror] = mopen(filename,'w');
if (fiderror < 0)
   SCI2Cerror(['Cannot open (in write mode): '+filename]);
end

endfunction
