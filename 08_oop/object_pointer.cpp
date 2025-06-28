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
    /*
    Rectangle r; // object created in stack
    Rectangle *p; // pointer created in stack

    p = &r;
    r.length = 10;
    // arrow operator to access the member of object using pointer
    p -> length = 10;
    p -> breadth = 5;
    std::cout << p -> area() << std::endl;
    */

    Rectangle *p; // pointer created in stack
    p = new Rectangle; // but this object is created in heap
    p -> length = 15;
    p -> breadth = 10;
    std::cout << p -> area() << std::endl;

    return 0;
}