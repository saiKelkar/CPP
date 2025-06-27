// Functions
// return-type function-name (parameter-list)
// can return atmost one value, but can take multiple values
// if the function isn't going to return anything, it should be called void

#include <iostream>

void display() {
    std::cout << "Hello" << std::endl;
}

int add(int x, int y) {
    return (x + y);
}

int main() {
    display();
    std::cout << add(5, 8) << std::endl;
    
    return 0;
}