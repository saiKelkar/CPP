/*
Variable Assignment and Initialization

int w1 { 4.5 }; // list-initialization
this gives compiler error to convert 4.5 to a value an int can hold
-- such conversion is a narrowing conversion, since the fractional part of the value will be lost

Initialize your variables upron creation -- best practice

[[maybe_unused]] -- to get rid of unused initialized variable warnings
should be used selectively and have a legitimate reason for being unused
*/

#include <iostream>

int main() {
    int width { 5 }; // define variable width and initialize with initial value 5
    [[maybe_unused]] double pi { 3.14159 };

    std::cout << pi;
    std::cout << width;
    return 0;
}