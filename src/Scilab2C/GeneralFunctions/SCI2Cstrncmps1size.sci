function res = SCI2Cstrncmps1size(s1,s2);
// function res = SCI2Cstrncmps1size(s1,s2);
// -----------------------------------------------------------------
// This function compares first n characters of strings s1 and s2.
// n is the size of the string s1.
// SCI2Cstrncmps1size returns logical T (true) if the first n characters of
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

n = length(s1);
res = (part(s1,1:n) == part(s2,1:n));

endfunction
