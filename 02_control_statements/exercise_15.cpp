// Nature of Quadratic Roots
#include <iostream>

int main() {
    float a, b, c;
    float d;
    std::cout << "Enter three numbers: ";
    std::cin >> a >> b >> c;

    d = (b * b) - (4 * a * c);

    if (d == 0) {
        std::cout << "Roots are real and equal" << std::endl;
    }
    else if (d > 0) {
        std::cout << "Roots are real and unequal" << std::endl;
    }
    else {
        std::cout << "Roots are imaginary" << std::endl;
    }
    return 0;
}