function test_eye()
  d0 = %pi
  d2 = [1 2 3 4 ; 4 5 6 8 ; 9 10 11 12 ; 13 14 15 16]
  z0 = d0 + %i * d0
  z2 = d2 + %i * d2
  
  disp(eye(d0))
  disp(eye(z0))
  disp(eye(d2))
  disp(eye(z2))
  //disp(eye(0,0)) // ! sci2c does not manage [] !
  disp(eye(1,1))
  disp(eye(d0,d0))
endfunction