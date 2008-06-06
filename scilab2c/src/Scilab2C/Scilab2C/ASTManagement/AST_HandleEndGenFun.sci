function [FileInfo,SharedInfo] = AST_HandleEndGenFun(FileInfo,SharedInfo,ASTFunType)
// function [FileInfo,SharedInfo] = AST_HandleEndGenFun(FileInfo,SharedInfo,ASTFunType)
// -----------------------------------------------------------------
//
// Status:
// 11-Apr-2007 -- Raffaele Nutricato: Author.
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
nxtscifunname       = SharedInfo.NextSCIFunName;
nxtscifunnumber     = SharedInfo.NextSCIFunNumber;
ReportFileName      = FileInfo.Funct(nxtscifunnumber).ReportFileName;
Pass1HeaderFileName = FileInfo.Funct(nxtscifunnumber).Pass1HeaderFileName;
FunInfoDatDir       = FileInfo.FunctionList.FunInfoDatDir;

Flag_FunAlreadyCalled = 0;
PrintStepInfo('Handling Funcall/Operation/Equal',FileInfo.Funct(nxtscifunnumber).ReportFileName,'file');

//NUT: da sistemare senza le global
global SCI2CSTACK 
global StackPosition;
global STACKDEDUG
// ---------------------------
// --- End Initialization. ---
// ---------------------------

// ---------------------------------------------
// --- Retrieve FunCall Parameters from AST. ---
// ---------------------------------------------
//NUT: verifica se ASTFunType e' veramente importante
[ASTFunName,InArg,NInArg,OutArg,NOutArg] = AST_GetFuncallPrm(FileInfo,SharedInfo,ASTFunType);
if (ASTFunName == 'OpIns')
   SharedInfo.SkipNextEqual = 1;
   SharedInfo.Equal.Nins = SharedInfo.Equal.Nins + 1;
   //NUT: Force ins to have 0 args. Double check it. 
   NOutArg = 0;
   //NUT: io aumenterei qui gli argomenti in ingresso della ins cosi qui vengono fatte tutte le modifiche del
   //NUT: caso e la C_FunCall non se ne deve preoccupare, vedi se lo stesso vale per le altre funzioni
   //NUT: speciali presenti nell C_FunCall.
   
   // 1 more input argument containing the values to be inserted in the matrix.
   NInArg = NInArg + 1; 
   InArg(NInArg).Name = SharedInfo.Equal.InArg(SharedInfo.Equal.Nins).Name;
   InArg(NInArg).Scope = SharedInfo.Equal.InArg(SharedInfo.Equal.Nins).Scope;
elseif (ASTFunName == 'global')
   SharedInfo.SkipNextEqual = 1;
   SharedInfo.SkipNextFun = 1;
   if (NInArg ~= 1)
      PrintStringInfo(' ',ReportFileName,'both','y');
      PrintStringInfo('SCI2CERROR: Multiple declaration of global variables is not allowed.',ReportFileName,'both','y');
      PrintStringInfo('SCI2CERROR: See example below:',ReportFileName,'both','y');
      PrintStringInfo('SCI2CERROR: global var1 var2; //NOT ALLOWED',ReportFileName,'both','y');
      PrintStringInfo('SCI2CERROR: global var1; //ALLOWED',ReportFileName,'both','y');
      PrintStringInfo('SCI2CERROR: global var2; //ALLOWED',ReportFileName,'both','y');
      PrintStringInfo(' ',ReportFileName,'both','y');
      SCI2Cerror(' ');
   end
   if (NOutArg ~= 1)
      PrintStringInfo(' ',ReportFileName,'both','y');
      PrintStringInfo('SCI2CERROR: Unexpected number of output arguments for global function.',ReportFileName,'both','y');
      PrintStringInfo('SCI2CERROR: Please report this error to:',ReportFileName,'both','y');
      PrintStringInfo('SCI2CERROR: raffaele.nutricato@tiscali.it',ReportFileName,'both','y');
      PrintStringInfo(' ',ReportFileName,'both','y');
      SCI2Cerror(' ');
   end
end

// --------------------------------------
// --- Read the function annotations. ---
// --------------------------------------
if (ASTFunName == 'OpEqual')
   FunTypeAnnot = '';
   FunSizeAnnot = '';
