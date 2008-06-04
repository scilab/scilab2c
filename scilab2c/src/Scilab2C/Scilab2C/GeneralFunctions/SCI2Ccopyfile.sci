function SCI2Ccopyfile(InFileName,OutFileName,CopyMode)
// function SCI2Ccopyfile(InFileName,OutFileName,CopyMode)
// -----------------------------------------------------------------
//
// Status:
// 23-Nov-2007 -- Raffaele Nutricato: Author.
//
// Copyright 2007 Raffaele Nutricato
// -----------------------------------------------------------------

SCI2CNInArgCheck(argn(2),3,3);

if (CopyMode == 'append')
   fidIn = SCI2COpenFileRead(InFileName);
   
   tmpline = mgetl(fidIn,1);
   while (meof(fidIn) == 0)
      PrintStringInfo(tmpline, OutFileName, 'file', 'y');
      tmpline = mgetl(fidIn,1);
   end
   mclose(fidIn);
elseif (CopyMode == 'overwrite')
   PrintStringInfo(' ', OutFileName, 'file', 'y'); // Cannot use scilab copyfile when the directory is empty!.
   copyfile(InFileName,OutFileName);
else
   SCI2Cerror('Unknown CopyMode: ""'+CopyMode+'""');
end

endfunction
