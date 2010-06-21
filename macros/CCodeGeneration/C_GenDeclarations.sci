function Cdeclaration = C_GenDeclarations(ArgStruct,CDeclarationFileName,IndentLevel,ReportFileName,FlagExt,ResizeApproach)
// function Cdeclaration = C_GenDeclarations(ArgStruct,CDeclarationFileName,IndentLevel,ReportFileName,FlagExt,ResizeApproach)
// -----------------------------------------------------------------
// //NUT: add description here
//
// Input data:
// //NUT: add description here
//
// Output data:
// //NUT: add description here
//
// Status:
// 27-Oct-2007 -- Raffaele Nutricato: Author.
// 10-Jun-2008 -- Raffaele Nutricato: adapted to work with realloc function.
//
// Copyright 2007 Raffaele Nutricato.
// Contact: raffaele.nutricato@tiscali.it
// -----------------------------------------------------------------

// Generate C corresponding declaration given some information in ArgStruct
// 
  
// ------------------------------
// --- Check input arguments. ---
// ------------------------------
  SCI2CNInArgCheck(argn(2),6,6);
// #RNU_RES_B
//NUT: ilnome di questa funzione va cambiato perche' le dichiarazioni le fanno anche i for e i while.

PrintStringInfo(' ',ReportFileName,'file','y');
PrintStringInfo('***Generating C declaration***',ReportFileName,'file','y');
// #RNU_RES_E

Cdeclaration = '';
if (ArgStruct.Dimension > 0)
  if (FlagExt == 1)
    Cdeclaration(1) = 'extern ';
    Cdeclaration(2) = 'extern ';
  else
    Cdeclaration(1) = '';
    Cdeclaration(2) = '';
  end
// #RNU_RES_B
//NUT: vedi Mem_Alloc_Out per maggiori info sulla rimozione della temp nella if
// if ((ArgStruct.Scope=='Temp') | (ArgStruct.FindLike == -1) | (isnum(ArgStruct.Size(1))==%F) | (isnum(ArgStruct.Size(2))==%F))
// #RNU_RES_E
  if (ArgStruct.Type=='g')
// if (isnan(ArgStruct.Value) )
    if ((isnum(ArgStruct.Size(1))==%F) | (isnum(ArgStruct.Size(2))==%F) )
      Cdeclaration(1) = Cdeclaration(1)+C_Type(ArgStruct.Type)+...
          ' * '+ArgStruct.Name+';';
    else
      if ((FlagExt == 1) | (isnan(ArgStruct.Value)))
        Cdeclaration(1) = Cdeclaration(1)+C_Type(ArgStruct.Type)+...
            ' '+ArgStruct.Name+'['+ArgStruct.Size(1)+'*'+ArgStruct.Size(2)+'];';
      else
        Cdeclaration(1) = Cdeclaration(1)+C_Type(ArgStruct.Type)+...
            ' '+ArgStruct.Name+'['+ArgStruct.Size(1)+'*'+ArgStruct.Size(2)+'] = {'+ArgStruct.Value+'};';
      end
    end
    Cdeclaration(2) = Cdeclaration(2)+C_Type('i')+' __'+ArgStruct.Name+'Size[2] = {'+ArgStruct.Size(1)+','+ArgStruct.Size(2)+'};';
  elseif ((ArgStruct.FindLike == -1) | ...
          (isnum(ArgStruct.Size(1))==%F) | (isnum(ArgStruct.Size(2))==%F) | ...
          (ResizeApproach=='REALLOC_ALL_RESIZE_ALL' & ArgStruct.Type~='g'))
// #RNU_RES_B
//RNU sulle stringhe non ho ancora deciso se applicare la realloc.
// Generate only the pointer that will be used by the malloc function.
// #RNU_RES_E
    if (FlagExt == 1)
      Cdeclaration(1) = Cdeclaration(1)+C_Type(ArgStruct.Type)+'* '+...
          ArgStruct.Name+';';
    else
      Cdeclaration(1) = Cdeclaration(1)+C_Type(ArgStruct.Type)+'* '+...
          ArgStruct.Name+' = NULL;';
    end
// Declare the Size array
    Cdeclaration(2) = Cdeclaration(2)+C_Type('i')+' __'+ArgStruct.Name+'Size[2];';
  else
// Declare the array with its size.
    computedSize = ArgStruct.Size(1);
    computedSizeLength = size(ArgStruct.Size, '*');
    computedSizeField =  ArgStruct.Size(1);
    for sizeIterator = 2:computedSizeLength;
      computedSize = computedSize + ' * ' + ArgStruct.Size(sizeIterator);
      computedSizeField = computedSizeField + ', ' + ArgStruct.Size(sizeIterator);
    end
    Cdeclaration(1) = Cdeclaration(1)+C_Type(ArgStruct.Type)+' '+ArgStruct.Name+'['+computedSize+'];';
    Cdeclaration(2) = Cdeclaration(2)+C_Type('i')+' __'+ArgStruct.Name+'Size['+string(computedSizeLength)+']';
    if (FlagExt <> 1)
      Cdeclaration(2) = Cdeclaration(2)+' = {'+computedSizeField+'};';
    end
    Cdeclaration(2) = Cdeclaration(2)+';';
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
end


// --------------------------------------------
// --- Write C declaration into the C file. ---
// --------------------------------------------
for cntdecl = 1:size(Cdeclaration, '*')
  PrintStringInfo('   '+Cdeclaration(cntdecl),ReportFileName,'file','y');
  PrintStringInfo(C_IndentBlanks(IndentLevel)+Cdeclaration(cntdecl),CDeclarationFileName,'file','y');
end

PrintStringInfo('   Writing C declaration in: '+CDeclarationFileName,ReportFileName,'file','y');
PrintStringInfo(' ',CDeclarationFileName,'file','y');

endfunction
// #RNU_RES_B
//NUT: dove sta il controllo che verifica se dopo aver dichiarato una local A[10] essa viene utilizzata
//NUT: per memorizzare un A = sin(B) dove B[11]??
// #RNU_RES_E
