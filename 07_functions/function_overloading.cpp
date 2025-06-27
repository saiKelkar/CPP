// Function overloading
// Writing using the same function name, but different argument list
// for example the add() function here, taking different arguments, but name remains the same
// this isn't allowed in C, but allowed in C++

// return type isn't considered, but parameter list should be different
// if I've int max(int, int) and float max(int, int) -- this isn't allowed, as the parameter list is the same

#include <iostream>

int add(int x, int y) {
    return (x + y);
}

int add(int x, int y, int z) {
    return (x + y + z);
}
float add(float x, float y) {
    return (x + y);
}

int main() {
    std::cout << add(3, 5) << std::endl;
    std::cout << add(2, 3, 6) << std::endl;
    std::cout << add(2.67f, 8.55f) << std::endl;

    return 0;
}