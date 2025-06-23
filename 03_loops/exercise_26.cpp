// Check if a number is a perfect number
#include <iostream>

int main() {
    int n;
    long sum = 0;
    std::cout << "Enter a number: ";
    std::cin >> n;
    
    for(int i = 1; i < n; i++) {
        if(n % i == 0) {
            sum += i;
        }
    }
    if(sum == n) {
        std::cout << "Perfect number" << std::endl;
    }
    else {
        std::cout << "Not a Perfect number" << std::endl;
    }
    return 0;
}