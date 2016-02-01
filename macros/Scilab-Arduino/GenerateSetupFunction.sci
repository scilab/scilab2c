//Scilab2C IITB FOSSEE
function GenerateSetupFunction(FileInfo)

SetupListFile = FileInfo.SetupListFile;
load(SetupListFile,'SetupList');

SetupArduinoFile = fullfile(FileInfo.CStyleOutCCCodeDir,'setup_arduino.c');
SetupArduinoFile = fullfile(FileInfo.CStyleOutCCCodeDir,'setup_arduino.cpp');
C_SCI2CHeader(SetupArduinoFile);

PrintStringInfo('#include ""setup_arduino.h""',SetupArduinoFile,'file','y');
PrintStringInfo(' ',SetupArduinoFile,'file','y');
PrintStringInfo('int setup_arduino()',SetupArduinoFile,'file','y');
PrintStringInfo('{',SetupArduinoFile,'file','y');

nelements=size(SetupList);
for i=1:nelements
	funcall = '    ';
	funcall = funcall + SetupList(i)(1);
	funcall = funcall + '(';
	NInArg = size(SetupList(i))-1;
	for j=1:NInArg-1
		funcall = funcall + SetupList(i)(j+1);
		funcall = funcall + ', ';
	end
	funcall = funcall + SetupList(i)(NInArg+1);
	funcall = funcall + ');';
	PrintStringInfo(funcall,SetupArduinoFile,'file','y');
end
PrintStringInfo(' ',SetupArduinoFile,'file','y');
PrintStringInfo('    return (0); ',SetupArduinoFile,'file','y');
PrintStringInfo('}',SetupArduinoFile,'file','y');

endfunction
