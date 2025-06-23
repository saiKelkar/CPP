// Display date name
#include <iostream>

int main() {

    int number;
    std::cout << "Enter a number between 0 and 6: ";
    std::cin >> number;

    switch (number)
    {
    case 0:
        std::cout << "Sunday" << std::endl;
        break;
    case 1:
        std::cout << "Monday" << std::endl;
        break;
    case 2:
        std::cout << "Tuesday" << std::endl;
        break;
    case 3:
        std::cout << "Wednesday" << std::endl;
        break;
    case 4:
        std::cout << "Thursday" << std::endl;
        break;
    case 5:
        std::cout << "Friday" << std::endl;
        break;
    case 6:
        std::cout << "Saturday" << std::endl;
        break;
    default:
        break;
    }

    return 0;
}