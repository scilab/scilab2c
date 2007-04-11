// Generate the Abstract Syntactic Tree for the foo Scilab function

getf("foo.sci");
exec %program_p.sci;
t=macr2tree(foo);
t
