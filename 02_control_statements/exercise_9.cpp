// Number is positive or negative
#include <iostream>

int main() {
    int x;
    std::cout << "Enter a number: "<< std::endl;
    std::cin >> x;

    if (x > 0) {
        std::cout << "x is Positive" << std::endl;
    }
    else {
        std::cout << "x is Negative" << std::endl;
    }
    return 0;
}