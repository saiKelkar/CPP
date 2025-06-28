#include <iostream>

class Rectangle {
private:
    int length; 
    int breadth;

public:
    // setters -- for user to set data
    void setLength(int l) {
        if(l >= 0){
            length = l;
        }
        else {
            length = 0;
        }  
    }
    void setBreadth(int b) {
        if(b >= 0){
            breadth = b;
        }
        else {
            breadth = 0;
        }  
    }
    // getters -- to get access to private variables by other parts of the code
    int getLength() {
        return length;
    }
    int getbreadth() {
        return breadth;
    }
    int area() {
        return length * breadth;
    }
    int perimeter() {
        return 2 * (length + breadth);
    }
};

int main() {
    Rectangle r;
    r.setLength(10);
    r.setBreadth(5);
    std::cout << "Length is " << r.getLength() << std::endl;
    std::cout << "Breadth is " << r.getbreadth() << std::endl;
    std::cout << r.area() << std::endl;

    return 0;
}