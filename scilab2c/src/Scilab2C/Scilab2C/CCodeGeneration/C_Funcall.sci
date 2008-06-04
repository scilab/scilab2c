function SharedInfo = C_Funcall(FunInfo,FileInfo,SharedInfo,FlagCall)
// function SharedInfo = C_Funcall(FunInfo,FileInfo,SharedInfo,FlagCall)
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
SCI2CNInArgCheck(argn(2),4,4);

// -----------------------
// --- Initialization. ---
// -----------------------
nxtscifunname    = SharedInfo.NextSCIFunName;
nxtscifunnumber  = SharedInfo.NextSCIFunNumber;

ReportFileName       = FileInfo.Funct(nxtscifunnumber).ReportFileName;
CPass1FileName       = FileInfo.Funct(nxtscifunnumber).CPass1FileName;
CPass1FreeFileName   = FileInfo.Funct(nxtscifunnumber).CPass1FreeFileName;
HeaderFileName       = FileInfo.Funct(nxtscifunnumber).Pass1HeaderFileName;
CDeclarationFileName = FileInfo.Funct(nxtscifunnumber).CDeclarationFileName;
CInitVarsFileName    = FileInfo.Funct(nxtscifunnumber).CInitVarsFileName;
IndentLevel          = SharedInfo.NIndent;
CCall                = '';

FunctionName      = FunInfo.SCIFunctionName;
CFunName          = FunInfo.CFunctionName;
InArg             = FunInfo.InArg;
NInArg            = FunInfo.NInArg;
OutArg            = FunInfo.OutArg;
NOutArg           = FunInfo.NOutArg;
PosFirstOutScalar = FunInfo.PosFirstOutScalar;



if (SharedInfo.SkipNextFun > 0)
   SharedInfo.SkipNextFun = SharedInfo.SkipNextFun - 1;
   return;
end

if ((sum(mtlb_strcmp(FunctionName,SharedInfo.Annotations.DataPrec)) > 0) & ...
    (SharedInfo.SkipNextPrec == 1))
   SharedInfo.SkipNextPrec = SharedInfo.SkipNextPrec - 1;
   return;
end

if ((mtlb_strcmp(FunctionName,'OpEqual')) & ...
    (SharedInfo.SkipNextEqual == 1))
   SharedInfo.SkipNextEqual = SharedInfo.SkipNextEqual - 1;
   return;
end



CCall ='';
if (FunInfo.CFunctionName == SharedInfo.CMainFunName)
   if (FlagCall == 1)
      SCI2Cerror('main function called in a source code!');
   else
      CCall =CCall+'SCI2Cint ';
   end
else
   if (PosFirstOutScalar >= 1)
      if (FlagCall == 1)
         CCall = CCall+OutArg(PosFirstOutScalar).Name+' = ';
      else
         CCall = CCall+C_Type(OutArg(PosFirstOutScalar).Type)+' ';
      end
   else
      if (FlagCall == 0)
         CCall = CCall+'void ';
      end
   end
end


CCall = CCall+CFunName+'(';

clear counterin
for counterin = 1:NInArg

   if (InArg(counterin).Type == 'g' & InArg(counterin).Scope == 'String')
      TmpInArgName = '""'+InArg(counterin).Name+'""';
   elseif (InArg(counterin).Type == 'z' & (InArg(counterin).Scope == 'Number'))
      TmpInArgName = 'DoubleComplex('+SCI2Cstring(real(InArg(counterin).Value))+','+SCI2Cstring(imag(InArg(counterin).Value))+')';
   elseif (InArg(counterin).Type == 'c' & (InArg(counterin).Scope == 'Number'))
      TmpInArgName = 'FloatComplex('+SCI2Cstring(real(InArg(counterin).Value))+','+SCI2Cstring(imag(InArg(counterin).Value))+')';
   else
      TmpInArgName = InArg(counterin).Name;
   end
   
   TmpInArgType = C_Type(InArg(counterin).Type);
   
   //if (FunctionName == 'OpEqual')
   //      TmpInArgSizeVar = '__'+OutArg(counterin).Name+'Size';
   // else
   TmpInArgSizeVar = '__'+InArg(counterin).Name+'Size';   
   //end
      
   if (InArg(counterin).Dimension == 0)
      if (FlagCall == 0)
         CCall = CCall+TmpInArgType+' ';
      end
      CCall = CCall+TmpInArgName+',';
   else
      if (FlagCall == 0)
         CCall = CCall+TmpInArgType+'* '+TmpInArgName+', SCI2Cint* __'+TmpInArgName+'Size,';
      else
         CCall = CCall+'('+TmpInArgType+'* )'+TmpInArgName+',  '+TmpInArgSizeVar+',';
      end
   end
end

