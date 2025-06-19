// Bitwise Oerators
// & AND
// | OR
// ^ XOR
// ~ NOT
// <<
// >>

#include <iostream>

int main() {
    int x = 11, y = 7, z;

    // AND
    z = x & y;
    std::cout << z << std::endl;

    // OR
    z = x | y;
    std::cout << z << std::endl;

    // XOR
    z = x ^ y;
    std::cout << z << std::endl;

    // NOT
    z = ~ x;
    std::cout << z << std::endl;

    // >> (right-shift the bits of x by y positions)
    z = x >> y;
    std::cout << z << std::endl;

    // << (left-shift the bits of x by y positions)
    z = x << y;
    std::cout << z << std::endl;

    return 0;
}
