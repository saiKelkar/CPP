#include <iostream>
#include <algorithm>

int main() {
    int A[] = {6, 11, 25, 8, 15, 7, 12, 20, 9, 14};

    int n = sizeof(A) / sizeof(A[0]);
    std::sort(A, A + n);

    int key = 12;
    int low = 0, high = n - 1;
    bool found = false;

    while(low <= high) {
        int mid = (low + high) / 2;

        if(A[mid] == key) {
            std::cout << "Found " << key << " at sorted index: " << mid << std::endl;
            found = true;
            break;
        }
        else if(A[mid] < key) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    if(!found) {
        std::cout << key << " not found in the array." << std::endl;
    }

    return 0;
}