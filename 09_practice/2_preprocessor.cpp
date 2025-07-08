/*
Preprocessor

#define IDENTIFIER
#define IDENTIFIER substitution_text
*/

#include <iostream>

#define MY_NAME "Alex"

int main() {
    std::cout << "My Name is: " << MY_NAME << '\n';

    return 0;
}