// Enum -- user-defined datatypes
// Typedef -- type definition
#include <iostream>

// Following are like defining constants under one name
// {mon, tue, wed, thu, fri, sat, sun} <-- mon starts with 0
// {mon=1, tue, wed, thu, fri, sat, sun} <- we are asking monday to start from 1
// {mon=1, tue, wed, thu=10, fri, sat, sun} <-- here mon is 1, tue = 2, wed = 3, thu is 10, fri = 11, sat = 12, sun = 13
enum day {mon=1, tue, wed, thu, fri, sat, sun};

typedef int marks;

int main() {
    day d;
    d = mon;
    std::cout << d << std::endl;
    std::cout << mon << std::endl;


    marks m1, m2;
    m1 = 50;
    m2 = 90;

    return 0;
}