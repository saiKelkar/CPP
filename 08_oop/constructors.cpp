// Three types of constructors: 
// 1. Default constructor (also called non-parameterized)
// 2. Parameterized
// 3. Non-parameterized 
// 4. Copy constructor

#include <iostream>

class Rectangle {
private:
    int length; 
    int breadth;

public:
    // Non-parameter constructor
    /*Rectangle() {
        length = 0;
        breadth = 0;
    }*/
    // Parameter constructor
    Rectangle(int l = 0, int b = 0) {
        setLength(l);
        setBreadth(b);
    }
    // Copy constructor
    Rectangle(Rectangle &r) {
        length = r.length;
        breadth = r.breadth;
    }

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
    Rectangle r; // sets length = 0, breadth = 0 -- non-parameter constructor
    Rectangle r(10, 5); // parameterized constructor
    Rectangle r2(r); // copy constructor
    
    return 0;
}