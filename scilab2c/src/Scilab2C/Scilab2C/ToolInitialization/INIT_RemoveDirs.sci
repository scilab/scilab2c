function INIT_RemoveDirs(FileInfo,SharedInfoRunMode)
// function INIT_RemoveDirs(FileInfo,SharedInfoRunMode)
// -----------------------------------------------------------------
//
// Output data:
// ---
//
// Status:
// 03-Jan-2008 -- Raffaele Nutricato: Author.
//
// Copyright 2008 Raffaele Nutricato.
// Contact: raffaele.nutricato@tiscali.it
// -----------------------------------------------------------------

SCI2CNInArgCheck(argn(2),2,2);

if (SharedInfoRunMode == 'GenLibraryStructure' | SharedInfoRunMode == 'All')
   disp('Removing directory: '+FileInfo.WorkingDir);
   disp('Removing directory: '+FileInfo.OutCCCodeDir);
   yesno = 'y';
   if (yesno=='y')
      rmdir(FileInfo.WorkingDir,'s');
      rmdir(FileInfo.OutCCCodeDir,'s');
   else
      SCI2Cerror('Cannot continue, because you don''t want to delete: '+FileInfo.WorkingDir);
      SCI2Cerror('Cannot continue, because you don''t want to delete: '+FileInfo.OutCCCodeDir);
   end
elseif (SharedInfoRunMode == 'Translate')
   disp('Removing directory: '+FileInfo.OutCCCodeDir);
   yesno = 'y';
   if (yesno=='y')
      rmdir(FileInfo.OutCCCodeDir,'s');
   else
      SCI2Cerror('Cannot continue, because you don''t want to delete: '+FileInfo.OutCCCodeDir);
   end
else
   disp('Unknown RunMode: ""'+SharedInfoRunMode+'"".');
   disp('Please check RunMode parameter in the SCI2CInputParameters.sce file');
   SCI2Cerror(' ');
end

endfunction
