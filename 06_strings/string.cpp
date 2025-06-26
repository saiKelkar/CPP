// Two methods to represent strings:
// 1. Using char Array 
// 2. class string

// char x = 'A'; -- only a single letter
// char S[10] = "Hello"; -- H e l l o \0 _ _ _ _
// \0 -- string delimiter (null character)
// creates a string inside stack

// char S[] = "Hello"; -- automatically creates the appropriate sized array and a string delimiter
// char S[] = {'H', 'e', 'l', 'l', 'o', '\0'}; -- inclusion of '\0' makes it a string
// char S[] = {65, 66, 67, 68, '\0'}; -- using ASCII codes
// char* S = "Hello"; -- creating string inside heap (this might produce an error)

#include <iostream>
#include <string>

int main() {
    char* S = "Hello"; // Produces an error during compilation, avoid using as it may not work perfectly
    std::cout << S << std::endl;

    std::string A = "Hello";
    std::cout << A << std::endl;

    return 0;
}