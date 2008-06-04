function Cdeclaration = C_GenDeclarations(ArgStruct,CDeclarationFileName,IndentLevel,ReportFileName,FlagExt)
// function Cdeclaration = C_GenDeclarations(ArgStruct,CDeclarationFileName,IndentLevel,ReportFileName,FlagExt)
// -----------------------------------------------------------------
//
// Status:
// 27-Oct-2007 -- Raffaele Nutricato: Author.
//
// Copyright 2007 Raffaele Nutricato.
// Contact: raffaele.nutricato@tiscali.it
// -----------------------------------------------------------------

// ------------------------------
// --- Check input arguments. ---
// ------------------------------
SCI2CNInArgCheck(argn(2),5,5);

//NUT: ilnome di questa funzione va cambiato perche' le dichiarazioni le fanno anche i for e i while.


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
   //NUT: vedi Mem_Alloc_Out per maggiori info sulla rimozione della temp nella if
   // if ((ArgStruct.Scope=='Temp') | (ArgStruct.FindLike == -1) | (SCI2Cisnum(ArgStruct.Size(1))==%F) | (SCI2Cisnum(ArgStruct.Size(2))==%F))
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
      ArgStruct.Name+';';
      // Declare the Size array
      Cdeclaration(2) = Cdeclaration(2)+C_Type('i')+' __'+ArgStruct.Name+'Size[2];';
      NDeclarations   = 2;
   else
      // Declare the array with its size.
      Cdeclaration(1) = Cdeclaration(1)+C_Type(ArgStruct.Type)+...
         ' '+ArgStruct.Name+'['+ArgStruct.Size(1)+']['+ArgStruct.Size(2)+'];';
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
for cntdecl = 1:NDeclarations
   PrintStringInfo(C_IndentBlanks(IndentLevel)+Cdeclaration(cntdecl),CDeclarationFileName,'file','y');
end
PrintStringInfo(' ',CDeclarationFileName,'file','y');

endfunction
//NUT: dove sta il controllo che verifica se dopo aver dichiarato una local A[10] essa viene utilizzata
//NUT: per memorizzare un A = sin(B) dove B[11]??
