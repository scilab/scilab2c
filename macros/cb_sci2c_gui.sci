//
// Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
// Copyright (C) 2009 - INRIA - Vincent COUVERT
//
// This file must be used under the terms of the CeCILL.
// This source file is licensed as described in the file COPYING, which
// you should have received as part of this distribution.  The terms
// are also available at
// http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
//

// Callback function for SCI2C GUI (See sci2c_gui.sci)

function cb_sci2c_gui

//
// --- File to convert ---
//
if get(gcbo,"tag")=="filebtn" then

  filename = uigetfile("*.sci", pwd(), gettext("Select the file to translate"));
  if ~isempty(filename) then
    set(findobj("tag", "fileedit"), "string", filename);
  end

//
// --- Sub-functions directory ---
//
elseif get(gcbo,"tag")=="subfunsbtn" then

  directory = uigetdir(pwd(), gettext("Select your sub-functions directory"));
  if ~isempty(directory) then
    set(findobj("tag", "subfunsedit"), "string", directory);
  end

//
// --- Output directory ---
//
elseif get(gcbo,"tag")=="outbtn" then

  directory = uigetdir(pwd(), gettext("Select the directory for generated files"));
  if ~isempty(directory) then
    set(findobj("tag", "outedit"), "string", directory);
  end

//
// --- Run mode option ---
//
elseif or(get(gcbo, "tag")==["runradioall","runradiotranslate","runradiogenlib"]) then

  set(findobj("tag", "runradioall"), "value", 0);
  set(findobj("tag", "runradiotranslate"), "value", 0);
  set(findobj("tag", "runradiogenlib"), "value", 0);

  set(gcbo, "value", 1);


// --- Output format option ---

elseif or(get(gcbo, "tag")==["outformatradiostalone","outformatradioarduino","outformatradioavr","outformatradiorpi"]) then

  set(findobj("tag", "outformatradiostalone"), "value", 0);
  set(findobj("tag", "outformatradioarduino"), "value", 0);
  set(findobj("tag", "outformatradioavr"), "value", 0);
  set(findobj("tag", "outformatradiorpi"), "value", 0);
  set(gcbo, "value", 1);
    if get(findobj("tag", "outformatradioarduino"), "value") == 1 then
	set(findobj("tag", "brdnmType"), "enable", "on");
    else
	set(findobj("tag", "brdnmType"), "enable", "off");
    end
    //disp("YES")
    //disp(get(findobj("tag", "brdnmType"), "value"))
//
// --- Copy Scilab code into C option ---
//
elseif or(get(gcbo, "tag")==["sciintocradioyes","sciintocradiono"]) then

  set(findobj("tag", "sciintocradioyes"), "value", 0);
  set(findobj("tag", "sciintocradiono"), "value", 0);

  set(gcbo, "value", 1);

//
// --- Build Tool option ---
//
elseif or(get(gcbo, "tag")==["buildtoolradiowin","buildtoolradiounix"]) then

  set(findobj("tag", "buildtoolradiowin"), "value", 0);
  set(findobj("tag", "buildtoolradiounix"), "value", 0);

  set(gcbo, "value", 1);

//
// --- Cancel conversion ---
//
elseif get(gcbo, "tag")=="cancelbtn" | get(gcbo, "tag")=="close_menu" then
  delete(findobj("tag", "sci2cfig"));

//
// --- Launch conversion ---
//
elseif get(gcbo, "tag")=="convertbtn" then
  UserScilabMainFile =  get(findobj("tag", "fileedit"), "string");

<<<<<<< HEAD
  UserSciFilesPaths =  get(findobj("tag", "subfunsedit"), "string");
=======
  UserSciFilesPaths = get(findobj("tag", "subfunsedit"), "string");
>>>>>>> 9e5793a7b05b23e6044a6d7a9ddd5db39ba375f0

