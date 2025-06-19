// Overflow
// char x = 127;
// Range of char = -128 to 127

// ++x <-- when we try to increment it, as the range is limited, it loops back to -128
// --x <-- likewise, if our value of x = -128, and we try to reduce, it toops to 127
// This is called overflow

// In math terms:
// 127 is 01111111 <-- 0 indicates positive number, i.e., +127
// once we add 1, i.e., 01111111 + 1 = 10000000 <-- 1 indicates negative number, -128
// -( 2^7 ) * 1 + ( 2^6 ) * 0 + ... = -128

#include <iostream>

int main() {
    char x = 127;
    ++x;

    // Without typecasting it gives some garbage value
    std::cout << (int)x << std::endl;

    return 0;
}