// Compound Assignment
// +=, -=, *=, /=, %= 
// &=, |=, <<=, >>= 
#include <iostream>

int main() {
    int a = 10, b = 5, c = 15;
    int sum = 5;
    int product = 9;

    // Sum
    sum += a + b + c;
    std::cout << sum << std::endl;

    // Product
    product *= a * b * c;
    std::cout << product << std::endl;

    return 0;
}