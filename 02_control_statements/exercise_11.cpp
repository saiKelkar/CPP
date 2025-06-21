// Working hours
#include <iostream>

int main() {
    int hours;
    std::cout << "Enter hour: ";
    std::cin >> hours;

    if (hours > 1 && hours < 24) {
        if (hours >= 9 && hours <= 18) {
            std::cout << "Working" << std::endl;
        }
        else {
            std::cout << "Leisure" << std::endl;
        }
    }

    return 0;
}