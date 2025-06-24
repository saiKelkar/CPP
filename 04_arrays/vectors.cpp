#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    // Create and print a vector
    std::vector<int> nums = {10, 20, 30, 40, 50};
    for(int num : nums) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Add elements to vector
    std::vector<int> values;
    values.push_back(5);
    values.push_back(15);
    values.push_back(25);
    for(int v : values) {
        std::cout << v << " ";
    }
    std::cout << std::endl;

    // Size of vector
    std::vector<int> data = {1, 2, 3, 4};
    std::cout << "Size of vector: " << data.size() << std::endl;

    // Access elements with [] or .at()
    std::vector<int> v = {3, 6, 9};
    std::cout << "First element: " << v[0] << std::endl;
    std::cout << "Second element: " << v.at(1) << std::endl;

    // Sorting a vector
    std::vector<int> A = {8, 9, 22, 5, 12, 0, 6, 17};
    std::sort(A.begin(), A.end());
    for(int x : A) {
        std::cout << x << " ";
    }
    std::cout << std::endl;
    A.pop_back();
    for(int x : A) {
        std::cout << x << " ";
    }
    std::cout << std::endl;

    // Multidimensional Array
    std::vector<std::vector<int>> mat(3, std::vector<int>(4, 0));
    /*
    4 vectors in each row, hence std::vector<int>(4, 0) inside mat(3, ..)
    mat = {
        {0, 0, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0}
    };
    */
    int val = 1;
    for(int i = 0; i < mat.size(); i++) {
        // mat[i].size() -- tells how many elements are in the i-th row
        for(int j = 0; j < mat[i].size(); j++) {
            mat[i][j] = val++;
        }
    }

    return 0;
}