// Factorial
#include <iostream>

int main() {
    int n;
    long long factorial = 1;
    std::cout << "Enter a number: ";
    std::cin >> n;

    for(int i = n; i > 0; i--) {
        factorial *= i;
    }
    std::cout << factorial << std::endl;

    return 0;
}