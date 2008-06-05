function res = SCI2Cstrncmp(s1,s2,n);
// function res = SCI2Cstrncmp(s1,s2,n);
// -----------------------------------------------------------------
// This function compares first n characters of strings s1 and s2.
// SCI2Cstrncmp(s1,s2,n) returns logical T (true) if the first n characters of
// the strings s1 and s2 are the same and logical 0 (false) otherwise.
//
// Input data:
// 
//
// Output data:
//
// Status:
// 16-Apr-2007 -- Nutricato Raffaele: Author.
// -----------------------------------------------------------------

res = (part(s1,1:n) == part(s2,1:n));

endfunction
