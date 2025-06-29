
class Rectangle {
private:
    int length;
    int breadth;

public:
    // Elaborate the function inside the class
    // called inline functions -- shouldn't have any complex logic
    int area(){
        return length * breadth;
    }
    int perimeter();

};

// Scope Resolution operator -- can have complex logic, cause machine code is generated separately
int Rectangle::perimeter() {
    return 2 * (length + breadth);
}

/*

int main() {
    Rectangle r(10, 5);
    std::cout << r.area();
    std::cout << r.perimeter();
}

For writing functions inside class -- it's machine code is included inside the main
For writing functions outside the class -- it's machine code is generated separately
*/