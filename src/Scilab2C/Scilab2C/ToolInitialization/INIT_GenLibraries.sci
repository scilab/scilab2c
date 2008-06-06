function INIT_GenLibraries(FileInfoDatFile)
// function INIT_GenLibraries(FileInfoDatFile)
// -----------------------------------------------------------------
//
// Status:
// 12-Jun-2007 -- Nutricato Raffaele: Author.
// 03-Jan-2008 -- Nutricato Raffaele: Changed directory structure.
//
// Copyright 2007 Raffaele Nutricato.
// Contact: raffaele.nutricato@tiscali.it
// -----------------------------------------------------------------

SCI2CNInArgCheck(argn(2),1,1);

clear FileInfo
load(FileInfoDatFile,'FileInfo');

clear SharedInfo
load(FileInfo.SharedInfoDatFile,'SharedInfo');

PrintStepInfo('Initialize SCI2C and USER2C Libraries.',...
   FileInfo.GeneralReport,'both');

INIT_FillSCI2LibCDirs(FileInfo,SharedInfo.Extension);


endfunction
