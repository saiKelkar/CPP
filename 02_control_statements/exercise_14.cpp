// Maximum of 3 numbers
#include <iostream>

int main() {
    int a, b, c;
    std::cout << "Enter three numbers: ";
    std::cin >> a >> b >> c;

    if (a > b && a > c) {
        std::cout << "Maximum is " << a << std::endl;
    }
    else if (b > a && b > c) {
        std::cout << "Maximum is " << b << std::endl;
    }
    else {
        std::cout << "Maximum is " << c << std::endl;
    }
    return 0;
}