else
   [FunTypeAnnot,FunSizeAnnot] = FA_GetFunAnn(NInArg,NOutArg,ASTFunName,FileInfo,SharedInfo);
end

// -------------------------------------------------------------------------------------------
// --- Search for Equal Lhs and precision specifier to be applied to the current function. ---
// -------------------------------------------------------------------------------------------
[LhsArg,NLhsArg,FunPrecSpecifier,SharedInfo] = AST_GetPrecAndLhsArg(OutArg,NOutArg,ASTFunName,FunTypeAnnot,FunSizeAnnot,ASTFunType,FileInfo,SharedInfo);
//NUT: questa funzione contiene troppi parametri e mi sembra disordinata.

// --------------------------------
// --- Input Arguments Section. ---
// --------------------------------
// --- Get Input Arguments info from their numerical value or from the symbol table. ---
if (ASTFunName == 'global')
   [TBFlagfound,TBType,TBSize,TBValue,TBFindLike,TBDimension,TBScope] = ...
      ST_GetSymbolInfo(InArg(1).Name,FileInfo,SharedInfo);
   if (TBFlagfound == 1)
      InArg(1).Type      = TBType;
      InArg(1).Size      = TBSize;
      InArg(1).Value     = TBValue;
      InArg(1).FindLike  = TBFindLike;
      InArg(1).Dimension = TBDimension;
      InArg(1).Scope     = TBScope;
   else
      // That means it is the first time we encounter 
      // this global variable and in C this means that
      // we don't have to do nothing.
      // SharedInfo.SkipNextFun = SharedInfo.SkipNextFun + 1;
      SharedInfo.SkipNextFun = 1;
      
      InArg(1).Type      = 'GBLToBeDefined';
      InArg(1).Size(1)   = 'GBLToBeDefined';
      InArg(1).Size(2)   = 'GBLToBeDefined';
      InArg(1).Value     = %nan;
      InArg(1).FindLike  = %nan;
      InArg(1).Dimension = %nan;
      InArg(1).Scope     = 'Global';
      
      
      ST_Set(InArg(1).Name,...
         InArg(1).Type,...
         InArg(1).Size,...
         InArg(1).Value,...
         InArg(1).FindLike,...
         InArg(1).Dimension,...
         FileInfo.GlobalVarFileName);
   end
else
   [InArg,SharedInfo] = ST_GetInArgInfo(InArg,NInArg,FileInfo,SharedInfo);
end

// ---------------------------------
// --- Output Arguments Section. ---
// ---------------------------------
// --- Update Out arg structure with info stored in the function annotations. ---
if (ASTFunName == 'OpEqual')
   for cntin = 1:NInArg
      OutArg(cntin).Type      = InArg(cntin).Type;
      OutArg(cntin).Size      = InArg(cntin).Size;
      OutArg(cntin).Dimension = InArg(cntin).Dimension;
      OutArg(cntin).Value     = InArg(cntin).Value;
      OutArg(cntin).FindLike  = InArg(cntin).FindLike;
      //NUT: forse qui occorre aggiungere lo scope che dovrebbe essere local or global.
      //NUT: per ora lo scope viene settato da AST_ParseEqualStruct
   end
elseif ((ASTFunName == 'OpMinus') & (NInArg == 1) & (InArg(1).Dimension == 0)&(InArg(1).Scope == 'Number'))
   // --- Manage OpMinus when applied to scalars. ---
   // -1 is not translated as tmp = OpMinus(1), but
   // it is considered as a single entity "-1"
   SharedInfo.SkipNextFun = 1; //RN: SISTEMAMI 
   OutArg(1).Type      = InArg(1).Type;
   OutArg(1).Size      = InArg(1).Size;
   OutArg(1).Dimension = InArg(1).Dimension;
   OutArg(1).Value     = -InArg(1).Value;
   OutArg(1).FindLike  = InArg(1).FindLike;
   OutArg(1).Scope  = 'Number_'+InArg(1).Type; 
elseif ((ASTFunName == 'float') & (NInArg == 1) & (InArg(1).Dimension == 0) & (InArg(1).Scope == 'Number'))
   // --- Manage OpMinus when applied to scalars. ---
   // -1 is not translated as tmp = OpMinus(1), but
   // it is considered as a single entity "-1"
   SharedInfo.SkipNextFun = 1; //RN: SISTEMAMI 
   OutArg(1).Type      = InArg(1).Type;
   OutArg(1).Size      = InArg(1).Size;
   OutArg(1).Dimension = InArg(1).Dimension;
   OutArg(1).Value     = InArg(1).Value;
   OutArg(1).FindLike  = InArg(1).FindLike;
   OutArg(1).Scope     = 'Number_s'; 
