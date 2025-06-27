#include <iostream>

int pow(int x, int y) {
    int product = 1;
    for(int i = 0; i < y; i++) {
        product = product * x;
    }
    return product;
}

int main() {
    std::cout << pow(2, 5) << std::endl;

    return 0;
}