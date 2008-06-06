function filenamefprintf(filename,ennewline,str)
// function filenamefprintf(filename,ennewline,str)
// --------------------------------------------------------------------------------
//
// Status:
// 31-Jan-2006 -- Nutricato Raffaele: Author.
// 31-Jan-2006 -- Nutricato Raffaele: TEST OK.
//
// Copyright 2006 Raffaele Nutricato.
// Contact: raffaele.nutricato@tiscali.it
// -----------------------------------------------------------------

SCI2CNInArgCheck(argn(2),3,3);


   [FidReportFile, mess] = mopen(filename,'a+');
   if (FidReportFile == -1) then
      SCI2Cerror(mess);
   end
   if ennewline=='y' then
      mfprintf(FidReportFile,'%s\n',str);
   else
      mfprintf(FidReportFile,'%s',str);
   end
   mclose(FidReportFile);
   
endfunction
