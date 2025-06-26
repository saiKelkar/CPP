// int x = 10;
// int& y = x; // when initialize a reference, allocate it immediately
// y becomes an alias to x, a nickname of x
// now both x and y are pointing to the same address
// but y is just a reference, it isn't occupying any memory
// whereas, x is occupying 4 bytes of memory
// x++; // value becomes 11
// y++; // value becomes 12

// we cannot right &y = a, now y only belongs to x

#include <iostream>

int main() {
    int x = 10;
    int& y= x;

    std::cout << x << std::endl;
    y++;
    x++;
    std::cout << x << std::endl;
    std::cout << &x << " " << &y << std::endl; // prints the same address for both x and y

    return 0;
}