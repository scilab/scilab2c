function [disp_isthere,FileInfo,SharedInfo] = AST_HandleEndGenFun(disp_isthere,FileInfo,SharedInfo,ASTFunType)
// function [FileInfo,SharedInfo] = AST_HandleEndGenFun(FileInfo,SharedInfo,ASTFunType)
// -----------------------------------------------------------------
// #RNU_RES_B
// Handles the EndFuncall, EndOperation and EndEqual tags of the AST.
// ASTFunType can be 'Funcall', 'Operation', 'Equal'
// Structure of Funcall:
// overloading function for "funcall" type tlist string function
// this is a node of the AST
// fields:
//     rhs  : a list
//     name : string, the name of the function
//     lhsnb: number, the number of function lhs
//  txt=['Funcall  : '+F.name
//       '  #lhs   : '+string(F.lhsnb)
//       '  Rhs    : '
//       '      '+objectlist2string(F.rhs)
//       'EndFuncall'
//      ]
// #RNU_RES_E
//
// Input data:
// //NUT: add description here
//
// Output data:
// //NUT: add description here
//
// Status:
// 11-Apr-2007 -- Raffaele Nutricato: Author.
// 15-June-2017 -- Ukasha Noor : Revised By 
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
nxtscifunname          = SharedInfo.NextSCIFunName;
nxtscifunnumber        = SharedInfo.NextSCIFunNumber;
ReportFileName         = FileInfo.Funct(nxtscifunnumber).ReportFileName;
Pass1HeaderFileName    = FileInfo.Funct(nxtscifunnumber).Pass1HeaderFileName;
FunInfoDatDir          = FileInfo.FunctionList.FunInfoDatDir;
CGblDeclarFileName     = FileInfo.Funct(nxtscifunnumber).CGblDeclarFileName;
if(SharedInfo.Target == 'AVR')
	PeripheralInitListFile = FileInfo.PeripheralInitListFile;
elseif (SharedInfo.Target == 'Arduino')
    SetupListFile = FileInfo.SetupListFile;
end 

Flag_FunAlreadyCalled = 0;
// #RNU_RES_B
PrintStepInfo('Handling Funcall/Operation/Equal',FileInfo.Funct(nxtscifunnumber).ReportFileName,'file');
// #RNU_RES_E
//NUT: da sistemare senza le global
global SCI2CSTACK
global StackPosition;
global STACKDEDUG

disp_isthere = 0;
// ---------------------------
// --- End Initialization. ---
// ---------------------------

