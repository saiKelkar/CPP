/*
Objects and Variables

Data -- any information that can be moved, processed, or stored by a computer.
Value -- a single piece of data (also called data value)

Literals -- values that are placed directly into the source code

Random Access Memory (RAM) -- main memory in a computer
When we run a program, the operating system loads the program into RAM.
Operating system also reserves some additional RAM for the program to use while it is running.
Think of RAM as a series of numbered boxes that can be used to store data while the program is running. 

*/

#include <iostream>

int main() {
    std::cout << 5;
    std::cout << -6.7;
    std::cout << 'H'; // characters placed in single-quotes
    std::cout << "Hello"; // text / strings placed in double-quotes
}