// Pass by Value function
// Passing values to the function parameters

#include <iostream>

void swap(int a, int b) {
    int temp;

    temp = a;
    a = b;
    b = temp; // the swapping gets deleted from stack here as the function ends
}

int main() {
    int x = 10, y = 20;
    swap(x, y);

    std::cout << x << " " << y << std::endl; // prints 10 and 20 -- not swapped

    return 0;
}