// #RNU_RES_B
// ---------------------------------------------
// --- Retrieve FunCall Parameters from AST. ---
// ---------------------------------------------
//NUT: verifica se ASTFunType e' veramente importante
// #RNU_RES_E
[ASTFunName,InArg,NInArg,OutArg,NOutArg] = AST_GetFuncallPrm(FileInfo,SharedInfo,ASTFunType);
if (ASTFunType=='Funcall')
SharedInfo.Function_list(SharedInfo.Function_list_index) =  ASTFunName;
SharedInfo.Function_list_index = SharedInfo.Function_list_index + 1; 
end
NOutArg_mod = NOutArg
	if ASTFunName == 'OpLogAnd'
		AST_PushASTStack('&&');
		return ;
	end
	if ASTFunName == 'OpLogOr'
		AST_PushASTStack('||');
		return;
	end
	
	if ASTFunName == 'disp'
		disp_isthere = 1;
	end

	if(mtlb_strcmp(part(ASTFunName,1:2),'CV') == %T)
		SharedInfo.OpenCVUsed = %T;
	end

	if (ASTFunName == 'OpIns')
	   SharedInfo.SkipNextEqual = 1;
	   SharedInfo.Equal.Nins = SharedInfo.Equal.Nins + 1;
	   //NUT: Force ins to have 0 args. Double check it.
	   NOutArg = 0;
	   // #RNU_RES_B
	   //NUT: io aumenterei qui gli argomenti in ingresso della ins cosi qui vengono fatte tutte le modifiche del
	   //NUT: caso e la C_FunCall non se ne deve preoccupare, vedi se lo stesso vale per le altre funzioni
	   //NUT: speciali presenti nell C_FunCall.

	   // 1 more input argument containing the values to be inserted in the matrix.
	   // #RNU_RES_E
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
		  error(9999, 'SCI2CERROR: Multiple declaration of global variables is not allowed.');
	   end
	   if (NOutArg ~= 1)
		  PrintStringInfo(' ',ReportFileName,'both','y');
		  PrintStringInfo('SCI2CERROR: Unexpected number of output arguments for global function.',ReportFileName,'both','y');
		  PrintStringInfo('SCI2CERROR: Please report this error to: http://forge.scilab.org/index.php/p/scilab2c/issues/',ReportFileName,'both','y');
		  PrintStringInfo(' ',ReportFileName,'both','y');
		  error(9999, 'SCI2CERROR: Unexpected number of output arguments for global function.');
	   end
	//To skip the functions for Raspberry Pi connections 
    elseif(ASTFunName == 'raspi' | ASTFunName == 'raspi_close' | ASTFunName == 'i2cdetect')
       disp_isthere=1;  // Skips the corresponding Lhs argument declaration
       return           // Skips the function call
	end

	// #RNU_RES_B
	// --------------------------------------
	// --- Read the function annotations. ---
	// --------------------------------------
	// #RNU_RES_E
	if ASTFunName == '%k'
		ASTFunName='modk';
	end
	
	if ASTFunName == '%sn'
		ASTFunName='modsn';
	end	

	if (ASTFunName == 'OpEqual')
	   FunTypeAnnot = '';
	   FunSizeAnnot = '';
	else
	   [FunTypeAnnot,FunSizeAnnot,NOutArg_mod] = FA_GetFunAnn(NInArg,NOutArg,ASTFunName,FileInfo,SharedInfo);
	end
	
	// #RNU_RES_B
	// -------------------------------------------------------------------------------------------
	// --- Search for Equal Lhs and precision specifier to be applied to the current function. ---
	// -------------------------------------------------------------------------------------------
	// #RNU_RES_E
	PrintStringInfo(' no of out arguments' + string(NOutArg),ReportFileName,'file','y');
	[LhsArg,NLhsArg,FunPrecSpecifier,SharedInfo] = AST_GetPrecAndLhsArg(OutArg,NOutArg,ASTFunName,FunTypeAnnot,FunSizeAnnot,ASTFunType,FileInfo,SharedInfo);
	//NUT: questa funzione contiene troppi parametri e mi sembra disordinata.

	// #RNU_RES_B
	// --------------------------------
	// --- Input Arguments Section. ---
	// --------------------------------
	// --- Get Input Arguments info from their numerical value or from the symbol table. ---
	// #RNU_RES_E
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
		  IndentLevelGlobal = 0; //NUT: forced always to 1
		  FlagExt = 1;
		  C_GenDeclarations(InArg(1),CGblDeclarFileName,IndentLevelGlobal,ReportFileName,FlagExt,SharedInfo.ResizeApproach);
	   else
		  // #RNU_RES_B
		  // That means it is the first time we encounter
		  // this global variable and in C this means that
		  // we don't have to do nothing.
		  // #RNU_RES_E
		  // SharedInfo.SkipNextFun = SharedInfo.SkipNextFun + 1;
		  SharedInfo.SkipNextFun = 1;

		  InArg(1).Type      = 'GBLToBeDefined';
		  InArg(1).Size(1)   = 'GBLToBeDefined';
		  InArg(1).Size(2)   = 'GBLToBeDefined';
		  InArg(1).Value     = %nan;
		  InArg(1).FindLike  = %nan;
		  InArg(1).Dimension = %nan;
		  InArg(1).Scope     = 'Global';

		  // #RNU_RES_B
		  PrintStringInfo('***Putting global variable in the symbol table***',ReportFileName,'file','y');
		  PrintStringInfo('   Symbol ""'+InArg(1).Name+'""',ReportFileName,'file','y');

		  PrintStringInfo('   Type:      '+InArg(1).Type,ReportFileName,'file','y');
		  PrintStringInfo('   Size(1):   '+string(InArg(1).Size(1)),ReportFileName,'file','y');
		  PrintStringInfo('   Size(2):   '+string(InArg(1).Size(2)),ReportFileName,'file','y');
		  PrintStringInfo('   Value:     '+string(InArg(1).Value),ReportFileName,'file','y');
		  PrintStringInfo('   FindLike:  '+string(InArg(1).FindLike),ReportFileName,'file','y');
		  PrintStringInfo('   Dimension: '+string(InArg(1).Dimension),ReportFileName,'file','y');
		  PrintStringInfo('   Scope:     '+string(InArg(1).Scope),ReportFileName,'file','y');
		  PrintStringInfo(' ',ReportFileName,'file','y');
		  // #RNU_RES_E

		  ST_Set(InArg(1).Name,...
		     InArg(1).Type,...
		     InArg(1).Size,...
		     InArg(1).Value,...
		     InArg(1).FindLike,...
		     InArg(1).Dimension,...
		     FileInfo.GlobalVarFileName);
	   end
	else
		if(ASTFunName == 'ode')
			//Differnt handling of ode function is required as one of its input
			// is a name of a function
			if NInArg == 4 
				ODEFunName = InArg(4).Name;
				//To differentiate functions containing differential equations,
				//'odefn' is added at the beginning of the function name.  
				InArg(4).Name = 'odefn'+ InArg(4).Name
				SharedInfo.Includelist($+1) = InArg(4).Name; 
				//Add ode function in list. this will be used to add corresponding
				//header file in main function.
			elseif NInArg == 5 
				ODEFunName = InArg(5).Name;
				InArg(5).Name = 'odefn'+ InArg(5).Name
				SharedInfo.Includelist($+1) = InArg(5).Name; 
			elseif NInArg == 6 
				ODEFunName = InArg(6).Name;
				InArg(6).Name = 'odefn'+ InArg(6).Name
				SharedInfo.Includelist($+1) = InArg(6).Name; 
			end
			
			
		elseif(ASTFunName == 'RPI_ThreadCreate')
			PI_thread_FunName = InArg(1).Name;
			InArg(1).Name = 'PI_thread_'+PI_thread_FunName;
			SharedInfo.Includelist($+1) = InArg(1).Name;
		elseif(ASTFunName == 'RPI_PinISR')
			PI_ISR_FunName = InArg(3).Name;
			InArg(3).Name = 'ISR_'+PI_ISR_FunName;
			SharedInfo.Includelist($+1) = InArg(3).Name;
		end
	   [InArg,SharedInfo] = ST_GetInArgInfo(InArg,NInArg,FileInfo,SharedInfo,ASTFunName);
	   
	end

	// #RNU_RES_B
	// -------------------------------------------------------------------
	// --- Change info of Input Argument according to resize approach. ---
	// -------------------------------------------------------------------
	//RNU toglimi nella versione da dare ad hartes.
	//RNU per ora gestisco solo la resize all con tutte realloc.
	//RNU global variables are still coded with fixed size.
	// #RNU_RES_E
	if (SharedInfo.ResizeApproach=='REALLOC_ALL_RESIZE_ALL')
	   for cntin = 1:NInArg
		  if ((InArg(cntin).Dimension > 0))
		      // if ((InArg(cntin).Dimension > 0) & (InArg(cntin).Scope ~= 'Global'))
		     InArg(cntin).Size(1) = '__'+InArg(cntin).Name+'Size[0]';
		     InArg(cntin).Size(2) = '__'+InArg(cntin).Name+'Size[1]';s
		  end
		  //#RNUREM_MERNU vedi se la seguente fa casino l'ho aggiunta in modo che agia=ones(1,3) sia generata come realloc ma non ho verificato.
		  tmpscope = InArg(cntin).Scope;
		  lengthNumber = length('Number_');
		  if (part(tmpscope,1:lengthNumber) == 'Number_')
		  //#RNUREM_ME RNU il problema e' che ones(3,1) allora l'output e' 3,1 e come faccio a trasformare 3 e 1 in simboli in modo tale che realloco anziche' allocare
		     InArg(cntin).Value = %nan; //RNU non va bene dove per esempio hai problemi di 1:3:4 se al posto dei numeri metti nan ti impalli
		     //#RNUREM_ME Credo che dove c'e' uan allocazione secca ones(3,1) non vada lasciata cosi' ma tutto vada ricondotto a realloc
		     //#RNUREM_ME quindi devo vedere nella dichiarazione delle variabili come forzare la dichiarazione dei null pointer.
		     //#RNUREM_ME successivamente devo vedere come fare a riscrivere la size dell'output.
		  else
		  end
	   end
	end

	// #RNU_RES_B
	// ---------------------------------
	// --- Output Arguments Section. ---
	// ---------------------------------
	// --- Update Out arg structure with info stored in the function annotations. ---
	// #RNU_RES_E
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
	   // #RNU_RES_B
	   // --- Manage OpMinus when applied to scalars. ---
	   // -1 is not translated as tmp = OpMinus(1), but
	   // it is considered as a single entity "-1"
	   // #RNU_RES_E
	   SharedInfo.SkipNextFun = 1; //RN: SISTEMAMI
	   OutArg(1).Type      = InArg(1).Type;
	   OutArg(1).Size      = InArg(1).Size;
	   OutArg(1).Dimension = InArg(1).Dimension;
	   OutArg(1).Value     = -InArg(1).Value;
	   OutArg(1).FindLike  = InArg(1).FindLike;
	   OutArg(1).Scope  = 'Number_'+InArg(1).Type;
	elseif ((ASTFunName == 'float') & (NInArg == 1) & (InArg(1).Dimension == 0) & (InArg(1).Scope == 'Number'))
	   // #RNU_RES_B
	   // --- Manage OpMinus when applied to scalars. ---
	   // -1 is not translated as tmp = OpMinus(1), but
	   // it is considered as a single entity "-1"
	   // #RNU_RES_E
	   SharedInfo.SkipNextFun = 1; //RN: SISTEMAMI
	   OutArg(1).Type      = InArg(1).Type;
	   OutArg(1).Size      = InArg(1).Size;
	   OutArg(1).Dimension = InArg(1).Dimension;
	   OutArg(1).Value     = InArg(1).Value;
	   OutArg(1).FindLike  = InArg(1).FindLike;
	   OutArg(1).Scope     = 'Number_s';
	elseif ((ASTFunName == 'double') & (NInArg == 1) & (InArg(1).Dimension == 0) & (InArg(1).Scope == 'Number'))
	   // #RNU_RES_B
	   // --- Manage OpMinus when applied to scalars. ---
	   // -1 is not translated as tmp = OpMinus(1), but
	   // it is considered as a single entity "-1"
	   // #RNU_RES_E
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
	   OutArg = FA_GetOutArgInfo(InArg,NInArg,OutArg,NOutArg,SharedInfo,FunPrecSpecifier,FunTypeAnnot,FunSizeAnnot,ReportFileName,ASTFunName);	
