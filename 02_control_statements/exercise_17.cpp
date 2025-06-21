// Calculate discounted bill amount
#include <iostream>

int main() {
    int amount;
    std::cout << "Enter amount: ";
    std::cin >> amount;

    if (amount >= 5000) {
        std::cout << "20% discount" << std::endl;
    }
    else if (amount < 5000 && amount >= 2000) {
        std::cout << "10% discount" << std::endl;
    }
    else {
        std::cout << "5% discount" << std::endl;
    }
    return 0;
}