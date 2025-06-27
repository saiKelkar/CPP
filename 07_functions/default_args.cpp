// Default arguments
#include <iostream>

template <class T>

T add(T x, T y, T z = 0) {
    return (x + y + z);
}

int main() {
    std::cout << add(2, 3) << std::endl;
    std::cout << add(2.45f, 6.78f, 5.5f) << std::endl;

    return 0;
}