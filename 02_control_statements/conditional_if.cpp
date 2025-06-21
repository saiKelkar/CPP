#include <iostream>

int main() {
    int x, y;

    std::cout << "Enter two numbers: " << std::endl;
    std::cin >> x;
    std::cin >> y;

    if (x > y) {
        std::cout << "Maximum number is " << x << std::endl;
    }
    else {
        std::cout << "Maximum number is " << y << std::endl;
    }

    return 0;
}