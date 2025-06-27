// Function Template
// In function overload, we need to type multiple functions with same name
// instead using function template -- write just one function with template, and copiler takes care of the rest
#include <iostream>

// defining template
template <class T>

// defining function with template
T max(T x, T y) {
    return x > y ? x : y;
}

int main() {
    std::cout << max(10, 5) << std::endl;
    std::cout << max(12.5f, 17.3f) << std::endl;

    return 0;
}