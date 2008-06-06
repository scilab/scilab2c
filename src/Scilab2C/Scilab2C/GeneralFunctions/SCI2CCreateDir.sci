function SCI2CCreateDir(OutDir)
// function SCI2CCreateDir(OutDir)
// -----------------------------------------------------------------
//
// Status:
// 25-Jun-2007 -- Raffaele Nutricato: Author.
//
// Copyright 2007 Raffaele Nutricato.
// Contact: raffaele.nutricato@tiscali.it
// -----------------------------------------------------------------

SCI2CNInArgCheck(argn(2),1,1);

[tmppath,tmpfname,tmpextension]=fileparts(OutDir)  ;

status_dir = mkdir(tmppath,tmpfname+tmpextension) ;
if (status_dir == 0)
   SCI2Cerror('Cannot create: '+OutDir);
end

endfunction