for counterout = 1:NOutArg
   TmpOutArgName = OutArg(counterout).Name;
   TmpOutArgType = C_Type(OutArg(counterout).Type);
   if (counterout == PosFirstOutScalar)
      if (FlagCall == 0)
         // --- Write in the declaration file the returned output scalar (if any). ---
         outscalardeclaration = TmpOutArgType+' '+TmpOutArgName+';';
         PrintStringInfo(C_IndentBlanks(1)+outscalardeclaration,CDeclarationFileName,'file','y');
         PrintStringInfo(' ',CDeclarationFileName,'file','y');
      end
   else
      if (OutArg(counterout).Dimension == 0)
         if (FlagCall == 0)
            // --- Write in the declaration file the returned output scalar (if any). ---
            outscalardeclaration = TmpOutArgType+' '+TmpOutArgName+';';
            PrintStringInfo(C_IndentBlanks(1)+outscalardeclaration,CDeclarationFileName,'file','y');
            PrintStringInfo(' ',CDeclarationFileName,'file','y');
            CCall = CCall+TmpOutArgType+'* __ptr'+TmpOutArgName+', ';
         else
            CCall = CCall+'&'+TmpOutArgName+', ';//NUT: verifica se ci vuole l'&
         end
      else
         if (FlagCall == 0)
            CCall = CCall+TmpOutArgType+'* '+TmpOutArgName+',';
            if (OutArg(counterout).FindLike == 1)  
               CCall = CCall+'SCI2Cint* __'+TmpOutArgName+'Size'+',';
            end
            outscalardeclaration = 'SCI2Cint __'+TmpOutArgName+'Size[2];';
            PrintStringInfo(C_IndentBlanks(1)+outscalardeclaration,CDeclarationFileName,'file','y');
            outscalardeclaration = '__'+TmpOutArgName+'Size[0] = '+(OutArg(counterout).Size(1))+';';
            PrintStringInfo(C_IndentBlanks(1)+outscalardeclaration,CInitVarsFileName,'file','y');
            outscalardeclaration = '__'+TmpOutArgName+'Size[1] = '+(OutArg(counterout).Size(2))+';';
            PrintStringInfo(C_IndentBlanks(1)+outscalardeclaration,CInitVarsFileName,'file','y');
            PrintStringInfo(' ',CInitVarsFileName,'file','y');
         else
            CCall = CCall+'('+TmpOutArgType+'* )'+OutArg(counterout).Name+',';
            if (OutArg(counterout).FindLike == 1)  
               CCall = CCall+'(SCI2Cint* ) __'+TmpOutArgName+'Size'+',';
            end            
         end
      end
   end
end

if (part(CCall,length(CCall):length(CCall)) == ' ')
   CCall = part(CCall,1:length(CCall)-1);
end
if (part(CCall,length(CCall):length(CCall)) == ',')
   CCall = part(CCall,1:length(CCall)-1);
end

CCall = CCall+')';
if (FlagCall == 1)
   CCall = CCall+';';
end
//NUT: la parte di generazione della C call va inserita in una funzione a parte.
//NUT: tale funzione deve avere anche uno switch che consenta di generare differenti versioni
//NUT: delle chiamate C in accordo con la libreria disponibile, fermo restando che 
//NUT:  e' sempre possibile fornire la lista delle macro.
if mtlb_strcmp(FunctionName,'return')
   // Here I introduce the pointer assignment for output scalar arguments.
   for cntout = 1:SharedInfo.CurrentFunInfo.NOutArg
      if (cntout ~= SharedInfo.CurrentFunInfo.PosFirstOutScalar & ...
          SharedInfo.CurrentFunInfo.OutArg(cntout).Dimension == 0)
         CCall = '';
         CCall = CCall+'*__ptr'+SharedInfo.CurrentFunInfo.OutArg(cntout).Name+' = '+...
            SharedInfo.CurrentFunInfo.OutArg(cntout).Name+';';
         PrintStringInfo(C_IndentBlanks(IndentLevel)+CCall,CPass1FileName,'file','y');
      end
   end

   PrintStringInfo(C_IndentBlanks(1)+'/*',CPass1FreeFileName,'file','y');
   PrintStringInfo(C_IndentBlanks(1)+'** ------------------------- ',CPass1FreeFileName,'file','y');
   PrintStringInfo(C_IndentBlanks(1)+'** --- End Free Section. --- ',CPass1FreeFileName,'file','y');
   PrintStringInfo(C_IndentBlanks(1)+'** ------------------------- ',CPass1FreeFileName,'file','y');
   PrintStringInfo(C_IndentBlanks(1)+'*/',CPass1FreeFileName,'file','y');
   PrintStringInfo(' ',CPass1FreeFileName,'file','y');
   SCI2Ccopyfile(CPass1FreeFileName,...
      CPass1FileName,'append');

   CCall = '';
   if (SharedInfo.CurrentFunInfo.CFunctionName == SharedInfo.CMainFunName)
      CCall = CCall+'return(0);';
   else
      if (SharedInfo.CurrentFunInfo.PosFirstOutScalar > 0)
         CCall = CCall+'return('+SharedInfo.CurrentFunInfo.OutArg(SharedInfo.CurrentFunInfo.PosFirstOutScalar).Name+');'
      end
   end
   PrintStringInfo(C_IndentBlanks(IndentLevel)+CCall,CPass1FileName,'file','y');
else
   PrintStringInfo(C_IndentBlanks(IndentLevel)+CCall,CPass1FileName,'file','y');
   if (FlagCall == 0)
      // Add prototype to the header file
      C_InitHeader(CCall+';',HeaderFileName,SharedInfo.Sci2CLibMainHeaderFName);
      
      // Add { at the beginning of the function.
      PrintStringInfo(C_IndentBlanks(IndentLevel)+'{',CPass1FileName,'file','y');
      
   end
end
endfunction
