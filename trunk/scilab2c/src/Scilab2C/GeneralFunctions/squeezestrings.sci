function OutString = squeezestrings(InStringArray);
// function OutString = squeezestrings(InStringArray);
// -----------------------------------------------------------------
// Converts an array of strings into a single string.
//
// Input data:
// InStringArray: Array of strings.
//
// Output data:
// OutString: Output string.
//
// Status:
// 12-Apr-2007 -- Nutricato Raffaele: Author.
// -----------------------------------------------------------------

OutString = [];
for counterstrings = 1:max(size(InStringArray))
   OutString = OutString+InStringArray(counterstrings);
end

endfunction
