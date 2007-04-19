function GenerateLibTrees(FileInfoDatFile,SharedInfoDatFile);
// function GenerateLibTrees(FileInfoDatFile,SharedInfoDatFile);
// -----------------------------------------------------------------
// This function generates the SCI2C and USER2C library trees.
// Library trees contain detailed information of the DSP functions
// (SCI2C) and the user defined functions (USER2C).
// Notice that this function performs just an intialization of 
// USER2C library tree. The insertion of the information of the
// user defined functions will be performed later.
//
// Input data:
// FileInfoDatFile: name of the .dat file containing the FileInfo structure.
// SharedInfoDatFile: it is a buffer containing parameters that are exchanged by the
//                   functions of the SCI2C tool.
//
// Output data:
//
// Status:
// 11-Apr-2007 -- Nutricato Raffaele: Author.
// -----------------------------------------------------------------

[SCI2CLibTree, USER2CLibTree] = InitializeLibraryTrees(FileInfoDatFile);

load(FileInfoDatFile,'FileInfo');

PrintStringInfo('Saving the SCI2C Library Tree in file '+FileInfo.SCI2CLibTreeFileName,...
   FileInfo.GeneralReport,'both','y');
save(FileInfo.SCI2CLibTreeFileName,SCI2CLibTree);

PrintStringInfo('Saving the USER2C Library Tree in file '+FileInfo.USER2CLibTreeFileName,...
   FileInfo.GeneralReport,'both','y');
save(FileInfo.USER2CLibTreeFileName,USER2CLibTree);

endfunction
