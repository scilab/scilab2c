function Test_Toeplitz()
    disp('Datatype: Double');
    ai = [1 2 3 4];
    bi = [1 6 7 8];
    as1 = toeplitz(ai,bi);
    disp(as1);
    
    disp('Datatype: Float');
    aid = float(ai);
    bid = float(bi);
    as2 = toeplitz(aid,bid);
    disp(as2);
       
    disp('Datatype: uint8');
    aiu8 = uint8(ai);
    biu8 = uint8(bi);
    as3  = toeplitz(aiu8,biu8);
    disp(as3);
     
    disp('Datatype: int8');
    ai8 = int8(ai);
    bi8 = int8(bi);
    as4= toeplitz(ai8,bi8);
    disp(as4);
    
    disp('Datatype: uint16');
    aiu16 = uint16(ai);
    biu16 = uint16(bi);
    as5 = toeplitz(aiu16,biu16);
    disp(as5);
    
    disp('Datatype: int16');
    ai16 = int16(ai);
    bi16 = int16(bi);
    as6 = toeplitz(ai16,bi16);
    disp(as6);
    
    disp('Datatype: Double Complex');
    adc = [1+%i*1 2+%i*2 3+%i*3 4+%i*4];
    bdc = [1+%i*1 6+%i*6 7+%i*7 8+%i*8];
    as7 = toeplitz(adc,bdc);
    disp(as7);

    disp('Datatype: Char');
    aic = ['a' 'b' 'c' 'd'];
    bic = ['a' 'x' 'y' 'z'];
    as9 = toeplitz(aic,bic);
    disp(as9);
    
endfunction
