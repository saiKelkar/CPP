// Scope Resolution

#include <iostream>

int x = 10; // global variable

int main() {
    int x = 20;

    {
        int x = 30;
        std::cout << x << std::endl; // prints 30
    }
    std::cout << x << std::endl; // prints 20
    std::cout << ::x << std::endl; // prints 10 -- :: scope resolution to access global variable

    return 0;
}