elseif ((ASTFunName == 'double') & (NInArg == 1) & (InArg(1).Dimension == 0) & (InArg(1).Scope == 'Number'))
   // --- Manage OpMinus when applied to scalars. ---
   // -1 is not translated as tmp = OpMinus(1), but
   // it is considered as a single entity "-1"
   SharedInfo.SkipNextFun = 1;
   //RN: SISTEMAMI
   SharedInfo.SkipNextFun = 1; //RN: SISTEMAMI 
   OutArg(1).Type      = InArg(1).Type;
   OutArg(1).Size      = InArg(1).Size;
   OutArg(1).Dimension = InArg(1).Dimension;
   OutArg(1).Value     = InArg(1).Value;
   OutArg(1).FindLike  = InArg(1).FindLike;
   OutArg(1).Scope     = 'Number_d'; 
else
   OutArg = FA_GetOutArgInfo(InArg,NInArg,OutArg,NOutArg,SharedInfo,FunPrecSpecifier,FunTypeAnnot,FunSizeAnnot,ReportFileName);
end

// --- Generate the names for the output arguments. ---
// Update of OutArg.Name and OutArg.Scope fields. 
if ((ASTFunName == 'OpMinus') & (NInArg == 1) & (InArg(1).Dimension == 0) & (InArg(1).Scope == 'Number'))
   OutArg(1).Name  = string(OutArg(1).Value); 
elseif ((ASTFunName == 'float') & (NInArg == 1) & (InArg(1).Dimension == 0) & (InArg(1).Scope == 'Number'))
   OutArg(1).Name  = string(OutArg(1).Value); 
elseif ((ASTFunName == 'double') & (NInArg == 1) & (InArg(1).Dimension == 0) & (InArg(1).Scope == 'Number'))
   OutArg(1).Name  = string(OutArg(1).Value); 
else
   [OutArg,SharedInfo] = GenOutArgNames(ASTFunName,InArg,NInArg,OutArg,NOutArg,LhsArg,NLhsArg,FileInfo,SharedInfo);
end

// --- Push in the AST stack the Output arguments. ---
if (ASTFunName == 'OpEqual')
   // Do nothing
else
   for counteroutargs = 1:NOutArg
      tmppushstack = OutArg(counteroutargs).Scope+': '+OutArg(counteroutargs).Name;
      AST_PushASTStack(tmppushstack);
   end
end

//NUT: verificare se si puo' accorpare qualcosa qui sotto
//RN: non capisco come mai analizzo lo scope dopo che faccio il push nello stack dove lo utilizzo!!!
// --- Scope analysis of the output arguments. ---
if (ASTFunName == 'OpMinus' & NInArg == 1 & (InArg(1).Dimension == 0) & (InArg(1).Scope == 'Number'))
   // Scope already set above.
elseif (ASTFunName == 'float' & NInArg == 1 & (InArg(1).Dimension == 0) & (InArg(1).Scope == 'Number'))
   // Scope already set above.
elseif (ASTFunName == 'double' & NInArg == 1 & (InArg(1).Dimension == 0) & (InArg(1).Scope == 'Number'))
   // Scope already set above.
else
   OutArg = ST_AnalyzeScope(OutArg,NOutArg,FileInfo,SharedInfo);
end

// --- Check if the current function is handling for counter variables. ---
[OutArg,SharedInfo] = ST_InsForCntVars(InArg,NInArg,OutArg,NOutArg,ASTFunName,FileInfo,SharedInfo);

// --- Store the while condition variable (if any). ---
SharedInfo = GetWhileCondVariable(OutArg,NOutArg,ASTFunName,FileInfo,SharedInfo);

// --- Update Symbol Table with output arguments. ---
if ((ASTFunName == 'OpMinus') & (NInArg == 1) & (InArg(1).Dimension == 0) & (InArg(1).Scope == 'Number'))
   // A number is not inserted in the symbol table.
