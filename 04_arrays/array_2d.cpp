#include <iostream>

int main() {
    int A[2][3] = {{2, 4, 6}, {3, 5, 7}};
    int B[2][3] = {2, 4, 6, 3, 5, 7}; // Same as above

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            std::cout << A[i][j] << " ";
        }
        std::cout << std::endl;
    }

    // & is important in the case below -- otherwise it produces an error
    for(auto& x : A) {
        for(auto& y : x) {
            std::cout << y << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}