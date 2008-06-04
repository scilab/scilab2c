function SCI2Cmdelete(InFile)
// function SCI2Cmdelete(InFile)
// -----------------------------------------------------------------
//
// Status:
// 12-Apr-2007 -- Nutricato Raffaele: Author.
//
// Copyright 2007 Raffaele Nutricato.
// Contact: raffaele.nutricato@tiscali.it
// -----------------------------------------------------------------

SCI2CNInArgCheck(argn(2),1,1);

[Inx,Inierr]=fileinfo(InFile);
if Inierr == 0
   mdelete(InFile);//NUT: questa stampa a video il file che sta cancellando.
end

endfunction
