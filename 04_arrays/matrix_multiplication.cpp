#include <iostream>
#include <vector>

int main() {
    std::vector<std::vector<int>> A = {
        {1, 2},
        {3, 4}
    };

    std::vector<std::vector<int>> B = {
        {5, 6},
        {7, 8}
    };

    int m = A.size(); // rows in A
    int n = A[0].size(); // columns in A, also rows in B -- A(m, n) and B(n, p)
    int p = B[0].size(); // columns in B

    std::vector<std::vector<int>> C(m, std::vector<int>(p, 0));

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < p; j++) {
            for(int k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    for(auto& row : C) {
        for(int val : row) {
            std::cout << val << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}