end
	
	// #RNU_RES_B
	// --- Generate the names for the output arguments. ---
	// Update of OutArg.Name and OutArg.Scope fields.
	// #RNU_RES_E
	if ((ASTFunName == 'OpMinus') & (NInArg == 1) & (InArg(1).Dimension == 0) & (InArg(1).Scope == 'Number'))
	   OutArg(1).Name  = string(OutArg(1).Value);
	elseif ((ASTFunName == 'float') & (NInArg == 1) & (InArg(1).Dimension == 0) & (InArg(1).Scope == 'Number'))
	   OutArg(1).Name  = string(OutArg(1).Value);
	elseif ((ASTFunName == 'double') & (NInArg == 1) & (InArg(1).Dimension == 0) & (InArg(1).Scope == 'Number'))
	   OutArg(1).Name  = string(OutArg(1).Value);
	//elseif ASTFunName == 'disp'
	else
	   [OutArg,SharedInfo] = GenOutArgNames(ASTFunName,InArg,NInArg,OutArg,NOutArg,LhsArg,NLhsArg,FileInfo,SharedInfo);
	   if ( ASTFunName == 'OpLogGt' | ASTFunName == 'OpLogLt' | ASTFunName == 'OpLogLe' | ASTFunName == 'OpLogGe' | ASTFunName == 'OpLogNe' | ASTFunName == 'OpLogEq')
		PrintStringInfo('   returning back due logical function',ReportFileName,'file','y');
		return;
	   end
	end
	
	if ((ASTFunName == 'uint8') & (NInArg == 1) & (InArg(1).Dimension == 0) & (InArg(1).Scope == 'Number'))
		OutArg(1).Value = InArg(1).Value;
		SharedInfo.SkipNextFun = 1;
	elseif ((ASTFunName == 'int8') & (NInArg == 1) & (InArg(1).Dimension == 0) & (InArg(1).Scope == 'Number'))
		OutArg(1).Value = InArg(1).Value;
		SharedInfo.SkipNextFun = 1;
	elseif ((ASTFunName == 'uint16') & (NInArg == 1) & (InArg(1).Dimension == 0) & (InArg(1).Scope == 'Number'))
		OutArg(1).Value = InArg(1).Value;
		SharedInfo.SkipNextFun = 1;
	elseif ((ASTFunName == 'int16') & (NInArg == 1) & (InArg(1).Dimension == 0) & (InArg(1).Scope == 'Number'))
		OutArg(1).Value = InArg(1).Value;
		SharedInfo.SkipNextFun = 1;
	end
	
	// #RNU_RES_B
	// --- Push in the AST stack the Output arguments. ---
	// #RNU_RES_E
	if (ASTFunName == 'OpEqual')
	   // Do nothing
	else
	   for counteroutargs = 1:NOutArg
		  tmppushstack = OutArg(counteroutargs).Scope+': '+OutArg(counteroutargs).Name;
		  // #RNU_RES_B
		  PrintStringInfo('   Pushing in the AST stack: ""'+tmppushstack+'"".',ReportFileName,'file','y');
		  // #RNU_RES_E
		  AST_PushASTStack(tmppushstack);
	   end
	end

	
	// #RNU_RES_B
	//NUT: verificare se si puo' accorpare qualcosa qui sotto
	//RN: non capisco come mai analizzo lo scope dopo che faccio il push nello stack dove lo utilizzo!!!
	// --- Scope analysis of the output arguments. ---
	// #RNU_RES_E
	if (ASTFunName == 'OpMinus' & NInArg == 1 & (InArg(1).Dimension == 0) & (InArg(1).Scope == 'Number'))
	   // Scope already set above.
	elseif (ASTFunName == 'float' & NInArg == 1 & (InArg(1).Dimension == 0) & (InArg(1).Scope == 'Number'))
	   // Scope already set above.
	elseif (ASTFunName == 'double' & NInArg == 1 & (InArg(1).Dimension == 0) & (InArg(1).Scope == 'Number'))
	   // Scope already set above.
	//elseif ASTFunName == 'disp'
	   //do nothing
	else
	   OutArg = ST_AnalyzeScope(OutArg,NOutArg,FileInfo,SharedInfo);
	end

	//#RNUREM_ME --- Check if the current function is handling for counter variables. ---
	[OutArg,SharedInfo] = ST_InsForCntVars(InArg,NInArg,OutArg,NOutArg,ASTFunName,FileInfo,SharedInfo);

	//#RNUREM_ME --- Store the while condition variable (if any). ---
	SharedInfo = GetWhileCondVariable(OutArg,NOutArg,ASTFunName,FileInfo,SharedInfo);
    

	//#RNUREM_ME --- Update Symbol Table with output arguments. ---
	if ((ASTFunName == 'OpMinus') & (NInArg == 1) & (InArg(1).Dimension == 0) & (InArg(1).Scope == 'Number'))
	   //#RNUREM_ME A number is not inserted in the symbol table.
	elseif ((ASTFunName == 'float') & (NInArg == 1) & (InArg(1).Dimension == 0) & (InArg(1).Scope == 'Number'))
	   //#RNUREM_ME A number is not inserted in the symbol table.
	elseif ((ASTFunName == 'double') & (NInArg == 1) & (InArg(1).Dimension == 0) & (InArg(1).Scope == 'Number'))
	   //#RNUREM_ME A number is not inserted in the symbol table.
	//elseif ASTFunName == 'disp'
	   //do nothing
	else
	   ST_InsOutArg(OutArg,NOutArg,FileInfo,SharedInfo,'all');
	end
	if ASTFunName == 'ode' then
		if ((NInArg == 4) | (NInArg == 6))
			ODE_InArg(1) = InArg(3)
			ODE_InArg(2) = InArg(1)
			ODE_OutArg(1) = OutArg(1)
		elseif NInArg == 5 then
			ODE_InArg(1) = InArg(4)
			ODE_InArg(2) = InArg(2)
			ODE_OutArg(1) = OutArg(1)
		end	
		ODE_CFunName = C_GenerateFunName('odefn'+ODEFunName,ODE_InArg,2,ODE_OutArg,1);
		//Functions containing differential equations that are used with 'ode'
		//function need to be handled differently.

		[FunFound, FunType, FunSize, FunValue, FunFindLike, FunDimension] = ...
		ST_Get(InArg(4).Name,FileInfo.GlobalVarFileName);
		//ST_Del(InArg(4).Name,FileInfo.GlobalVarFileName);
		//ST_Set(ODE_CFunName, FunType, FunSize, FunValue, FunFindLike, FunDimension);
	end

	//#RNUREM_ME NUT: per risparmiare tempo di esecuzione puoi mettere delle if sulle funzioni che devono
	//#RNUREM_ME NUT: essere skippate.

	//#RNU_RES_B
	// --------------------------------------------
	// --- Generate the C name of the function. ---
	// --------------------------------------------
	//#RNU_RES_E
	//disp(OutArg,InArg,ASTFunName)

	
	CFunName = C_GenerateFunName(ASTFunName,InArg,NInArg,OutArg,NOutArg_mod);
    	
  	//#RNU_RES_B
	PrintStringInfo('   C Function Name: '+CFunName,ReportFileName,'file','y');
	if(IsArduinoFunction(ASTFunName))
		if(IsArduinoSetupFunction(ASTFunName))
			//If current function is an arduino setup function (like 'dc_motor_setup'), it 	
			//should not be converted and inserted here. It is inserted in a list now and
			//added to 'setup_arduino.c' later
		   	InsertSetupInList(CFunName,InArg,NInArg,SetupListFile,'Setup');	 
		   	SharedInfo.SkipNextFun = SharedInfo.SkipNextFun + 1;
		else  //Currnet arduino function is not a setup function, so init function must be added
			InsertSetupInList(ASTFunName,InArg,NInArg,SetupListFile,'Init');	 
		end
	end

	// -------------------------------------------------------------------------
	// --- Determine which library the function belongs to: USER2C or SCI2C. ---
	// -------------------------------------------------------------------------
	//#RNU_RES_E
	if SCI2Cfileexist(FileInfo.SCI2CLibCAnnFun,ASTFunName+'.ann')
	   LibTypeInfo = 'SCI2C';
	else
	   LibTypeInfo = 'USER2C';
	end
	
	
	//#RNU_RES_B
	// ------------------------------------------------------------------------------------
	// --- Check whether the function has been already called in the current .sci file. ---
	// ------------------------------------------------------------------------------------
	//#RNU_RES_E
	if (sum(SharedInfo.CFunctsAlreadyCalled == CFunName) == 1)
	   Flag_FunAlreadyCalled = 1;
	else

	   //#RNUREM_ME Add the C function name to the list of C functions called in the current .sci file.
	   SharedInfo.CFunctsAlreadyCalled(size(SharedInfo.CFunctsAlreadyCalled,1)+1) = CFunName;
	end

	//#RNU_RES_B
	// ----------------------------------
	// --- Generate FunInfo dat file. ---
	// ----------------------------------
	//NUT: questo .dat deve essere generato sempre perche' cambiano i nomi degli argomenti mentre il resto dovrebbe
	//NUT: essere tutto uguale
	//NUT: magari posso fare una funzione che inserisce solo i campi diversi e fa un check su quelli che
	//NUT: dovrebbero essere identici.
	//#RNU_RES_E
	GenCFunDatFiles(ASTFunName,FunPrecSpecifier,FunTypeAnnot,FunSizeAnnot,InArg,NInArg,OutArg,NOutArg_mod,CFunName,LibTypeInfo,FunInfoDatDir);

	//#RNU_RES_B
	// -----------------------------------
	// --- Update SCI2C Function List. ---
	// -----------------------------------
	// Functions that are not already available in C are stored
	// in the SCI2C Function List and converted in C at the end of
	// the translation of the current .sci file.
	//NUT: il problema della d0d0OpEqual dovrebbe essere legato al fatto che cerco di fare la opequal legata alla ins...
	//NUT: devo evitare di scriveral dentro la lsista delle funzioni da tradurre.
	//#RNU_RES_E
	
	SharedInfo = FL_UpdateToBeConv(ASTFunName,CFunName,FunPrecSpecifier,FunTypeAnnot,FunSizeAnnot,InArg,NInArg,OutArg,NOutArg,FileInfo,SharedInfo);

	//#RNU_RES_B
	// -----------------------------------------------
	// --- Check on common input/output arguments. ---
	// -----------------------------------------------
	//#RNU_RES_E
	if (((ASTFunName=='OpEqual') & (SharedInfo.SkipNextEqual == 1)) | ...
		SharedInfo.SkipNextFun > 0 | ...
		((sum(mtlb_strcmp(ASTFunName,SharedInfo.Annotations.DataPrec)) > 0) & (SharedInfo.SkipNextPrec == 1)))
	   // Do nothing
	//elseif ASTFunName == 'disp'
	   // Do nothing
	else
	   AST_CheckCommonInOutArgs(InArg,NInArg,OutArg,NOutArg,ReportFileName);
	end

	//#RNU_RES_B
	// -----------------------------
	// --- C Generation Section. ---
	// -----------------------------
	// --- Load FunInfo structure. ---
	//#RNU_RES_E
	FunInfoDatFileName = fullfile(FunInfoDatDir,CFunName+'.dat');
	load(FunInfoDatFileName,'FunInfo');

	//#RNU_RES_B
	// --- Generate include. ---
	//#RNU_RES_E
	if ((Flag_FunAlreadyCalled == 0) & (FunInfo.LibTypeInfo == 'USER2C') & (SharedInfo.NextCFunName ~= CFunName))
	   // (SharedInfo.NextCFunName ~= CFunName) I don't want an include in the same file. Ex. in main.h I don't want include "main.h"
	   // #RNU_RES_B
	   PrintStringInfo('Adding include',ReportFileName,'file','y');
	   PrintStringInfo('#include ""'+CFunName+'.h""',...
		  ReportFileName,'file','y');
	   // #RNU_RES_E
	   PrintStringInfo('#include ""'+CFunName+'.h""',...
		  Pass1HeaderFileName,'file','y');
	end

	//#RNU_RES_B
	// --- Generate the C code for the current function. ---
	//#RNU_RES_E
	FlagCall = 1;
	SharedInfo = C_Funcall(FunInfo,FileInfo,SharedInfo,FlagCall);
	//#RNU_RES_B
	//NUT: anziche farla fare alla cfuncall l'aggiornamento delle skip metti qui una funzione dedicata a cio'
	//NUT: e' piu' ordinato.
	//#RNU_RES_E

	//If current function being converted is 'ode', insert function containing
	//in list of functions to be converted
	if ASTFunName == 'ode' then
		//ODE_InArg(1) = InArg(3)
		//ODE_InArg(2) = InArg(1)
		//ODE_OutArg(1) = OutArg(1)
		//ODE_CFunName = C_GenerateFunName(ODEFunName,ODE_InArg,2,ODE_OutArg,1);
		GenCFunDatFiles(ODEFunName,%t,FunTypeAnnot,['IN(2).SZ(1)' 'IN(2).SZ(2)'],ODE_InArg,2,ODE_OutArg,1,ODE_CFunName,LibTypeInfo,FunInfoDatDir);
		SharedInfo = FL_UpdateToBeConv(ODEFunName,ODE_CFunName,%t,FunTypeAnnot,FunSizeAnnot,ODE_InArg,2,ODE_OutArg,1,FileInfo,SharedInfo);
	elseif ASTFunName == 'RPI_ThreadCreate' then
		temp_InArg = InArg;
		temp_InArg(1).Name = ""
		PI_thread_CFunName = C_GenerateFunName(InArg(1).Name,temp_InArg,0,%t,0);
		GenCFunDatFiles(PI_thread_FunName,%t,[],%t,temp_InArg,0,%t,0,PI_thread_CFunName,LibTypeInfo,FunInfoDatDir);
		SharedInfo = FL_UpdateToBeConv(PI_thread_FunName,PI_thread_CFunName,%t,FunTypeAnnot,[],%t,0,%t,0,FileInfo,SharedInfo);
	elseif ASTFunName == 'RPI_PinISR' then
		temp_InArg = InArg;
		temp_InArg(1).Name = ""
		PI_ISR_CFunName = C_GenerateFunName(InArg(3).Name,temp_InArg,0,%t,0);
		GenCFunDatFiles(PI_ISR_FunName,%t,[],%t,temp_InArg,0,%t,0,PI_ISR_CFunName,LibTypeInfo,FunInfoDatDir);
		SharedInfo = FL_UpdateToBeConv(PI_ISR_FunName,PI_ISR_CFunName,%t,FunTypeAnnot,[],%t,0,%t,0,FileInfo,SharedInfo);
	end
	
endfunction
