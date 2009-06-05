function test_double_OpLogGe()
  a = 1;
  c = [1 2 3]

  disp(a >= a); // d0d0OpLogEqd0
  disp(a >= c); // d0d2OpLogEqd2

  disp(c >= a); // d2d0OpLogEqd0
  disp(c >= c); // d2d2OpLogEqd2
    
endfunction
