function InsertSetupInList(FunName,InArg,NInArg,SetupListFile,FunType)

    load(SetupListFile,'SetupList');

    //Check first if current input function already exists in the list
    nelements = size(SetupList);

    found=%F;
    if(FunType=='Setup')
        for i=1:nelements
            if(SetupList(i)(1) == FunName)
                for j=1:NInArg
                    if(SetupList(i)(j+1) ~= InArg(j).Name)
                        found = %F
                        break;
                    else
                        found = %T;
                    end
                end
            end
            if (found == %T) 
                break;			//One match found. No need to check further.
            end
        end

        if(found == %F)
            temp = list(FunName);
            for i=1:NInArg
                temp($+1) = InArg(i).Name;
            end
        end
        SetupList($+1) = temp;
    elseif((FunType=='Init')&((FunName=='cmd_digital_out')|(FunName=='cmd_analog_out')|(FunName=='cmd_digital_in')))
        for i=1:nelements
            if(SetupList(i)(1) == "pinMode")
                if(SetupList(i)(2) == InArg(2).Name)
                    found = %T
                    break;
                else
                    found = %F;
                end
            else

                found = %F;

            end

        end

        if(found == %F)
            temp = list('pinMode');
            temp($+1) = InArg(2).Name;
            if ((FunName=='cmd_digital_out')|(FunName=='cmd_analog_out'))
                temp($+1) = 'OUTPUT';
            elseif ((FunName == 'cmd_digital_in') | (FunName=='cmd_analog_in'))
                temp($+1) = 'INPUT';
            end	
            SetupList($+1) = temp;

        end


    end
    save(SetupListFile,'SetupList');

endfunction	 
