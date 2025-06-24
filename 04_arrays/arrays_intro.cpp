// Arrays
// int A[10];
// A = {5, 8, 3, 9, 7, 4, 8, 6, 3, 2};
// int A[10] = {5, 8, 3, 9, 7, 4, 8, 6, 3, 2};

// Accessing
// std::cout << A[3] << std::endl;

// std::cout << A; <-- this won't print the whole array

// Following is to get the number of elements in array A
// sizeof(A) -- total size of array in bytes
// sizeof(A[0]) -- size of one element

// int n = sizeof(A) / sizeof(A[0]);
// for(int i = 0; i < n; i++) {
//     std::cout << A[i] << std::endl;
// }

// all elements have to be of the same data type in an array
// char C[5] = {'A', 'B', 'c', 'd', 'E'};

// can initialize without giving size
// int B[] = {1, 2, 3, 5, 8};

#include <iostream>

int main() {
    int A[5] = {1, 2, 4, 5, 7};

    // Method-1 of printing an array
    int n = sizeof(A) / sizeof(A[0]);
    for(int i = 0; i < n; i++) {
        std::cout << A[i];
    }

    A[2] = 5;
    std::cout << A[2] << std::endl;

    // Method-2 of printing an array
    // Read as: for each x in A, do something with x
    for(int x : A){
        std::cout << x << std::endl;
    }

    // Using auto -- so we don't need to know the type of array A
    for(auto x : A) {
        std::cout << x << std::endl;
    }

    // Here the element which x is accessing in A, will change
    // so our A will become {2, 3, 5, 6, 8}
    // and x will print 23568
    for(int& x : A) {
        std::cout << ++x; 
    }
    
    return 0;
}