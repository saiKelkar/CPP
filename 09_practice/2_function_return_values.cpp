/*
Function return values

C++ standard defines the meaning of 3 status codes:
0, EXIT_SUCCESS, EXIT_FAILURE

#include <cstdlib>

int main() {
    return EXIT_SUCCESS;
}
*/

#include <iostream>

int returnFive() {
    return 5;
}

int getValueFromUser() {
    std::cout << "Enter an integer: ";
    int input {};
    std::cin >> input;

    return input;
}

int main() {
    std::cout << returnFive() << '\n';
    std::cout << returnFive() + 2 << '\n';

    int num { getValueFromUser() };
    std::cout << num << " doubled is: " << num * 2 << '\n';

    return 0;
}

