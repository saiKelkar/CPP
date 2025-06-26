// Heap -- dynamic allocation
// Dynamic allocation -- memory is allocated at runtime, not at compile time
// Size can be flexible
// Can be accessed only via pointers
// We control it (until delete or .free())

// Stack -- static allocation
// Static allocation -- memory is allocated at compile time, not at runtime
// Size should be known ahead of time
// Can be accessed directly
// Ends when scope/function ends

// int A[5] = {1, 2, 3, 4, 5} -- allocated in stack
// int* P; -- allocated in stack
// P = new int[5]; -- allocated in heap
// delete[] P; -- to delete the array in heap (also, to prevent memory leaks)

// A[2] = 15; -- to change element at index 2
// P[2] = 15; -- to access arrays in heap

#include <iostream>

int main() {
    int* p = new int[5];
    p[0] = 12;
    p[1] = 13;
    std::cout << p[1] << std::endl;

    delete[] p;
    p = nullptr;

    // user-defined size of an array in stack
    int size;
    std::cout << "Enter number of elements: ";
    std::cin >> size;
    int A[size];

    std::cout << sizeof(A) << std::endl; // size * 4 as int is 4 bytes
    // can't increase or decrease the size of the array

    // user-defined size of an array in heap
    int size;
    std::cout << "Enter number of elements: ";
    std::cin >> size;
    int* p = new int[size];
    delete[] p; // delete this array of initial size before asking the use for new size, otherwise problem of memory leak arises

    std::cout << "Enter new size: ";
    std::cin >> size;
    p = new int[size];
    delete[] p;

    return 0;
}