// Return by Reference
#include <iostream>
int& fun(int& a){ // a is a nickname to x
    std::cout << a << std::endl;
    return a; // a is retured, but as a is an alias, x is returned
}

int main() {
    int x = 10; // x is 10
    fun(x) = 25; // we just changed the value of x here from 10 to 25

    return 0;
}