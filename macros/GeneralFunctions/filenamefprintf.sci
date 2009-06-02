function filenamefprintf(filename,ennewline,str)
// function filenamefprintf(filename,ennewline,str)
// --------------------------------------------------------------------------------
// Uses the printf to print the string specified by varargin. filenamefprintf
// uses the filename instead of the fid parameter used by fprintf. 
// Everytime filenamefprintf is called it
// opens the file, prints the string in it and then closes it.
// Opening is performed in read/append mode (at+).
//
// Input data:
// filename: string that specifies the name of the file.
// varargin are the input arguments for the printf.
//
// Output data:
// ---
//
// Status:
// 31-Jan-2006 -- Nutricato Raffaele: Author.
// 31-Jan-2006 -- Nutricato Raffaele: TEST OK.
//
// Copyright 2006 Raffaele Nutricato.
// Contact: raffaele.nutricato@tiscali.it
// -----------------------------------------------------------------

// ------------------------------
// --- Check input arguments. ---
// ------------------------------
SCI2CNInArgCheck(argn(2),3,3);


//   [FidReportFile, mess] = mopen(deblank(filename),'at+');
   [FidReportFile, mess] = mopen(filename,'a+');
   if (FidReportFile == -1) then
      SCI2Cerror(mess);
   end
   if ennewline=='y' then
      mfprintf(FidReportFile, str+'\n');
   else
      mfprintf(FidReportFile, str);
   end
   mclose(FidReportFile);
   
endfunction
