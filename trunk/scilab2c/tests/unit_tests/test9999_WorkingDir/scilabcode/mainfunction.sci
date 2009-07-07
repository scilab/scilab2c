//SCI2C: DEFAULT_PRECISION= DOUBLE
function mainfunction()

// ---------------------------------------
// --- Initialization of the parameters. ---
// ---------------------------------------


// ---------------------------------------
// --- Set number of point for quadrature .
// --- interval for quadrature [a,b]
// ---------------------------------------



Np =10 // number of point for quadrature 
a=1
b=5
 

// ---------------------------------------
// --- Compute Legendre-Gauss-Lobatto nodes, weights 
//. ---In standard [-1 1] interval
// ---------------------------------------

[x,w]=lglnodes(Np);
disp('x');
disp(x);
disp('w');
disp(w);
// ---------------------------------------
// --- Compute the nodes  
//. ---In [a,b]  pick a t points in the 
// --- desired interval
// -------------------------------------

t=((b-a)./2)*x+(b+a)./2;



Iab=((b-a)./2)*mysum(w.*Fint(t),11);

disp('Number of nodes for quadrature ');
disp(Np)
disp('Integral value in [a b] with Np points');
disp(Iab)


endfunction
