// Pass by Address function
// Passing addresses to the function parameters

#include <iostream>

void swap(int* a, int* b) {
    int temp;

    temp = *a;
    *a = *b;
    *b = temp; // pointers point at the adresses, and dereferencing swaps the value located at those addresses
}

int main() {
    int x = 10, y = 20;
    swap(&x, &y);

    std::cout << x << " " << y << std::endl; // prints 20 and 10 -- swapped

    return 0;
}