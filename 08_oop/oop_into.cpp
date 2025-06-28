// Object-oriented programming

/*

Principles of OOP:
1. Abstraction -- don't need to show the internal workings
2. Encapsulation (Data Hiding) 
3. Inheritance
4. Polymorphism

in classes, we make data as private and functions as public to avoid mishandelling

Class contains data (property) and functions (behaviour)

*/
#include <iostream>

class Rectangle {
public:
    int length; // these are by default private, hence write public
    int breadth;

    int area() {
        return length * breadth;
    }
    int perimeter() {
        return 2 * (length + breadth);
    }
};

int main() {
    Rectangle r1, r2; // r1 and r2 are objects
    
    r1.length = 10; // if variables are private, this gives an error
    r1.breadth = 5;
    std::cout << r1.area() << std::endl;
    std::cout << r1.perimeter() << std::endl;

    r2.length = 15;
    r2.breadth = 10;
    std::cout << r2.area() << std::endl;
    std::cout << r2.perimeter() << std::endl;

    return 0;
}