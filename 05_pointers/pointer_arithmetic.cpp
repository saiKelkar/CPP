#include <iostream>

int main() {
    int A[5] = {2, 4, 6, 8, 10};
    int* p = A; // same as int* p = &A[0]
    p++; // moves to the next location, to A[1]
    int* q = &A[3];

    int d = q - p; // gives the distance between the two pointers

    return 0;
}