elseif ((ASTFunName == 'float') & (NInArg == 1) & (InArg(1).Dimension == 0) & (InArg(1).Scope == 'Number'))
   // A number is not inserted in the symbol table.
elseif ((ASTFunName == 'double') & (NInArg == 1) & (InArg(1).Dimension == 0) & (InArg(1).Scope == 'Number'))
   // A number is not inserted in the symbol table.
else
   ST_InsOutArg(OutArg,NOutArg,FileInfo,SharedInfo,'all');
end
//NUT: per risparmiare tempo di esecuzione puoi mettere delle if sulle funzioni che devono
//NUT: essere skippate.

// --------------------------------------------
// --- Generate the C name of the function. ---
// --------------------------------------------
CFunName = C_GenerateFunName(ASTFunName,InArg,NInArg,OutArg,NOutArg);

// -------------------------------------------------------------------------
// --- Determine which library the function belongs to: USER2C or SCI2C. ---
// -------------------------------------------------------------------------
if SCI2Cfileexist(FileInfo.SCI2CLibCAnnFun,ASTFunName+'.ann')
   LibTypeInfo = 'SCI2C';
else
   LibTypeInfo = 'USER2C';
end

// ---------------------------------------------------------------------------
// --- Check existence of the FunInfo.dat file -> function already called. ---
// ---------------------------------------------------------------------------
FunInfoDatFileName = fullfile(FunInfoDatDir,CFunName+'.dat');
if SCI2Cfileexist(FunInfoDatDir,CFunName+'.dat')
   Flag_FunAlreadyCalled = 1;
end

// ----------------------------------
// --- Generate FunInfo dat file. ---
// ----------------------------------
//NUT: questo .dat deve essere generato sempre perche' cambiano i nomi degli argomenti mentre il resto dovrebbe
//NUT: essere tutto uguale
//NUT: magari posso fare una funzione che inserisce solo i campi diversi e fa un check su quelli che
//NUT: dovrebbero essere identici.
GenCFunDatFiles(ASTFunName,FunPrecSpecifier,FunTypeAnnot,FunSizeAnnot,InArg,NInArg,OutArg,NOutArg,CFunName,LibTypeInfo,FunInfoDatDir);

// -----------------------------------
// --- Update SCI2C Function List. ---
// -----------------------------------
// Functions that are not already available in C are stored 
// in the SCI2C Function List and converted in C at the end of
// the translation of the current .sci file.
//NUT: il problema della d0d0OpEqual dovrebbe essere legato al fatto che cerco di fare la opequal legata alla ins...
//NUT: devo evitare di scriveral dentro la lsista delle funzioni da tradurre.
SharedInfo = FL_UpdateToBeConv(ASTFunName,CFunName,FunPrecSpecifier,FunTypeAnnot,FunSizeAnnot,InArg,NInArg,OutArg,NOutArg,FileInfo,SharedInfo);

// -----------------------------------------------
// --- Check on common input/output arguments. ---
// -----------------------------------------------
if (((ASTFunName=='OpEqual') & (SharedInfo.SkipNextEqual == 1)) | ...
    SharedInfo.SkipNextFun > 0 | ...
    ((sum(mtlb_strcmp(ASTFunName,SharedInfo.Annotations.DataPrec)) > 0) & (SharedInfo.SkipNextPrec == 1)))
   // Do nothing
else
   AST_CheckCommonInOutArgs(InArg,NInArg,OutArg,NOutArg,ReportFileName);
end

// -----------------------------
// --- C Generation Section. ---
// -----------------------------
// --- Load FunInfo structure. ---
load(FunInfoDatFileName,'FunInfo');

// --- Generate include. ---
if ((Flag_FunAlreadyCalled == 0) & (FunInfo.LibTypeInfo == 'USER2C'))
   PrintStringInfo('#include ""'+CFunName+'.h""',...
      ReportFileName,'file','y');
   PrintStringInfo('#include ""'+CFunName+'.h""',...
      Pass1HeaderFileName,'file','y');
end

// --- Generate the C code for the current function. ---
FlagCall = 1;
SharedInfo = C_Funcall(FunInfo,FileInfo,SharedInfo,FlagCall);
//NUT: anziche farla fare alla cfuncall l'aggiornamento delle skip metti qui una funzione dedicata a cio'
//NUT: e' piu' ordinato.

endfunction
