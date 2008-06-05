function GetVarAnnotationsSciFile(FileInfoDatFile);
// function GetVarAnnotationsSciFile(FileInfoDatFile);
// --------------------------------------------------------------------------------
// This function reads the .sci input file and returns all the variable annotations
// found in that file.
//
// Input data:
// FileInfoDatFile: name of the .dat file containing the FileInfo structure.
// SharedInfoDatFile: it is a buffer containing parameters that are exchanged by the
//                   functions of the SCI2C tool.
//
// Output data:
//
// Status:
// 21-Jun-2007 -- Nutricato Raffaele: Author.
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

// --- Load GlobalVars Structure. ---
load(FileInfo.GlobalVarFileName,'GlobalVars');

// --- Load LocalVars Structure. ---
load(FileInfo.Funct(funnumber).LocalVarFileName,'LocalVars');
// -------------------------
// --- End load section. ---
// -------------------------

SciFileName = FileInfo.Funct(funnumber).SCIFileName;

PrintStepInfo('Get annotations from '+SciFileName,...
   FileInfo.GeneralReport,'both');

// ---------------------------------------
// --- Open the .sci file (read only). ---
// ---------------------------------------
[inscifid,inscierr] = mopen(SciFileName,'r');
if (inscierr < 0)
   SCI2Cerror(['Cannot open: '+SciFileName])
end


// --- Loop Initialization. ---
GlobalVarNames = [];

// ----------------------------------------------
// --- Loop over the lines of the input file. ---
// ----------------------------------------------
line_position = 0;
while (meof(inscifid) == 0)
   check_string = stripblanks(mgetl(inscifid,1));
   line_position = line_position + 1;
   if (length(check_string) >= 1)
      if (SCI2Cstrncmps1size(SharedInfo.Annotations.GBLVAR,check_string))
         PrintStringInfo('Line '+string(line_position)+' - Global Variables: '+' ""'+check_string+' ""',...
            FileInfo.GeneralReport,'both','y');
         TmpGlobalAnn = stripblanks(tokens(check_string,' '));
         GlobalVarNames = [GlobalVarNames,TmpGlobalAnn(2:max(size(TmpGlobalAnn)))];
         clear TmpGlobalAnn
      elseif (SCI2Cstrncmps1size(SharedInfo.Annotations.VARTYPE,check_string))
         // Assuming the following annotation:
         // //_SCI2C_VARTYPE: name | type | size
         // Ex.:
         // //_SCI2C_VARTYPE: myvar | z | [10,4]
         TmpVarAnn = GetVarTypeAnnotation(check_string);
         PrintStringInfo('Line '+string(line_position)+' - VARTYPE annotation: '+' ""'+check_string+' ""',...
            FileInfo.GeneralReport,'file','y');
         // Check if the variable is global or local
         if length(find(GlobalVarNames==TmpVarAnn(2))) > 0
            //RN Qui manca un check per verificare se sto ridefinendo una global gia definita
            GlobalVarsNum = size(GlobalVars,1) + 1;
            GlobalVars(GlobalVarsNum).Name  = TmpVarAnn(2);
            GlobalVars(GlobalVarsNum).CName = TmpVarAnn(2);
            GlobalVars(GlobalVarsNum).Type  = TmpVarAnn(3);
            GlobalVars(GlobalVarsNum).Size  = eval(TmpVarAnn(4));
         else
            //RN Qui manca un check per verificare se sto ridefinendo una local gia definita
            LocalVarsNum = size(LocalVars,1) + 1;
            LocalVars(LocalVarsNum).Name  = TmpVarAnn(2);
            LocalVars(LocalVarsNum).CName = TmpVarAnn(2);
            LocalVars(LocalVarsNum).Type  = TmpVarAnn(3);
            LocalVars(LocalVarsNum).Size  = eval(TmpVarAnn(4));
         end
         clear TmpVarAnn
      end
   end
end
// --------------------------------------------------
// --- End loop over the lines of the input file. ---
// --------------------------------------------------

mclose(inscifid);

// ---------------------
// --- Save section. ---
// ---------------------
// --- Save File Info Structure. ---
save(FileInfoDatFile,FileInfo);

// Save Global and Local variables info into .dat files.
save(FileInfo.GlobalVarFileName,GlobalVars);
save(FileInfo.Funct(funnumber).LocalVarFileName,LocalVars);

endfunction
