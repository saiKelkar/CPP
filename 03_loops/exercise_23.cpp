// Sun of n natural numbers
#include <iostream>

int main() {
    int n;
    long sum = 0;
    std::cout << "Enter a number: ";
    std::cin >> n;

    for(int i = 0; i <= n; i ++) {
        sum += i;
    }
    std::cout << sum << std::endl;

    return 0;
}