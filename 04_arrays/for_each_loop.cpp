#include <iostream>

int main() {
    int A[] = {2, 4, 6, 8, 10};
    int sum = 0;
    int max = 0;
    int min = A[0];

    for(auto x : A) {
        std::cout << x << std::endl;
        sum += x;
        if(x > max){
            max = x;
        }
        if(x < min) {
            min = x;
        }
    }

    std::cout << sum << std::endl;
    std::cout << max << std::endl;
    std::cout << min << std::endl;

    return 0;
}