//  Sci2CLibMainHeaderFName = get(findobj("tag", "headeredit"), "string");

  UserSciCodeMainDir = get(findobj("tag", "outedit"), "string");

  if get(findobj("tag", "runradioall"), "value") == 1 then
    RunMode = "All";
  elseif get(findobj("tag", "runradiotranslate"), "value") == 1 then
    RunMode = "Translate";
  else
    RunMode = "GenLibraryStructure";
  end

  if get(findobj("tag", "outformatradiostalone"), "value") == 1 then
    Target = "StandAlone";
  elseif get(findobj("tag", "outformatradioarduino"), "value") == 1 then
    Target = "Arduino";
  elseif get(findobj("tag", "outformatradioavr"), "value") == 1 then
    Target = "AVR";
  elseif get(findobj("tag", "outformatradiorpi"), "value") == 1 then
    Target = "RPi";
  end
  if get(findobj("tag", "brdnmType"), "value") == 2 then
    Board_name = "uno"
  elseif get(findobj("tag", "brdnmType"), "value") == 3 then
    Board_name = "mega"
  elseif get(findobj("tag", "brdnmType"), "value") == 4 then
    Board_name = "mega2560"
  elseif get(findobj("tag", "brdnmType"), "value") == 5 then
    Board_name = "nano"
  elseif get(findobj("tag", "brdnmType"), "value") == 6 then
    Board_name = "nano328"
  elseif get(findobj("tag", "brdnmType"), "value") == 7 then
    Board_name = "micro"
  elseif get(findobj("tag", "brdnmType"), "value") == 8 then
    Board_name = "mini"
  elseif get(findobj("tag", "brdnmType"), "value") == 9 then
    Board_name = "mini328"
  elseif get(findobj("tag", "brdnmType"), "value") == 10 then
    Board_name = "pro328"
  elseif get(findobj("tag", "brdnmType"), "value") == 11 then
    Board_name = "pro"
  elseif get(findobj("tag", "brdnmType"), "value") == 12 then
    Board_name = "pro5v328"
  elseif get(findobj("tag", "brdnmType"), "value") == 13 then
    Board_name = "pro5v"
  elseif get(findobj("tag", "brdnmType"), "value") == 14 then
    Board_name = "atmega168"
  elseif get(findobj("tag", "brdnmType"), "value") == 15 then
    Board_name = "atmega8"
  elseif get(findobj("tag", "brdnmType"), "value") == 16 then
    Board_name = "atmega328"
  elseif get(findobj("tag", "brdnmType"), "value") == 17 then
    Board_name = "bt328"
  elseif get(findobj("tag", "brdnmType"), "value") == 18 then
    Board_name = "bt"
  elseif get(findobj("tag", "brdnmType"), "value") == 19 then
    Board_name = "diecimila"
  elseif get(findobj("tag", "brdnmType"), "value") == 20 then
    Board_name = "esplora"
  elseif get(findobj("tag", "brdnmType"), "value") == 21 then
    Board_name = "ethernet"
  elseif get(findobj("tag", "brdnmType"), "value") == 22 then
    Board_name = "fio"
  elseif get(findobj("tag", "brdnmType"), "value") == 23 then
    Board_name = "leonardo"
  elseif get(findobj("tag", "brdnmType"), "value") == 24 then
    Board_name = "robotControl"
  elseif get(findobj("tag", "brdnmType"), "value") == 25 then
    Board_name = "robotMotor"
  elseif get(findobj("tag", "brdnmType"), "value") == 26 then
    Board_name = "lilypad328"
  elseif get(findobj("tag", "brdnmType"), "value") == 27 then
    Board_name = "lilypad"
  elseif get(findobj("tag", "brdnmType"), "value") == 28 then
    Board_name = "lilyPadUSB"
  else
    Board_name = "uno"

  //elseif get(findobj("tag", "brdnmType"), "value") == [1 0 0 0 0 0] then
    //Board_name = "none"
  end

  CopySciCodeIntoCCode = get(findobj("tag", "sciintocradioyes"), "value") == 1;

  if get(findobj("tag", "buildtoolradiowin"), "value") == 1 then
    NativeBuild = "nmake";
  elseif get(findobj("tag", "buildtoolradiounix"), "value") == 1 then
    NativeBuild = "make";
//  else
//    CCompilerPathStyle = "cygwin";
  end


  // -*- DEBUG ONLY -*-
<<<<<<< HEAD

  //mprintf("UserScilabMainFile = {%s}\n", UserScilabMainFile);
  //mprintf("UserSciFilesPaths = {%s}\n", UserSciFilesPaths);
  //mprintf("UserSciCodeMainDir = {%s}\n", UserSciCodeMainDir);
  //mprintf("RunMode = {%s}\n", RunMode);
  //mprintf("CopySciCodeIntoCCode = {%d}\n", bool2s(CopySciCodeIntoCCode));
  //mprintf("NativeBuild = {%s}\n", NativeBuild);
=======
  
//  mprintf("UserScilabMainFile = {%s}\n", UserScilabMainFile);
//  mprintf("UserSciFilesPaths = {%s}\n", UserSciFilesPaths);
//  mprintf("UserSciCodeMainDir = {%s}\n", UserSciCodeMainDir);
//  mprintf("RunMode = {%s}\n", RunMode);
//  mprintf("CopySciCodeIntoCCode = {%d}\n", bool2s(CopySciCodeIntoCCode));
//  mprintf("NativeBuild = {%s}\n", NativeBuild);
>>>>>>> 9e5793a7b05b23e6044a6d7a9ddd5db39ba375f0
  scilab2c(UserScilabMainFile, UserSciCodeMainDir, UserSciFilesPaths, RunMode, NativeBuild,Target,Board_name);
//
// --- sci2c help ---
//
elseif get(gcbo, "tag")=="sci2c_help_menu" then
  help sci2c

//
// --- About SCI2C ---
//
elseif get(gcbo, "tag")=="about_sci2c_menu" then
  help(gettext("About_SCI2C_tools"))
end

endfunction
