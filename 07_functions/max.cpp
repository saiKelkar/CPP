#include <iostream>

int Max_num(int a, int b, int c) {
    int max = a;
    if(max < b && max > c) {
        max = b;
    }
    else if(max > b && max < c) {
        max = c;
    }
    return max;
}

int main() {
    std::cout << Max_num(7, 10, 5) << std::endl;

    return 0;
}