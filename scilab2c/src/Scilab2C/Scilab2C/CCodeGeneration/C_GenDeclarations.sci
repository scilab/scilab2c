function Cdeclaration = C_GenDeclarations(ArgStruct,CDeclarationFileName,IndentLevel,ReportFileName,FlagExt)
// function Cdeclaration = C_GenDeclarations(ArgStruct,CDeclarationFileName,IndentLevel,ReportFileName,FlagExt)
// -----------------------------------------------------------------
// Status:
// 27-Oct-2007 -- Raffaele Nutricato: Author.
// 10-Jun-2008 -- Raffaele Nutricato: adapted to work with realloc function.
//
// Copyright 2007 Raffaele Nutricato.
// Contact: raffaele.nutricato@tiscali.it
// -----------------------------------------------------------------

// ------------------------------
// --- Check input arguments. ---
// ------------------------------
SCI2CNInArgCheck(argn(2),5,5);


PrintStringInfo(' ',ReportFileName,'file','y');
PrintStringInfo('***Generating C declaration***',ReportFileName,'file','y');

Cdeclaration = '';
NDeclarations = 0;
if (ArgStruct.Dimension > 0)
   if (FlagExt == 1)
      Cdeclaration(1) = 'extern ';
      Cdeclaration(2) = 'extern ';
   else
      Cdeclaration(1) = '';
      Cdeclaration(2) = '';
   end
   if (ArgStruct.Type=='g')
      if (isnan(ArgStruct.Value))
         Cdeclaration(1) = Cdeclaration(1)+C_Type(ArgStruct.Type)+...
            ' * '+ArgStruct.Name+';';         
      else
         Cdeclaration(1) = Cdeclaration(1)+C_Type(ArgStruct.Type)+...
            ' '+ArgStruct.Name+'['+ArgStruct.Size(1)+']['+ArgStruct.Size(2)+'] = {'+ArgStruct.Value+'};';
      end
      Cdeclaration(2) = Cdeclaration(2)+C_Type('i')+' __'+ArgStruct.Name+'Size[2] = {'+ArgStruct.Size(1)+','+ArgStruct.Size(2)+'};';
      NDeclarations   = 2;
   elseif ((ArgStruct.FindLike == -1) | (SCI2Cisnum(ArgStruct.Size(1))==%F) | (SCI2Cisnum(ArgStruct.Size(2))==%F))
      // Generate only the pointer that will be used by the malloc function.
      Cdeclaration(1) = Cdeclaration(1)+C_Type(ArgStruct.Type)+'* '+...
      ArgStruct.Name+' = NULL;';
      // Declare the Size array
      Cdeclaration(2) = Cdeclaration(2)+C_Type('i')+' __'+ArgStruct.Name+'Size[2];';
      NDeclarations   = 2;
   else
      // Declare the array with its size.
      Cdeclaration(1) = Cdeclaration(1)+C_Type(ArgStruct.Type)+...
         ' '+ArgStruct.Name+'['+ArgStruct.Size(1)+'*'+ArgStruct.Size(2)+'];';
      Cdeclaration(2) = Cdeclaration(2)+C_Type('i')+' __'+ArgStruct.Name+'Size[2] = {'+ArgStruct.Size(1)+','+ArgStruct.Size(2)+'};';
      NDeclarations   = 2;
   end
else
   if (FlagExt == 1)
      Cdeclaration(1) = 'extern ';
   else
      Cdeclaration(1) = '';
   end
   Cdeclaration(1) = Cdeclaration(1)+C_Type(ArgStruct.Type)+' '+ArgStruct.Name;
   if (~isnan(ArgStruct.Value) & (FlagExt == 0))
      if isreal(ArgStruct.Value)
         Cdeclaration(1) = Cdeclaration(1)+' = '+SCI2Cstring(ArgStruct.Value);
      else
         if (ArgStruct.Type == 'z')
            Cdeclaration(1) = Cdeclaration(1)+' = DoubleComplex('+SCI2Cstring(real(ArgStruct.Value))+','+SCI2Cstring(imag(ArgStruct.Value))+')';
         else
            Cdeclaration(1) = Cdeclaration(1)+' = FloatComplex('+SCI2Cstring(real(ArgStruct.Value))+','+SCI2Cstring(imag(ArgStruct.Value))+')';
         end
      end
   end
   Cdeclaration(1) = Cdeclaration(1)+';';
   NDeclarations = 1;
end


// --------------------------------------------
// --- Write C declaration into the C file. ---
// --------------------------------------------
for cntdecl = 1:NDeclarations
   PrintStringInfo('   '+Cdeclaration(cntdecl),ReportFileName,'file','y');
end
PrintStringInfo('   Writing C declaration in: '+CDeclarationFileName,ReportFileName,'file','y');
for cntdecl = 1:NDeclarations
   PrintStringInfo(C_IndentBlanks(IndentLevel)+Cdeclaration(cntdecl),CDeclarationFileName,'file','y');
end
PrintStringInfo(' ',CDeclarationFileName,'file','y');

endfunction
