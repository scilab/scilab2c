function AnnotationFnc = AST_CheckPrecSpecifier(FunctionName,FileInfo,SharedInfo);
// function AnnotationFnc = AST_CheckPrecSpecifier(FunctionName,FileInfo,SharedInfo);
// -----------------------------------------------------------------
//
// Status:
// 13-Apr-2007 -- Raffaele Nutricato: Author.
//
// Copyright 2007 Raffaele Nutricato.
// Contact: raffaele.nutricato@tiscali.it
// -----------------------------------------------------------------

// ------------------------------
// --- Check input arguments. ---
// ------------------------------
SCI2CNInArgCheck(argn(2),3,3);

// -----------------------
// --- Initialization. ---
// -----------------------
nxtscifunname   = SharedInfo.NextSCIFunName;
nxtscifunnumber = SharedInfo.NextSCIFunNumber;
ReportFileName  = FileInfo.Funct(nxtscifunnumber).ReportFileName;
PrintStringInfo(' ',ReportFileName,'file','y');

//NUT: da sistemare senza le global
global SCI2CSTACK 
global StackPosition;
global STACKDEDUG

AnnotationFnc = 'default';
// ---------------------------
// --- End Initialization. ---
// ---------------------------

Pop1 = AST_PopASTStack(); //           Rhs    : 
if (mtlb_strcmp(stripblanks(Pop1),'Rhs    :'))
   Pop2 = AST_PopASTStack(); //           #lhs   : 1
   if (mtlb_strcmp(stripblanks(Pop2),'#lhs   : 1'))
      Pop3 = AST_PopASTStack(); //         Funcall  : double
      FunctionName = stripblanks(part(Pop3,12:length(Pop3)));
      for counterdataprec = 1:max(size(SharedInfo.Annotations.DataPrec))
         if (mtlb_strcmp(FunctionName,SharedInfo.Annotations.DataPrec(counterdataprec)))
            AnnotationFnc = FunctionName;
         end
      end
      AST_PushASTStack(Pop3);
   end
   AST_PushASTStack(Pop2);
end
AST_PushASTStack(Pop1);


endfunction
