// Check age of a person
#include <iostream>

int main() {
    int age;
    std::cout << "Enter age: ";
    std::cin >> age;

    if (age >= 12 && age <= 50) {
        std::cout << "Young" << std::endl;
    }
    else {
        std::cout << "Not Young" << std::endl;
    }
    return 0;
}