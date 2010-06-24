// This file is released into the public domain

Directories = [ "ASTManagement", ...
                "CCodeGeneration", ...
                "ErrorMessages", ...
                "findDeps", ...
                "FunctionAnnotation", ...
                "FunctionList", ...
                "GeneralFunctions", ...
                "SymbolTable", ...
                "ToolInitialization" ];


current_path_buildmacros = get_absolute_file_path("buildmacros.sce");

for K=1:size(Directories,"*")
  myfile = current_path_buildmacros + filesep() + Directories(K) + filesep() + "buildmacros.sce";
  if isfile(myfile) then
    exec(myfile);
  end
end

clear current_path_buildmacros;

tbx_build_macros(TOOLBOX_NAME, get_absolute_file_path('buildmacros.sce'));

clear tbx_build_macros;
