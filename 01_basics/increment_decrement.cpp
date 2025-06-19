// Increment Decrement Operations
// Pre-increment / decrement:
// ++x, --x
// Post-increment / decrement:
// x++, x--

#include <iostream>

int main() {
    int i = 5;
    int j = 0;
    
    // Pre-increment / decrement -- increment or decrement and pass the result to j
    j = ++i;
    std::cout << j << std::endl;
    j = --i;
    std::cout << j << std::endl;

    // Post-increment / decrement -- pass the result to j and increment or decrement
    j = i++;
    std::cout << j << std::endl;
    j = i--;
    std::cout << j << std::endl;
}