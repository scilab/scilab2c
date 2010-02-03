function main()
  sup = 5000;
  M = 50 * rand(sup,1);
  //scf(1);
  //plot(1:sup, M);
  
  
  N = high_pass(M, 0.1, 1, 1);
  //scf(2);
  //plot(1:sup, N);
endfunction