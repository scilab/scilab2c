function main()
  sup = 500;
  M = 50 * rand(1,sup);
  disp("M=")
  disp(M)
  //scf(1);
  //plot(1:sup, M);
  
  
  N = high_pass(M, 0.1, 1, 1);
  disp("N=")
  disp(N);
  //scf(2);
  //plot(1:sup, N);
endfunction