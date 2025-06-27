// Pass by Reference function
// Passing references to the function parameters
// while compilation, swap function gets copied inside main and everything works as one
// swap doen't work like a different function

#include <iostream>

void swap(int &a, int &b) {
    int temp;

    temp = a;
    a = b;
    b = temp; // a and b are like nicknames to x and y
}

int main() {
    int x = 10, y = 20;
    swap(x, y);

    std::cout << x << " " << y << std::endl; // prints 20 and 10 -- swapped

    return 0;
}