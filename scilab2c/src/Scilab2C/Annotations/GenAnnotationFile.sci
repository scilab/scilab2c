function GenAnnotationFile(AnnStyle,FunName,OutDir)
// function GenAnnotationFile(AnnStyle,FunName,OutDir)
// -----------------------------------------------------------------
// Generates the annotation for the function "FunName" according to
// the style specified by AnnStyle.
// The annotation file will be stored into the OutDir.
// Examples of annotation styles:
// AnnStyle = 'I1O1' -> input and output have the same size and type.
// AnnStyle = 'I2O1' -> inputs and output have the same size and type.
//
// Input data:
//
// Output data:
//
// Status:
// 17-Jun-2007 -- Nutricato Raffaele: Author.
// -----------------------------------------------------------------


// ---------------------------
// --- Open the .ann file. ---
// ---------------------------
annotationfilename = fullfile(OutDir,FunName+'.ann');
[inannfid,inannerr] = mopen(annotationfilename,'w+');
if (inannerr < 0)
   SCI2Cerror(['Cannot open: '+annotationfilename]);
end

// ------------------------------
// --- Write annotation file. ---
// ------------------------------
if (AnnStyle=='I1O1')
   fprintf(inannfid,'//_SCI2C_NOUT: 1\n');
   fprintf(inannfid,'//_SCI2C_FUNSIZE: OutArg(1).Size = InArg(1).Size\n');
   fprintf(inannfid,'//_SCI2C_FUNTYPE: OutArg(1).Type = InArg(1).Type\n');
elseif (AnnStyle=='I2O1')
   fprintf(inannfid,'//_SCI2C_NOUT: 1\n');
   fprintf(inannfid,'//_SCI2C_FUNSIZE: OutArg(1).Size = InArg(1).Size\n');
   fprintf(inannfid,'//_SCI2C_FUNTYPE: OutArg(1).Type = InArg(1).Type\n');
elseif (AnnStyle=='INON')
   // Cosa si puo' fare per la equal che puo' avere anche N input e N output?
   fprintf(inannfid,'//_SCI2C_NOUT: 1\n');
   fprintf(inannfid,'//_SCI2C_FUNSIZE: OutArg(1).Size = InArg(1).Size\n');
   fprintf(inannfid,'//_SCI2C_FUNTYPE: OutArg(1).Type = InArg(1).Type\n');

   fprintf(inannfid,'//_SCI2C_NOUT: 2\n');
   fprintf(inannfid,'//_SCI2C_FUNSIZE: OutArg(1).Size = InArg(1).Size\n');
   fprintf(inannfid,'//_SCI2C_FUNTYPE: OutArg(1).Type = InArg(1).Type\n');
   fprintf(inannfid,'//_SCI2C_FUNSIZE: OutArg(2).Size = InArg(2).Size\n');
   fprintf(inannfid,'//_SCI2C_FUNTYPE: OutArg(2).Type = InArg(2).Type\n');
elseif (AnnStyle=='DET')
   // Cosa si puo' fare per la equal che puo' avere anche N input e N output?
   fprintf(inannfid,'//_SCI2C_NOUT: 1\n');
   fprintf(inannfid,'//_SCI2C_FUNSIZE: OutArg(1).Size = [1,1]\n');
   fprintf(inannfid,'//_SCI2C_FUNTYPE: OutArg(1).Type = InArg(1).Type\n');
elseif (AnnStyle=='TRANS')
   // Cosa si puo' fare per la equal che puo' avere anche N input e N output?
   fprintf(inannfid,'//_SCI2C_NOUT: 1\n');
   fprintf(inannfid,'//_SCI2C_FUNSIZE: OutArg(1).Size = InArg(1).Size.''\n');
   fprintf(inannfid,'//_SCI2C_FUNTYPE: OutArg(1).Type = InArg(1).Type\n');
else
   SCI2Cerror('Unknown Annotation style: '+AnnStyle);
end

mclose(inannfid);
endfunction
