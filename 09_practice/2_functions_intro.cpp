/*
Introduction to Functions

Functions -- reusable sequence of statements designed to do a particular job
provides a way for us to split the program into small, modular chunks that are easier
to organize, test, and use
User-defined functions -- those we write ourselves

returnType functionName() { // this is function header (tells the compiler about the existence of the function)
    // this is function body (tells the compiler what the function does)
}
*/

#include <iostream>

void doPrint() {
    std::cout << "In doPrint()\n";
}

int main() {
    std::cout << "Starting main()\n";
    doPrint();
    std::cout << "Ending main()\n";

    return 0;
}