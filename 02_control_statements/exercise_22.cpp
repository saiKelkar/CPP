// Arithmetic operations using switch
#include <iostream>

int main() {
    int a, b;
    char operation;
    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;

    std::cout << "Enter an operator: ";
    std::cin >> operation;

    switch (operation)
    {
    case '+':
        std::cout << a + b;
        break;
    case '-':
        std::cout << a - b;
        break;
    case '*':
        std::cout << a * b;
        break;
    case '/':
        if (b != 0) {
            std::cout << a / b;
        }
        else {
            std::cout << "Division by zero isn't possible!" << std::endl;
        }
        break;
    default:
        break;
    }

    return 0;
}