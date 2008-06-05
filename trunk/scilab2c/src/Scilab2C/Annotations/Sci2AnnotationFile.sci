function Sci2AnnotationFile(FileInfoDatFile,SciFileName)
// function Sci2AnnotationFile(FileInfoDatFile,SciFileName)
// --------------------------------------------------------------------------------
// This function reads the .sci input file and generates the correspondig .ann
// file.
//
// Input data:
// FileInfoDatFile: name of the .dat file containing the FileInfo structure.
//
// Output data:
//
// Status:
// 25-Jun-2007 -- Nutricato Raffaele: Author.
// -----------------------------------------------------------------

// ---------------------
// --- Load section. ---
// ---------------------
// --- Load File Info Structure. ---
load(FileInfoDatFile,'FileInfo');

// --- Load Shared Info Structure. ---
load(FileInfo.SharedInfoDatFile,'SharedInfo');

// --- Extraction of the function name and number. ---
funname   = SharedInfo.Next(1).SCIFunName;
funnumber = SharedInfo.NextSCIFunNumber;
// -------------------------
// --- End load section. ---
// -------------------------

// --- File names initialization. ---
[tmppath,tmpname,tmpext] = fileparts(SciFileName);
AnnFileName = fullfile(FileInfo.USER2CLibAnnDirName,tmpname+'.ann');

PrintStepInfo('Generate annotations file: '+AnnFileName,...
   FileInfo.GeneralReport,'both');

// ---------------------------------------
// --- Open the .sci file (read only). ---
// ---------------------------------------
[inscifid,inscierr] = mopen(SciFileName,'r');
if (inscierr < 0)
   SCI2Cerror(['Cannot open (in read mode): '+SciFileName]);
end

// ----------------------------------------------
// --- Loop over the lines of the input file. ---
// ----------------------------------------------
line_position = 0;
while (meof(inscifid) == 0)
   check_string = stripblanks(mgetl(inscifid,1));
   line_position = line_position + 1;
   if (length(check_string) >= 1)
      if ((SCI2Cstrncmps1size(SharedInfo.Annotations.GBLVAR,check_string)) | ...
         (SCI2Cstrncmps1size(SharedInfo.Annotations.VARTYPE,check_string)) | ...
         (SCI2Cstrncmps1size(SharedInfo.Annotations.FUNNOUT,check_string)) | ...
         (SCI2Cstrncmps1size(SharedInfo.Annotations.FUNSIZE,check_string)) | ...
         (SCI2Cstrncmps1size(SharedInfo.Annotations.FUNTYPE,check_string)))
         PrintStringInfo('Line '+string(line_position)+' - Found Annotation:: '+' ""'+check_string+' ""',...
            FileInfo.GeneralReport,'file','y');
         PrintStringInfo(check_string,...
            AnnFileName,'file','y');
 
      end
   end
end
// --------------------------------------------------
// --- End loop over the lines of the input file. ---
// --------------------------------------------------

mclose(inscifid);
endfunction
