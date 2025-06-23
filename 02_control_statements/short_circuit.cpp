// if (a > b && a > c)
// if a > b is False, then the code will not check if a > c is True or False
// this is called short circuit

#include <iostream>

int main() {
    int a = 10, b = 5, i = 5;

    // since a < b is false, the following condition won't check if ++i <= b
    // i.e., i won't get incremented
    if (a < b && ++i <= b) {
        // std::cout << i;
    }
    // hence, the following prints out 5, and not 6
    std::cout << i << std::endl;

    return 0;
}