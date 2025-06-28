#include <iostream>

int linear_search(int arr[], int size, int key) {
    for(int i = 0; i < size; i++) {
        if(arr[i] == key) {
            return i;
        }
    }
    return -1;
}

int main() {
    int size;
    std::cout << "Enter the size of array: ";
    std::cin >> size;
    
    int arr[size]; // initialize an array of capacity size
    std::cout << "Enter numbers in the array: ";
    for(int i = 0; i < size; i++) {
        std::cin >> arr[i];
    }

    int key; // initialize key to find in the array
    std::cout << "Enter key: "; 
    std::cin >> key;

    int index = linear_search(arr, size, key);
    if(index != -1) {
        std::cout << "Key found at index: " << index << std::endl;
    }
    else {
        std::cout << "Key not found" << std::endl;
    }


    return 0;
}