function SCI2CCreateDir(OutDir);
// function SCI2CCreateDir(OutDir);
// -----------------------------------------------------------------
// Create the dir OutDir.
//
// Input data:
// OutDir:
//
// Output data:
// ---
//
// Status:
// 25-Jun-2007 -- Nutricato Raffaele: Author.
// -----------------------------------------------------------------

status_dir = mkdir(OutDir) ;
if (status_dir == 0)
   SCI2Cerror('Cannot create: '+OutDir);
end

endfunction
