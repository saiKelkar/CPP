#include <iostream>
#define PI 3.1415

int main() {
    float radius;
    float area;

    std::cout << "Enter radius: ";
    std::cin >> radius;

    area = PI * radius * radius;
    std::cout << "Area: " << area << std::endl;

    return 0;
}