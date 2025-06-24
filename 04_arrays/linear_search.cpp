#include <iostream>

int main() {
    int A[] = {6, 11, 25, 8, 15, 7, 12, 20, 9, 14};

    int n = sizeof(A) / sizeof(A[0]);
    for(int i = 0; i < n; i++) {
        if(A[i] == 12) {
            std::cout << "Found 12 at the index: " << i << std::endl;
            break;
        }
    }
    return 0;
}