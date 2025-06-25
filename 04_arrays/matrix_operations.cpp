#include <iostream>

int main() {
    int A[2][3] = {{2, 4, 6}, {3, 5, 7}};
    int B[2][3] = {1, 1, 1, 1, 1, 1}; // Same as above
    int C[2][3];

    // Add A and B matrices and store the result in C
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++ ) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
    // Print the result from matrix C
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++ ) {
            std::cout << C[i][j] << " ";
        }
        std::cout << std::endl;
    }

    

    return 0;
}