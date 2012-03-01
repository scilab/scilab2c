function [FunTypeAnnot,FunSizeAnnot] = ...
    FA_GetFunAnn(NInArg,NOutArg,FunName,FileInfo,SharedInfo)
// function [FunTypeAnnot,FunSizeAnnot] = ...
//    FA_GetFunAnn(NInArg,NOutArg,FunName,FileInfo,SharedInfo)
// -----------------------------------------------------------------
// #RNU_RES_B
// This function extracts the TYPE and SIZE annotations from the
// input .ann file.
// No blank lines are allowed between function annotations.
//
// #RNU_RES_E
// Input data:
// //NUT: Add description here
//
// Output data:
// //NUT: Add description here
//
// Status:
// 11-Jul-2007 -- Nutricato Raffaele: Author.
//
// Copyright 2007 Raffaele Nutricato.
// Contact: raffaele.nutricato@tiscali.it
// -----------------------------------------------------------------

//NUT: consider the possibility to split this function into more functions.

// ------------------------------
// --- Check input arguments. ---
// ------------------------------
SCI2CNInArgCheck(argn(2),5,5);

// -----------------------
// --- Initialization. ---
// -----------------------
nxtscifunname   = SharedInfo.NextSCIFunName;
nxtscifunnumber = SharedInfo.NextSCIFunNumber;
ReportFileName  = FileInfo.Funct(nxtscifunnumber).ReportFileName;
// #RNU_RES_B
PrintStringInfo(' ',ReportFileName,'file','y');
PrintStringInfo('***Reading function annotations***',ReportFileName,'file','y');
// #RNU_RES_E
SCI2CClassFileName = GetClsFileName(FunName,FileInfo,SharedInfo);
FunTypeAnnot = '';
FunSizeAnnot = '';
// ---------------------------
// --- End Initialization. ---
// ---------------------------


// ---------------------------------------------
// --- Read the annotations of the function. ---
// ---------------------------------------------
// --- Open the .sci file (read only). ---
inclsfid = SCI2COpenFileRead(SCI2CClassFileName);

// #RNU_RES_B
// --- Loop over the lines of the input file. ---
// Position file pointer to the desired NInArg/NOutArg section,
// and read the NOutArg annotation.
// #RNU_RES_E
FoundNIn  = 0;
FoundNOut = 0;
line_position = 0;
while ((meof(inclsfid) == 0) & (FoundNIn == 0) & (FoundNOut == 0))
  check_string = stripblanks(mgetl(inclsfid,1));
  line_position = line_position + 1;
  if (~isempty(check_string))

// #RNU_RES_B
// --- Search for the NIN annotation. ---
// #RNU_RES_E
    if (SCI2Cstrncmps1size(SharedInfo.Annotations.FUNNIN,check_string))
      FUNNINAnnot = part(check_string,length(SharedInfo.Annotations.FUNNIN)+1:length(check_string));
// #RNU_RES_B
// --- Check NIN value. ---
// #RNU_RES_E
      if (eval(FUNNINAnnot) == NInArg)
// #RNU_RES_B
        PrintStringInfo('   Line '+string(line_position)+' - Function NInArg Annotation: '+' ""'+check_string+' ""',...
                        ReportFileName,'file','y');
// #RNU_RES_E
        FoundNIn = 1;
        check_string = stripblanks(mgetl(inclsfid,1));
        line_position = line_position + 1;
        if (~isempty(check_string))

// #RNU_RES_B
// --- Search for the NOUT annotation. ---
// #RNU_RES_E
          if (SCI2Cstrncmps1size(SharedInfo.Annotations.FUNNOUT,check_string))
            FUNNOUTAnnot = part(check_string,length(SharedInfo.Annotations.FUNNOUT)+1:length(check_string));

// #RNU_RES_B
// --- Check NOUT value. ---
// #RNU_RES_E
            if (eval(FUNNOUTAnnot) == NOutArg)
// #RNU_RES_B
              PrintStringInfo('   Line '+string(line_position)+' - Function NOutArg Annotation: '+' ""'+check_string+' ""',...
                              ReportFileName,'file','y');
// #RNU_RES_E
              FoundNOut = 1;
            else
              FoundNIn = 0;
            end
          else
            PrintStringInfo(' ',ReportFileName,'both','y');
            PrintStringInfo('SCI2CERROR: Incorrect format for function annotation.',ReportFileName,'both','y');
            PrintStringInfo('SCI2CERROR: Expected '+SharedInfo.Annotations.FUNNIN+' field in the annotations of the function.',ReportFileName,'both','y');
            PrintStringInfo(' ',ReportFileName,'both','y');
            error(9999, 'SCI2CERROR: Incorrect format for function annotation.');
          end
        else
          PrintStringInfo(' ',ReportFileName,'both','y');
          PrintStringInfo('SCI2CERROR: Incorrect format for function annotation.',ReportFileName,'both','y');
          PrintStringInfo('SCI2CERROR: Expected '+SharedInfo.Annotations.FUNNIN+' field in the annotations of the function.',ReportFileName,'both','y');
          PrintStringInfo(' ',ReportFileName,'both','y');
          error(9999, 'SCI2CERROR: Incorrect format for function annotation.');
        end
      end
    end
  end
