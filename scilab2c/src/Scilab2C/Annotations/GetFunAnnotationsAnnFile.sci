function [FunTypeAnnot,FunSizeAnnot] = ...
   GetFunAnnotationsAnnFile(SharedInfo_Annotations,NOut,AnnFileName,ReportFileName);
// function [FunTypeAnnot,FunSizeAnnot] = ...
//    GetFunAnnotationsAnnFile(SharedInfo_Annotations,NOut,AnnFileName,ReportFileName);
// -----------------------------------------------------------------
// This function extracts the FUN TYPE and SIZE annotations from the 
// input .ann file.
// Example of annotation:
// //_SCI2C_NOUT: 1
// //_SCI2C_FUNSIZE: OutArg(1).Size = InArg(1).Size
// //_SCI2C_FUNTYPE: OutArg(1).Type = InArg(1).Type
// No blank lines are allowed between function annotations.
//
// Input data:
//
// Output data:
//
// Status:
// 11-Jul-2007 -- Nutricato Raffaele: Author.
// -----------------------------------------------------------------

// ------------------------------
// --- Check input arguments. ---
// ------------------------------
if (argn(2) ~= 4)
   SCI2Cerror('Incorrect number of input arguments.');
end

// ---------------------------------------
// --- Open the .sci file (read only). ---
// ---------------------------------------
[inscifid,inscierr] = mopen(AnnFileName,'r');
if (inscierr < 0)
   SCI2Cerror(['Cannot open: '+AnnFileName])
end

// ----------------------------------------------
// --- Loop over the lines of the input file. ---
// ----------------------------------------------
// Position file pointer to the desired NOUT section,
// and read the NOUT annotation.
FoundNout = 0;
line_position = 0;
while ((meof(inscifid) == 0) & (FoundNout == 0))
   check_string = stripblanks(mgetl(inscifid,1));
   line_position = line_position + 1;
   if (~isempty(check_string))
      if (SCI2Cstrncmps1size(SharedInfo_Annotations.FUNNOUT,check_string))
         FunNOutAnnot = part(check_string,length(SharedInfo_Annotations.FUNNOUT)+1:length(check_string));
         if (eval(FunNOutAnnot) == NOut)
            PrintStringInfo('Line '+string(line_position)+' - Function NOut Annotation: '+' ""'+check_string+' ""',...
               ReportFileName,'file','y');
            FoundNout = 1;
         end
      end
   end
end

if (FoundNout == 0)
   disp('Please check file: '+AnnFileName);
   SCI2Cerror('Could not find ""'+SharedInfo_Annotations.FUNNOUT+' '+string(NOut)+'"" annotation.');
else
   for cntout = 1:NOut
      // Read the Fun size annotation.
      check_string = stripblanks(mgetl(inscifid,1));
      line_position = line_position + 1;
      if (isempty(check_string) == %F)
         if (SCI2Cstrncmps1size(SharedInfo_Annotations.FUNSIZE,check_string))
            PrintStringInfo('Line '+string(line_position)+' - Function Size Annotation: '+' ""'+check_string+' ""',...
               ReportFileName,'file','y');
            FunSizeAnnot(cntout) = ...
               stripblanks(part(check_string,length(SharedInfo_Annotations.FUNSIZE)+1:length(check_string)));
         else
            SCI2Cerror('Line '+string(line_position)+' Function type annotation (//_SCI2C_FUNSIZE:) not found in file: '+AnnFileName,...
               ReportFileName,'file','y');
         end      
         // Read the Fun type annotation.
         check_string = stripblanks(mgetl(inscifid,1));
         line_position = line_position + 1;
         if (SCI2Cstrncmps1size(SharedInfo_Annotations.FUNTYPE,check_string))
            PrintStringInfo('Line '+string(line_position)+' - Function Type Annotation: '+' ""'+check_string+' ""',...
               ReportFileName,'file','y');
            FunTypeAnnot(cntout) = ...
               stripblanks(part(check_string,length(SharedInfo_Annotations.FUNTYPE)+1:length(check_string)));
         else
            SCI2Cerror('Line '+string(line_position)+' Function type annotation (//_SCI2C_FUNTYPE:) not found in file: '+AnnFileName,...
               ReportFileName,'file','y');
         end      
      end
   end
end
// --------------------------------------------------
// --- End loop over the lines of the input file. ---
// --------------------------------------------------
mclose(inscifid);
endfunction
