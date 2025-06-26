// Pointer -- a variable used for storing the address of data

// Two types of variables -- data variable and address variable
// when we declare a variable, say int x = 10
// and assume that int takes 2 bytes of memory
// also assuming that the addresses are 200 and 201
// To store the address of x, we say int* P
// pointer variable will also occupy some memory, say 2 bytes
// assuming the addresses are 300 and 301

// P = &x;
// address of x gets stored in P (so we have 200 in P)
// std::cout << x; -- displays 10
// std::cout << &x; -- displays 200
// std::cout << P; -- displays 200 (contents of P)
// std::cout << &P; -- displays 300 (address of P)
// std::cout << *P; -- displays 10 (the data which P is pointing to) 

// *P is called referencing (since it's accessing the data P is pointing to)
// &x shows the address of the variable

// int* P -- declaration
// p = &x -- initialization
// *p -- deferencing

#include <iostream>

int main() {
    int a = 10;
    int* p = &a;

    std::cout << a << std::endl;
    std::cout << &a << std::endl;
    std::cout << p << std::endl;
    std::cout << &p << std::endl;
    std::cout << *p << std::endl;

    return 0;
}

