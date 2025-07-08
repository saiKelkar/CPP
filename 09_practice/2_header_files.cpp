/*
Header files

.h extension or .hpp or no extension at all

#include <iostream> -- we're requesting the preprocessor to copy all the 
contents (including forward declarations) from the file names "iostream" into the file doing #include

#include "add.h" -- insert contents of add.h at this point (use double quotes)

angled brackers for iostream vs double quotes for add.h
it's possible that a header file with the same filename might exist in multiple directories
oour use of angled brackets vs double quotes helps give the preprocessor a clue as to where it should look for header files
*/