end

if (FoundNOut*FoundNIn == 0)
  PrintStringInfo(' ',ReportFileName,'both','y');
  PrintStringInfo('SCI2CERROR: Please check file: '+SCI2CClassFileName,ReportFileName,'both','y');
  PrintStringInfo('SCI2CERROR: Incorrect function annotation.',ReportFileName,'both','y');
  PrintStringInfo('SCI2CERROR: There are two possibilities:',ReportFileName,'both','y');
  PrintStringInfo('SCI2CERROR: 1. Syntax error in function annotations.',ReportFileName,'both','y');
  PrintStringInfo('SCI2CERROR: 2. Missing the right combination of NIN/NOUT annotations: ""'+SharedInfo.Annotations.FUNNIN+string(NInArg)+','+SharedInfo.Annotations.FUNNOUT+' '+string(NOutArg)+'"".',ReportFileName,'both','y');
  PrintStringInfo(' ',ReportFileName,'both','y');
  error(9999, 'SCI2CERROR: Incorrect function annotation.');
else

  // In case we are reading to much informations
  readNewLine = %t;

  for cntout = 1:NOutArg
    SCI2C_nout=cntout; // Useful for eval.

// #RNU_RES_B
// Read the Fun type annotation.
// #RNU_RES_E
    if (readNewLine == %t)
      check_string = stripblanks(mgetl(inclsfid,1));
      line_position = line_position + 1;
    else
      // reset state
      readNewLine = %t;
    end
    if (isempty(check_string) == %F)
      tmpannstring = eval(SharedInfo.Annotations.FUNTYPE);
      if (SCI2Cstrncmps1size(tmpannstring,check_string))
// #RNU_RES_B
        PrintStringInfo('   Line '+string(line_position)+' - Function Type Annotation: '+' ""'+check_string+' ""',...
                        ReportFileName,'file','y');
// #RNU_RES_E
        FunTypeAnnot(cntout) = ...
            stripblanks(part(check_string,length(tmpannstring)+1:length(check_string)));
      end
    else
      PrintStringInfo(' ',ReportFileName,'both','y');
      PrintStringInfo('SCI2CERROR: Line '+string(line_position)+' Function type annotation not found in file: '+SCI2CClassFileName,ReportFileName,'both','y');
      PrintStringInfo(' ',ReportFileName,'both','y');
      error(9999, 'SCI2CERROR: Line '+string(line_position)+' Function type annotation not found in file: '+SCI2CClassFileName);
    end

// #RNU_RES_B
// --- Read the Fun size annotation. ---
// #RNU_RES_E
    SCI2C_nelem = 0; // Useful for eval.
//    while(SCI2C_nelem < 2 & isempty(check_string) == %F)
    while(SCI2C_nelem < 3 & isempty(check_string) == %F)
      line_position = line_position + 1;
// #RNU_RES_B
      PrintStringInfo('   Line '+string(line_position)+' - Function Size Annotation: '+' ""'+check_string+' ""',...
                      ReportFileName,'file','y');
      if (isempty(check_string) == %F)
        SCI2C_nelem = SCI2C_nelem + 1
        tmpannstring = eval(SharedInfo.Annotations.FUNSIZE);
        check_string = stripblanks(mgetl(inclsfid,1));
        if (SCI2Cstrncmps1size(tmpannstring,check_string))
// #RNU_RES_E
          FunSizeAnnot(cntout,SCI2C_nelem) = ...
              stripblanks(part(check_string,length(tmpannstring)+1:length(check_string)));
        else
          readNewLine = %f;
        end
      else
        PrintStringInfo(' ',ReportFileName,'both','y');
        PrintStringInfo('SCI2CERROR: Line '+string(line_position)+' Function size annotation not found in file: '+SCI2CClassFileName,ReportFileName,'both','y');
        PrintStringInfo(' ',ReportFileName,'both','y');
        error(9999, 'SCI2CERROR: Line '+string(line_position)+' Function size annotation not found in file: '+SCI2CClassFileName);
      end
    end
  end
end
// --- End loop over the lines of the input file. ---
mclose(inclsfid);
// -------------------------------------------------
// --- End Read the annotations of the function. ---
// -------------------------------------------------

endfunction
