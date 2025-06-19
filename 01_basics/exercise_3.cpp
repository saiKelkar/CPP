// To find quadratic roots
#include <iostream>
#include <cmath>

int main() {
    
    int a = 2, b = 5, c = -3;
    // To find positive root of the quadratic equation
    float root_1 = (-b + std::sqrt(b * b - 4 * a * c)) / 2 * a;

    std::cout << root_1 << std::endl;
    return 0;
}