// This script contains all the input parameters needed by the SCI2C tool.
ScilabMainFile = 'C:\Nutricato\Projects\FP6_hArtes\Software\SVNScilab2C\src\Scilab2C\Tests\foo.sci';  // Input Parameter.

// Directory where all the products of SCI2C tool will be written.
ResultDir = 'Results';

// Memory allocation.
WorkAreaSizeBytes = 2000*8; // 2000 locations of double
TotTempScalarVars = 20; // maximum number of temporary scalar variables that can be used.

// Paths that contain the .sci files written by the user.
UserSciFilesPaths = ...
   ['C:\Nutricato\Projects\FP6_hArtes\Software\SVNScilab2C\src\Scilab2C\Tests';...
    'C:\Nutricato\Projects\FP6_hArtes\Software\SVNScilab2C\src\Scilab2C\'];
