// Check if the number is Even or Odd
#include <iostream>

int main() {
    int x;
    std::cout << "Enter a number: "<< std::endl;
    std::cin >> x;

    if (x % 2 == 0) {
        std::cout << "X is Even" << std::endl;
    }
    else {
        std::cout << "X is Odd" << std::endl;
    }
    return 0;
}