// Before launching this script, please
// check all the paths below.
// User should change parameters only in (USER PARAMETERS) sections.
// cd C:\SCI2CTests\SCI2CRuns; exec LaunchRunSCI2C.sci

// --- CLEAN WORKSPACE ---
exec full_reset.sce;
//mode(-1);

// --- GENERAL SETTINGS (USER PARAMETERS) ---
RunsDirectory         = pwd(); // Path of the SCI2CRuns directory

//
// FIXME : Must be a relative path or user input but neither absolute path.
// FIXED : Need to be tested.
//
//SCI2CDirectory        = 'D:\NutricatoGAPSVN\PROGETTI_APERTI\POLIBA\hArtes\WP2_SCI2C\Software\Version_alpha\Scilab2C'; // Path of the Scilab2C directory
SCI2CDirectory        = '.';

// --- SPECIFIC SETTINGS (USER PARAMETERS) ---
//
// FIXME : Must be a relative path or user input but neither absolute path.
// FIXED : Need to be tested.
//
//SCI2CInputPrmFileName =
//'D:\NutricatoGAPSVN\PROGETTI_APERTI\POLIBA\hArtes\WP2_SCI2C\Software\Version_alpha\SCI2CTests\test999_WorkingDir\SCI2CInputParameters.sce'; // Path + file name of the input parameters.
SCI2CInputPrmFileName = '../SCI2CTests/test999_WorkingDir/SCI2CInputParameters.sce';

// --- LAUNCH USER SCI CODE TO TEST IT BEFORE TRANSLATING IT!!! ---
cd(SCI2CDirectory)
getf("runscicode.sci");
runscicode(SCI2CInputPrmFileName);

// --- ASK USER FOR CONTINUATION. ---
userchoice = input('Start translation [y/n]?','s');
if (userchoice == 'y')
   // --- LAUNCH SCI2C ---
   cd(SCI2CDirectory)
   getf("runsci2c.sci");
   runsci2c(SCI2CInputPrmFileName);
   cd(SCI2CDirectory)
end

// --- GO BACK TO THE START DIRECTORY. ---
cd (RunsDirectory);

// --- CLOSE ALL FILES. ---
mclose('all');
