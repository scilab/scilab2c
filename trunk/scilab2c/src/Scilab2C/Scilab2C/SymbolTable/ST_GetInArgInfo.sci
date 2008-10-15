function [UpdatedInArg,SharedInfo] = ST_GetInArgInfo(InArg,NInArg,FileInfo,SharedInfo)
// function UpdatedInArg = ST_GetInArgInfo(InArg,NInArg,FileInfo,SharedInfo)
// -----------------------------------------------------------------
//
// Status:
// 26-Oct-2007 -- Raffaele Nutricato: Author.
//
// Copyright 2007 Raffaele Nutricato.
// Contact: raffaele.nutricato@tiscali.it
// -----------------------------------------------------------------

SCI2CNInArgCheck(argn(2),4,4);

nxtscifunname   = SharedInfo.NextSCIFunName;
nxtscifunnumber = SharedInfo.NextSCIFunNumber;
ReportFileName  = FileInfo.Funct(nxtscifunnumber).ReportFileName;


UpdatedInArg = InArg;

for cntinarg = 1:NInArg
   tmpname = InArg(cntinarg).Name; 
   tmpscope = InArg(cntinarg).Scope; 
   lengthNumber = length('Number_');
   if (part(tmpscope,1:lengthNumber) == 'Number_')
      UpdatedInArg(cntinarg).Type = part(tmpscope,lengthNumber+1:lengthNumber+1);
      if (UpdatedInArg(cntinarg).Type == 'x')
         UpdatedInArg(cntinarg).Type = SharedInfo.DefaultPrecision; // It is the default.
      elseif (UpdatedInArg(cntinarg).Type == 'X')
         if (SharedInfo.DefaultPrecision == 's')
            UpdatedInArg(cntinarg).Type = 'c'; // It is the default.
         elseif (SharedInfo.DefaultPrecision == 'd')
            UpdatedInArg(cntinarg).Type = 'z'; // It is the default.
         else
            SCI2Cerror('Unexpected value for SharedInfo.DefaultPrecision: ""'+SharedInfo.DefaultPrecision+'""');
         end            
      end
      if (tmpname == '%pi')
         UpdatedInArg(cntinarg).Name = 'SCI2C_PI'; 
         numvalue = %pi;
      elseif (tmpname == '%T')
         UpdatedInArg(cntinarg).Name = 'SCI2C_T'; 
         numvalue = 1;
      elseif (tmpname == '%F')
         UpdatedInArg(cntinarg).Name = 'SCI2C_F'; 
         numvalue = 0;
      elseif (tmpname == '%nan')
         UpdatedInArg(cntinarg).Name = 'SCI2C_NAN'; 
         numvalue = %nan;
      elseif (tmpname == '%inf')
         UpdatedInArg(cntinarg).Name = 'SCI2C_INF'; 
         numvalue = %nan; // Otherwise it will put in the C code Inf value.
      elseif (tmpname == '%i')
         UpdatedInArg(cntinarg).Name = 'SCI2C_IMG_'+convstr(UpdatedInArg(cntinarg).Type,'u'); 
         numvalue = %i;
      else
         numvalue = eval(tmpname);
      end

      UpdatedInArg(cntinarg).Size(1)   = '1'; 
      UpdatedInArg(cntinarg).Size(2)   = '1'; 
      UpdatedInArg(cntinarg).Value     = numvalue;
      UpdatedInArg(cntinarg).FindLike  = 0;
      UpdatedInArg(cntinarg).Dimension = 0;
      UpdatedInArg(cntinarg).Scope     = 'Number';
      
   elseif (tmpscope == 'String')
      SharedInfo.ASTReader.UsedTempVars = SharedInfo.ASTReader.UsedTempVars + 1;
      TmpOutArgName = strcat([SharedInfo.ASTReader.TempVarsName,string(SharedInfo.ASTReader.UsedTempVars)]);
      
      UpdatedInArg(cntinarg).Name      = TmpOutArgName; // Change the name.
      UpdatedInArg(cntinarg).Type      = 'g'; // it is the default.
      UpdatedInArg(cntinarg).Size(1)   = '1'; 
      UpdatedInArg(cntinarg).Size(2)   = string(length(tmpname)+1); //+1 = (\0)
      UpdatedInArg(cntinarg).Value     = '""'+tmpname+'""';
      UpdatedInArg(cntinarg).FindLike  = 0;
      UpdatedInArg(cntinarg).Dimension = 2; //NUT: in future releases you can set this field to 1.
      UpdatedInArg(cntinarg).Scope     = 'Temp';
      
      ST_InsOutArg(UpdatedInArg(cntinarg),1,FileInfo,SharedInfo,'all');

   elseif (tmpscope == 'Var' | tmpscope == 'Global' | tmpscope == 'Local' | tmpscope == 'Temp')
      [TBFlagfound,TBType,TBSize,TBValue,TBFindLike,TBDimension,TBScope] = ST_GetSymbolInfo(tmpname,FileInfo,SharedInfo);
      if (TBFlagfound == 0)
         PrintStringInfo(' ',ReportFileName,'both','y');
         PrintStringInfo('SCI2CERROR: Unknown symbol ""'+tmpname+'"".',ReportFileName,'both','y');
         PrintStringInfo('SCI2CERROR: Be sure to initialize every symbol you are using.',ReportFileName,'both','y');
         PrintStringInfo('SCI2CERROR: Before running the SCI2C translator, remember to run the code you are trying',ReportFileName,'both','y');
         PrintStringInfo('SCI2CERROR: to translate in order to check syntax errors.',ReportFileName,'both','y');
         PrintStringInfo(' ',ReportFileName,'both','y');
         SCI2Cerror(' ');
      end
      UpdatedInArg(cntinarg).Type      = TBType;
      UpdatedInArg(cntinarg).Size      = TBSize;
      UpdatedInArg(cntinarg).Value     = TBValue;
      UpdatedInArg(cntinarg).FindLike  = TBFindLike;
      UpdatedInArg(cntinarg).Dimension = TBDimension;
      UpdatedInArg(cntinarg).Scope     = TBScope;
      
   else
      SCI2Cerror('Unknown scope identifier ""'+tmpscope+'"" for variable ""'+tmpname+'"".');
   end
end

endfunction
